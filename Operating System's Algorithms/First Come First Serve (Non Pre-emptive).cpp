#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class FCFS
{
public:
    int process;
    int cpuTime;
    int arrivalTime;
    int waitingTime;
    int turnaroundTime;
    FCFS() {}
    FCFS(int p,int aT,int cT)
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
    vector<FCFS> fcfs;

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
        fcfs.push_back(FCFS(i+1,arrivalTimes[i],cpuTimes[i]));
    }

    // Sorting by arrival time
    sort(fcfs.begin(),fcfs.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });

    // Calculating Gantt chart
    vector<GanttChart> ganttChart;
    int sumCpuTime=fcfs[0].arrivalTime;

    for(int i=0; i<n; i++)
    {
        ganttChart.push_back(GanttChart(sumCpuTime,fcfs[i].process));
        sumCpuTime+=fcfs[i].cpuTime;
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
    sort(fcfs.begin(),fcfs.end(),[](const auto& lhs, const auto& rhs){return lhs.process<rhs.process;});

    float avgWaitingTime=0.0;
    float avgTurnaroundTime=0.0;

    for(int i=0; i<n; i++)
    {
        int waitingTime=0;
        for(int j=0;j<gcn;j++){
            if(fcfs[i].process==ganttChart[j].process){
                waitingTime=ganttChart[j].startTime-fcfs[i].arrivalTime;
                break;
            }
        }
        fcfs[i].waitingTime=waitingTime;
        fcfs[i].turnaroundTime=waitingTime+fcfs[i].cpuTime;

        avgWaitingTime+=fcfs[i].waitingTime;
        avgTurnaroundTime+=fcfs[i].turnaroundTime;
    }
    avgWaitingTime=avgWaitingTime/n;
    avgTurnaroundTime=avgTurnaroundTime/n;

    for(int i=0; i<n; i++)
    {
        cout<<"Process "<<fcfs[i].process<<": Waiting Time: "<<fcfs[i].waitingTime<<" Turnaround Time: "<<fcfs[i].turnaroundTime<<endl;
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
//4
//5 3 8 6
//0 1 2 3
