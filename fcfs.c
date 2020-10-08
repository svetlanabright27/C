#include<stdio.h>

void main()
{
    int n,b[50],w[50],tt[50],avw=0,avtt=0,i,c;
    printf("FCFS (Non-preemptive)\n");
    printf("Enter total number of processes:");
    scanf("%d",&n);

    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&b[i]);
    }
    c=0;
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        c += b[i];
        tt[i] = c;
        w[i]=tt[i]-b[i];
        avw+=w[i];
        avtt+=tt[i];
        printf("\nP[%d]\t\t  %d\t\t  %d\t\t  %d",i+1,b[i],w[i],tt[i]);
    }

    avw/=n;
    avtt/=n;

    printf("\n\nAverage Waiting Time:%d",avw);
    printf("\nAverage Turnaround Time:%d\n\n",avtt);

}
