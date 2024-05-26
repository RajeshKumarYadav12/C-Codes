#include<iostream>
using namespace std;
int main()
{
    int n,a[900];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
    }
    for(int i=0;i<n;i=i+2)
    {
        if((i+1)<n)
        {
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
        }
    }
    cout<<"OutputElement"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i] <<" ";
    }
}
