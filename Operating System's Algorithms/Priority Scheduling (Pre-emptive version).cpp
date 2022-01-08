#include<bits/stdc++.h>
using namespace std;
class PS
{
public:
    int process,arrivalTime,cpuTime,priority,tempCpuTime,waitingTime,turnaroundTime;
    PS() {}
    PS(int _process, int aT, int cT,int _priority)
    {
        process=_process;
        arrivalTime=aT;
        cpuTime=cT;
        tempCpuTime=cT;
        priority=_priority;
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
    //freopen("input.txt","r",stdin);

    int n;
    cout<<"Enter the number of process:";
    cin>>n;
    vector<PS> ps;
    int arrivalTimes[n],cpuTimes[n],priority[n];
    cout<<"Enter the CPU times:\n";
    for(int i=0; i<n; i++)
    {
        cin>>cpuTimes[i];
    }
    cout<<"Enter the arrival times:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arrivalTimes[i];
    }

    cout<<"Enter the priorities:\n";
    for(int i=0; i<n; i++)
    {
        cin>>priority[i];
    }

    for(int i=0; i<n; i++)
    {
        ps.push_back(PS(i+1,arrivalTimes[i],cpuTimes[i],priority[i]));
    }

    //Sorting by arrivalTime
    sort(ps.begin(),ps.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });
    deque<PS> psDq;
    psDq.push_back(ps[0]);
    vector<GanttChart> ganttChart;
    ganttChart.push_back(GanttChart(ps[0].arrivalTime, ps[0].process));


    // Calculating Gantt Chart
    for(int i=1; i<n; i++)
    {
        int cProcessPriority=psDq.front().priority;
        int remainingProcessTime=psDq.front().tempCpuTime-(ps[i].arrivalTime-ganttChart.back().startTime);

        if(remainingProcessTime==0)
        {
            psDq.pop_front();
            psDq.push_back(ps[i]);
            sort(psDq.begin(),psDq.end(),[](const auto& lhs, const auto& rhs)
            {
                return lhs.priority<rhs.priority;
            });

            ganttChart.push_back(GanttChart(ps[i].arrivalTime, psDq.front().process));
        }
        else if(remainingProcessTime<0)
        {
            int tempCpuTime=ganttChart.back().startTime+psDq.front().tempCpuTime;
            psDq.pop_front();
            sort(psDq.begin(),psDq.end(),[](const auto& lhs,const auto& rhs)
            {
                return lhs.priority<rhs.priority;
            });
            ganttChart.push_back(GanttChart(tempCpuTime, psDq.front().process));
            i--;
            continue;
        }

        if(ps[i].priority<cProcessPriority)
        {
            psDq.front().tempCpuTime=remainingProcessTime;
            psDq.push_front(ps[i]);
            ganttChart.push_back(GanttChart(ps[i].arrivalTime, ps[i].process));
        }
        else
        {
            psDq.push_back(ps[i]);
        }
    }

    int index=0;
    int sumCpuTime=0;
    while(true)
    {
        sumCpuTime=ganttChart.back().startTime+psDq.front().tempCpuTime;
        psDq.pop_front();
        sort(psDq.begin(),psDq.end(),[](const auto& lhs,const auto& rhs)
        {
            return lhs.priority<rhs.priority;
        });
        if(psDq.size()<1)break;
        ganttChart.push_back(GanttChart(sumCpuTime,psDq.front().process));
    }

    // Printing Gantt Chart
    cout<<"\nGantt Chart:\n";
    int gcn=ganttChart.size();
    for(int i=0; i<ganttChart.size(); i++)
    {
        cout<<ganttChart[i].startTime<<"---P"<<ganttChart[i].process<<"---";
    }
    cout<<sumCpuTime<<endl;


    // Calculating Waiting Time
    int waitingTimes[n+1];
    int turnaroundTimes[n+1];
    for(int i=0; i<n; i++)
    {
        int currentProcess=ps[i].process;
        bool firstMatch=false;
        int waitingTime=0;
        int cProcessEndTime=0;
        for(int j=0; j<gcn; j++)
        {
            if(currentProcess==ganttChart[j].process)
            {
                if(!firstMatch)
                {
                    waitingTime+=ganttChart[j].startTime-ps[i].arrivalTime;
                    firstMatch=true;
                }
                else
                {
                    waitingTime+=ganttChart[j].startTime-cProcessEndTime;
                }
                if(j<gcn-1)cProcessEndTime=ganttChart[j+1].startTime;
            }
        }
        ps[i].waitingTime=waitingTime;
        ps[i].turnaroundTime=waitingTime+ps[i].cpuTime;

    }
    float sumWaitingTime=0.0;
    float sumTurnaroundTime=0.0;


    // Sorting by process
    sort(ps.begin(),ps.end(),[](const auto& lhs, const auto& rhs)
    {
        return lhs.process<rhs.process;
    });

    // Printing Waiting Time & Turnaround Time
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        sumWaitingTime+=ps[i].waitingTime;
        sumTurnaroundTime+=ps[i].turnaroundTime;
        cout<<"Process "<<ps[i].process<<": Waiting Time: "<<ps[i].waitingTime<<" Turnaround Time: "<<ps[i].turnaroundTime<<endl;
    }
    cout<<endl;

    cout<<"Average Waiting Time: "<<(float)(sumWaitingTime/n)<<endl;
    cout<<"Average Turnaround Time: "<<(float)(sumTurnaroundTime/n)<<endl;
    return 0;
}
//Test Case 1:
//3
//5 7 9
//4 0 2
//0 2 1
