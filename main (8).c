#include<stdio.h>
void main()
{
    int i,j,n;
    float sum=0;
     float avgwt;
    printf("enter the no of processes\n");
    scanf("%d",&n);
    int ari[n],wt[n];
    int bt[n],ct[n],tat[n];
    printf("enter the arival time of processes\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ari[i]);
    }
    printf("enter the burst time\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
   ct[0]=bt[0];
    for(i=1;i<n;i++)
    {
      //ct[0]=bt[0];
    ct[i]=bt[i]+bt[i+1];
    tat[i]=ct[i]-ari[i];
    wt[i]=tat[i]-bt[i];
    }
    for(i=0;i<n;i++)
    {
       sum=sum+wt[i];
    }
    avgwt=sum/n;
    printf("process id | arival time | burst time |  ct |  tat  |  wt\n");
    for(i=0;i<n;i++)
    {
    printf("     %d     |      %d    |       %d   |   %d  |  %d  |  %d \n",i+1,ari[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("average waiting time is:\n");
    {
    printf("%f",avgwt);
    }
}