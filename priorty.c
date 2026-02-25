#include<stdio.h>
typedef struct process{
    int pid;
    int at;
    int st;
    int tat;
    int wt;
    int priorty;
}p;
int main()
{
    int n;
    printf("Enter the no process:");
    scanf("%d",&n);

    p process[n];
    p swap;
    int i,j;
    int time=0;

    for(i=0;i<n;i++)
    {
        process[i].pid=i;
        printf("Enter %d Arrival time:",i);
        scanf("%d",&process[i].at);

        printf("Enter %d burst time:",i);
        scanf("%d",&process[i].st);
        printf("Enter %d priority:",i);
        scanf("%d",&process[i].priorty);



    }
    for(i=0;i<n;i++)
    {
        time=time+process[i].st;
        //printf("Start time:%d\t",time);
    }
    int min=100;
    int t;
    for(i=0;i<time;i++)
    {
        min=100;
        for(j=0;j<n;j++)
        {
            if(process[j].at<=i)
            {
                if((process[j].priorty<min)&& (process[j].st>0))
                {
                    min=process[j].priorty;
                    t=j;

                }
            }
        }
        process[t].st=process[t].st-1;
    
        printf("%d\n",process[i].pid);
    }
}