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

    sort(fcfs.begin(),fcfs.end(),[](const auto& lhs,const auto& rhs)
    {
        return lhs.arrivalTime<rhs.arrivalTime;
    });

//    cout<<"Process\tArrival Time\tCPU Time\n";
//    for(int i=0; i<n; i++)
//    {
//        cout<<fcfs[i].process<<"\t"<<fcfs[i].arrivalTime<<"\t"<<fcfs[i].cpuTime<<endl;
//    }
    int ganttChart[n+1]={0};
    ganttChart[0]=fcfs[0].arrivalTime;
    ganttChart[1]=fcfs[0].cpuTime;
    int sumCpuTime=ganttChart[0]+ganttChart[1];

    for(int i=2;i<=n;i++)
    {
        ganttChart[i]=sumCpuTime+fcfs[i-1].cpuTime;
        sumCpuTime=ganttChart[i];
    }
    cout<<"\nGantt Chart:"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<ganttChart[i]<<" ";
    }
    cout<<endl;
    float avgWaitingTime=0.0;
    float avgTurnaroundTime=0.0;

    for(int i=0;i<n;i++){
        fcfs[i].waitingTime=ganttChart[i]-fcfs[i].arrivalTime;
        fcfs[i].turnaroundTime=fcfs[i].waitingTime+fcfs[i].cpuTime;
        avgWaitingTime+=fcfs[i].waitingTime;
        avgTurnaroundTime+=fcfs[i].turnaroundTime;
    }
    avgWaitingTime=avgWaitingTime/n;
    avgTurnaroundTime=avgTurnaroundTime/n;
    sort(fcfs.begin(),fcfs.end(),[](const auto& lhs,const auto& rhs){
         return lhs.process<rhs.process;
         });

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<"Process "<<fcfs[i].process<<": Waiting Time: "<<fcfs[i].waitingTime<<" Turnaround Time: "<<fcfs[i].turnaroundTime<<endl;
    }
    cout<<"Average Waiting Time: "<<avgWaitingTime<<endl;
    cout<<"Average Turnaround Time: "<<avgTurnaroundTime<<endl;

    return 0;
}
