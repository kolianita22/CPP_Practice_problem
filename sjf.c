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
    printf("Enter no process:");
    scanf("%d",&n);

    p process[n];
    p swap;
    int i,j;
    int time=0;

    for(i=0;i<n;i++)
    {
        process[i].pid=i;
        printf("Enter %d arrival time:");
        scanf("%d",&process[i].at);

        printf("Enter %d burst time:");
        scanf("%d",&process[i].st);


    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((process[i].st>process[j].st) && (process[j].at<=time))
            {
                swap=process[i];
                process[i]=process[j];
                process[j]=swap;

            }
        }
        time=time+process[i].st;
    }
    for(i=0;i<n;i++)
    {
        printf("process_id:%d",process[i].pid);
    }
    for(i=0;i<n;i++)
    {
        time=time+process[i].st;
        printf("Time Start:%d\n",time);
    }
    time=0;
    printf("\n\n\n");
    printf("pid\tat\tst\ttat\twt\n");
    for(i=0;i<n;i++)
    {
        time=time+process[i].st;
        printf("%d\t%d\t%d\t%d\t%d\n",process[i].pid,process[i].at,process[i].st,time-process[i].at,time-process[i].at-process[i].st);
    }

}