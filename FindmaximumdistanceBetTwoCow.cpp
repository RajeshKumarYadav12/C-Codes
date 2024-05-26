#include<iostream>
using namespace std;

bool ispossible(int v[],int n,int k,int mid)
{
    int cowcount =1;
    int lastpos=v[0];

    for(int i=0;i<n;i++)
    {
        if(v[i]-lastpos>=mid)
        {
            cowcount++;
            if(cowcount==k)
            {
                return true;
            }
            lastpos=v[i];
        }
    }
    return false;
}
int aggresivecow(int v[],int n,int k)
{
    for(int i=1;i<n;i++)
    {
        int t=v[i];
        int j=i-1;
        while(j>=0&&v[j]>t)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=t;
    }
    
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,v[i]);
    }
    int e=maxi;
    int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(ispossible(v,n,k,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}



int main()
{
    int k,n;
    int v[5]={1,2,3,4,6};
    cout<<"Enter the number of cows "<<endl;
    cin>>k;
    int index=aggresivecow(v,5,k);
    cout<<"The maximun distance between two cow is "<<index;
    return 0;

}
