#include<iostream>
using namespace std;
int binarysearch(int a[],int s,int e,int k)
{
    //not found
    if(s>e) 
    {
        return false;
    }
    int mid=s+(e-s)/2;
    //found
    if(a[mid]==k)
    {
        return true;
    }
    if(a[mid] < k)
    {
      return  binarysearch(a,s,mid+1,k);
    }
    else
    {
        return  binarysearch(a,s,mid-1,k);
    }
}
int main()
{
    int arr[5]={2,4,5,6,3};
    int key=3;
    
    cout<<binarysearch(arr,0,5,key)<<endl;
    return 0;
}
