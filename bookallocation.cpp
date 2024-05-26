#include<iostream>
using namespace std;


bool ispossible(int a[],int n,int m,int mid)
{
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+a[i]<=mid)
        {
            pagesum+=a[i];
        }
        else
        {
            studentcount++;
            if(studentcount>m || a[i]>mid)
            {
                return false;
            }
            pagesum=a[i];
        }
    }
    return true;
}

int bookallocate(int a[],int n,int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int e=sum;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossible(a,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}



int main()
{
    int a[4]={10,20,30,40};
    int m;
    cout<<"Enter the number of student "<<endl;
    cin>>m;
    int index=bookallocate(a,4,m);
    cout<<"Minimum sum of pages "<<index;
    return 0;
}
