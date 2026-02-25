#include<iostream>
#include<math.h>
using namespace std;
void shiftdown(int a[],int root,int bottom);
void heapsort(int a[],int ub)
{
int i,temp;
for(i=(int)ceil(ub/2.0)-1;i>=0;i--)
{
shiftdown(a,i,ub);
}
for(i=ub;i>=1;i--)
{
    temp=a[0];
    a[0]=a[i];
    a[i]=temp;

    shiftdown(a,0,i-1);
}
}
void shiftdown(int a[],int root,int bottom)
{
    int done,maxchild,temp;
    done =0;
    while((root*2+1<=bottom)&&(!done))
    {
        if(root*2+1==bottom || a[root*2+1]>a[root*2+2])
        maxchild=root*2+1;
        else
        maxchild=root*2+2;
        if(a[root]<a[maxchild])
        {
            temp=a[root];
            a[root]=a[maxchild];
            a[maxchild]=temp;
            root=maxchild;
        }
        else done=1;
    }
}
int main()
{
    int n,i;
    int a[10];
    cout<<"enter array size:";
     cin>>n;
   cout<<"enter element:";
   for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<<"after heap sort:";
    heapsort(a,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}

