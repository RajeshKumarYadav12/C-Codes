#include<iostream>
using namespace std;

int main()
{
    int n,k,a[900];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element in array"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value of kth::"<<endl;
    cin>>k;
    vector<int>ans(n);
    for(int i=0;i<n;i++)
    {
        ans[(i+k)%n]=a[i];
    }
    cout<<"Rotate array are::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

return 0;
}
