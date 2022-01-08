#include<bits/stdc++.h>
using namespace std;
class RRS
{
public:
    int process,arrivalTime,cpuTime,tempCpuTime,waitingTime,turnaroundTime;
    RRS() {}
    RRS(int p, int aT, int cT)
    {
        process=p;
        arrivalTime=aT;
        cpuTime=cT;
        tempCpuTime=cT;
    }

};
class GanttChart
{
public:
    int startTime;
    int process;
    GanttChart() {}
    GanttChart(int sT,int p)
    {
        startTime=sT;
        process=p;
    }

};



int main()
{
    freopen("input.txt","r",stdin);

    int n;
    cout<<"Enter the number of process:";
    cin>>n;
    vector<RRS> rrs;
    int arrivalTimes[n],cpuTimes[n],timeQuantum,totalCpuTime=0;
    cout<<"Enter the CPU times:\n";
    for(int i=0; i<n; i++)
    {
        cin>>cpuTimes[i];
        totalCpuTime+=cpuTimes[i];
    }
    cout<<"Enter the arrival times:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arrivalTimes[i];
    }
    cout<<"Enter the time quantum: ";
    cin>>timeQuantum;

    for(int i=0; i<n; i++)
    {
        rrs.push_back(RRS(i+1,arrivalTimes[i],cpuTimes[i]));
    }

    //Sorting by arrivalTime
    sort(rrs.begin(),rrs.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });
    deque<RRS> rrsDq;
    rrsDq.push_back(rrs[0]);
    vector<GanttChart> ganttChart;
    ganttChart.push_back(GanttChart(rrs[0].arrivalTime, rrs[0].process));

    int rrsIndex=1;
    // Calculating Gantt Chart
    while(!rrsDq.empty())
    {
        int lastTime=ganttChart.back().startTime+timeQuantum;
        for(; rrsIndex<n;)
        {
            if(rrs[rrsIndex].arrivalTime<=lastTime)
            {
                rrsDq.push_back(rrs[rrsIndex]);
                rrsIndex++;
            }
            else
            {
                break;
            }
        }

        RRS tempRrs=rrsDq.front();
        int tempCpuTime=tempRrs.tempCpuTime-timeQuantum;
        rrsDq.pop_front();
        if(tempCpuTime<=0)
        {
            if(!rrsDq.empty())
            {
                ganttChart.push_back(GanttChart(lastTime-timeQuantum+tempRrs.tempCpuTime,rrsDq.front().process));
            }
        }
        else
        {
            tempRrs.tempCpuTime=tempCpuTime;
            rrsDq.push_back(tempRrs);
            ganttChart.push_back(GanttChart(lastTime,rrsDq.front().process));
        }
    }

    // Printing Gantt Chart
    cout<<"\nGantt Chart:\n";
    int gcn=ganttChart.size();
    for(int i=0; i<ganttChart.size(); i++)
    {
        cout<<ganttChart[i].startTime<<"---P"<<ganttChart[i].process<<"---";
    }
    cout<<totalCpuTime<<endl;

    // Sorting by process
    sort(rrs.begin(),rrs.end(),[](const auto& lhs, const auto& rhs){return lhs.process<rhs.process;});

    // Calculating Waiting & Turnaround Time
    int waitingTimes[n+1];
    int turnaroundTimes[n+1];
    for(int i=0; i<n; i++)
    {
        int currentProcess=rrs[i].process;
        bool firstMatch=false;
        int waitingTime=0;
        int cProcessEndTime=0;
        for(int j=0; j<gcn; j++)
        {
            if(currentProcess==ganttChart[j].process)
            {
                if(!firstMatch)
                {
                    waitingTime+=ganttChart[j].startTime-rrs[i].arrivalTime;
                    firstMatch=true;
                }
                else
                {
                    waitingTime+=ganttChart[j].startTime-cProcessEndTime;
                }
                if(j<gcn-1)cProcessEndTime=ganttChart[j+1].startTime;
            }
        }
        rrs[i].waitingTime=waitingTime;
        rrs[i].turnaroundTime=waitingTime+rrs[i].cpuTime;

    }
    float sumWaitingTime=0.0;
    float sumTurnaroundTime=0.0;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        sumWaitingTime+=rrs[i].waitingTime;
        sumTurnaroundTime+=rrs[i].turnaroundTime;
        cout<<"Process "<<rrs[i].process<<": Waiting Time: "<<rrs[i].waitingTime<<" Turnaround Time: "<<rrs[i].turnaroundTime<<endl;
    }
    cout<<endl;
    cout<<"Average Waiting Time: "<<(float)(sumWaitingTime/n)<<endl;
    cout<<"Average Turnaround Time: "<<(float)(sumTurnaroundTime/n)<<endl;
    return 0;
}
//Test Case 1:
//4
//5 7 9 9
//4 0 6 10
//3
//Test Case 2:
//5
//7 4 7 8 3
//19 14 0 4 9
//3
