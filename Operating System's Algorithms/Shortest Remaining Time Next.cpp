#include<bits/stdc++.h>
using namespace std;
class SRTN
{
public:
    int process,arrivalTime,cpuTime,tempCpuTime;
    SRTN() {}
    SRTN(int p, int aT, int cT)
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
    vector<SRTN> srtn;
    int arrivalTimes[n],cpuTimes[n];
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

    for(int i=0; i<n; i++)
    {
        srtn.push_back(SRTN(i+1,arrivalTimes[i],cpuTimes[i]));
    }

    //Sorting by arrivalTime
    sort(srtn.begin(),srtn.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });
    deque<SRTN> srtnDq;
    srtnDq.push_back(srtn[0]);
    vector<GanttChart> ganttChart;
    ganttChart.push_back(GanttChart(srtn[0].arrivalTime, srtn[0].process));


    // Calculating Gantt Chart
    for(int i=1; i<n; i++)
    {
        int remainingProcessTime=srtnDq.front().tempCpuTime-(srtn[i].arrivalTime-ganttChart.back().startTime);

        if(remainingProcessTime==0)
        {
            srtnDq.pop_front();
            ganttChart.push_back(GanttChart(srtn[i].arrivalTime, srtnDq.front().process));
        }
        else if(remainingProcessTime<0)
        {
            int tempCpuTime=srtnDq.front().tempCpuTime;
            srtnDq.pop_front();
            sort(srtnDq.begin(),srtnDq.end(),[](const auto& lhs,const auto& rhs)
            {
                return lhs.tempCpuTime<rhs.tempCpuTime;
            });
            ganttChart.push_back(GanttChart(tempCpuTime, srtnDq.front().process));
            i--;
            continue;
        }

        if(srtn[i].cpuTime<remainingProcessTime)
        {
            srtnDq.front().tempCpuTime=remainingProcessTime;
            srtnDq.push_front(srtn[i]);
            ganttChart.push_back(GanttChart(srtn[i].arrivalTime, srtn[i].process));
        }
        else
        {
            srtnDq.push_back(srtn[i]);
        }
    }

    int index=0;
    int tempCpuTime=-1;
    while(true)
    {
        tempCpuTime=ganttChart.back().startTime+srtnDq.front().tempCpuTime;
        srtnDq.pop_front();
        sort(srtnDq.begin(),srtnDq.end(),[](const auto& lhs,const auto& rhs)
        {
            return lhs.tempCpuTime<rhs.tempCpuTime;
        });
        if(srtnDq.size()<1)break;
        ganttChart.push_back(GanttChart(tempCpuTime,srtnDq.front().process));
    }

    // Printing Gantt Chart
    cout<<"Gantt Chart:"<<endl;
    int gcn=ganttChart.size();
    for(int i=0; i<gcn; i++)
    {
        cout<<"P"<<ganttChart[i].process<<"\t";
    }
    cout<<endl;
    for(int i=0; i<ganttChart.size(); i++)
    {
        cout<<ganttChart[i].startTime<<"\t";
    }
    cout<<tempCpuTime<<endl;


    // Calculating Waiting Time
    int waitingTimes[n+1];
    int turnaroundTimes[n+1];
    for(int i=0; i<n; i++)
    {
        int currentProcess=srtn[i].process;
        bool firstMatch=false;
        int waitingTime=0;
        int cProcessEndTime=0;
        for(int j=0; j<gcn; j++)
        {
            if(currentProcess==ganttChart[j].process)
            {
                if(!firstMatch)
                {
                    waitingTime+=ganttChart[j].startTime-srtn[i].arrivalTime;
                    firstMatch=true;
                }
                else
                {
                    waitingTime+=ganttChart[j].startTime-cProcessEndTime;
                }
                if(j<gcn-1)cProcessEndTime=ganttChart[j+1].startTime;
            }
        }
        waitingTimes[i]=waitingTime;
        turnaroundTimes[i]=waitingTime+srtn[i].cpuTime;

    }
    float sumWaitingTime=0.0;
    float sumTurnaroundTime=0.0;
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        sumWaitingTime+=waitingTimes[i];
        sumTurnaroundTime+=turnaroundTimes[i];
        cout<<"Process "<<srtn[i].process<<": Waiting Time: "<<waitingTimes[i]<<" Turnaround Time: "<<turnaroundTimes[i]<<endl;
    }
    cout<<endl;
    cout<<"Average Waiting Time: "<<(float)(sumWaitingTime/n)<<endl;
    cout<<"Average Turnaround Time: "<<(float)(sumTurnaroundTime/n)<<endl;
    return 0;
}
