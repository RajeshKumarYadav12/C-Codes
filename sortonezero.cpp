#include<iostream>
using namespace std;

void sortone(int a[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(a[left]==0 && left<right)
        {
            left++;
        }
        while(a[right]==1 && left<right)
        {
            right--;
        }
        if(left<right)
        {
            swap(a[left],a[right]);
            left++,right--;
        }
    }
}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
   
    int a[8]={1,1,1,1,0,1,0,0};
    sortone(a,8);
    printarray(a,8);
    return 0;
}
