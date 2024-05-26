#include<iostream>
using namespace std;
int main()
{
    int n,a[900];
    cout<<"Enter the element in array"<<endl;
    cin>>n;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^a[i];
    }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    cout<<ans<<endl;
}
