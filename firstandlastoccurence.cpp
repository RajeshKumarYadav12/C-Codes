#include<iostream>
using namespace std;

int firstoccurence(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int lastoccurence(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main()
{
    int a[9]={3,5,5,5,5,5,5,5,6};
    int index1=firstoccurence(a,9,5);
    int index2=lastoccurence(a,9,5);
    cout<<"first occurence of 5 is at index "<<index1<<endl;
    cout<<"last occurence of 5 is at index "<<index2<<endl;
    cout<<"Total number of occurence is "<<(index2-index1)+1<<endl;

    return 0;
}
