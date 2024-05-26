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

int painterpartition(int a[],int n,int m)
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
    int a[4]={5,5,5,5};
    int m;
    cout<<"Enter the number of painters "<<endl;
    cin>>m;
    int index=painterpartition(a,4,m);
    cout<<"Minimum time to take for paints "<<index<<" "<<"per uint time";
    return 0;
}
