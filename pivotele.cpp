#include<iostream>
using namespace std;
int pivotelement(int a[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int binarysearch(int a[],int start,int n,int key )
{
    start=0;
    int end=n-1;
    while(start<end)
    {
        int mid=start+(end-start)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int findposs(int a[],int start,int n,int k)
{
    start=0; 
    int pivot=pivotelement(a,n);
        
    if(k>=a[pivot]&&k<=a[n-1])
    {
        return binarysearch(a,pivot,n-1,k);
    }
    else
    {
        return binarysearch(a,start,pivot-1,k);
    }
}
int main()
{
    int a[5]={3,4,5,1,2};
    int index=pivotelement(a,5);
    cout<<"Pivot element present at index "<<index<<endl;
    cout<<"Element 2 is present at index "<<findposs(a,0,5,2);
    return 0;
}
