#include<stdio.h>
typedef struct process{
    int pid;
    int at;
    int st;
    int tat;
    int wt;
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


    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(process[j].at>process[j+1].at)
            {
                swap=process[j];
                process[j]=process[j+1];
                process[j+1]=swap;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("process_id %d",process[i].pid);
    }
    time=0;
    printf("\n");
    for(i=0;i<n;i++)
    {
        time=time+process[i].st;
        printf("Start time:%d\t",time);

    }
    time=0;
    printf("\n\n\n");
    printf("pid\tat\tst\ttst\twt\n");
    for(i=0;i<n;i++)
    {
        time=time+process[i].st;
        printf("%d\t%d\t%d\t%d\t%d\n",process[i].pid,process[i].at,process[i].st,time-process[i].at,time-process[i].at-process[i].st);
    }
}