#include<iostream>
using namespace std;
void quicksort(int A[],int lb,int ub);
int partition(int A[],int lb,int ub);

void quicksort(int A[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
        loc=partition(A,lb,ub);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,ub);

    }
    return;
}
int partition(int A[],int lb,int ub)
{
    int pivot=A[lb],start=lb,end=ub,temp;
    while(start<end)
    {
        while(A[start]<=pivot)
        start++;
        while(A[end]>pivot)
        end--;
        if(start<end)
        {
            temp=A[start];
            A[start]=A[end];
            A[end]=temp;
        }

    }
    temp=A[lb];
    A[lb]=A[end];
    A[end]=temp;
    return end;
}

int main()
{
    int A[50];
    int i,n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter element:";
    for(i=0;i<n;i++)
    {
        cin>>A[i];

    }
quicksort(A,0,n-1);
cout<<"element after sorting:";
for(i=0;i<n;i++)

{
    cout<<A[i];
}

}
