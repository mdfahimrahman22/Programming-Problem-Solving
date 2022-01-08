#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class SJF
{
public:
    int process;
    int cpuTime;
    int arrivalTime;
    int waitingTime;
    int turnaroundTime;
    SJF() {}
    SJF(int p,int aT,int cT)
    {
        process=p;
        cpuTime=cT;
        arrivalTime=aT;
    }

};
class GanttChart
{

public:
    int startTime;
    int process;
    GanttChart() {}
    GanttChart(int sT, int p)
    {
        startTime=sT;
        process=p;
    }
};
int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int n;
    cout<<"Enter the number of process:";
    cin>>n;

    int cpuTimes[n],arrivalTimes[n];
    vector<SJF> sjf;

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
        sjf.push_back(SJF(i+1,arrivalTimes[i],cpuTimes[i]));
    }

    // Sorting by arrival time
    sort(sjf.begin(),sjf.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });

    // Calculating Gantt chart
    vector<GanttChart> ganttChart;
    int sumCpuTime=sjf[0].arrivalTime+sjf[0].cpuTime;
    ganttChart.push_back(GanttChart(sjf[0].arrivalTime,sjf[0].process));
    for(int i=1; i<n; i++)
    {
        // Sorting by CPU time
        sort(sjf.begin()+i,sjf.end(),[](const auto& lhs,const auto& rhs)
        {
            return lhs.cpuTime<rhs.cpuTime;
        });
        ganttChart.push_back(GanttChart(sumCpuTime,sjf[i].process));
        sumCpuTime+=sjf[i].cpuTime;
    }


    // Printing Gantt Chart
    cout<<"\nGantt Chart:\n";
    int gcn=ganttChart.size();
    for(int i=0; i<ganttChart.size(); i++)
    {
        cout<<ganttChart[i].startTime<<"---P"<<ganttChart[i].process<<"---";
    }
    cout<<sumCpuTime<<endl;

    // Sorting by process
    sort(sjf.begin(),sjf.end(),[](const auto& lhs, const auto& rhs){return lhs.process<rhs.process;});

    float avgWaitingTime=0.0;
    float avgTurnaroundTime=0.0;

    for(int i=0; i<n; i++)
    {
        int waitingTime=0;
        for(int j=0;j<gcn;j++){
            if(sjf[i].process==ganttChart[j].process){
                waitingTime=ganttChart[j].startTime-sjf[i].arrivalTime;
                break;
            }
        }
        sjf[i].waitingTime=waitingTime;
        sjf[i].turnaroundTime=waitingTime+sjf[i].cpuTime;

        avgWaitingTime+=sjf[i].waitingTime;
        avgTurnaroundTime+=sjf[i].turnaroundTime;
    }
    avgWaitingTime=avgWaitingTime/n;
    avgTurnaroundTime=avgTurnaroundTime/n;

    for(int i=0; i<n; i++)
    {
        cout<<"Process "<<sjf[i].process<<": Waiting Time: "<<sjf[i].waitingTime<<" Turnaround Time: "<<sjf[i].turnaroundTime<<endl;
    }
    cout<<"Average Waiting Time: "<<avgWaitingTime<<endl;
    cout<<"Average Turnaround Time: "<<avgTurnaroundTime<<endl;

    return 0;
}

//Test Case 1:
//3
//5 7 9
//4 0 2
//Test Case 2:
//5
//1 5 1 6 3
//2 1 4 0 2
