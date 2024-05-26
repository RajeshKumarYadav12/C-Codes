#include<iostream>
#include<cmath>
using namespace std;
void sortarray(int a[],int n)
{
    if(n==0||n==1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    sortarray(a,n-1);

}
int main()
{
    int a[5]={3,4,5,1,2};
    sortarray(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
