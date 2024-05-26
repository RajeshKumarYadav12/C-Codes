#include<iostream>
using namespace std;
int main()
{
    int a[900],n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the element in array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Reverse of array element:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
