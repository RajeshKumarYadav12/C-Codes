#include<iostream>
using namespace std;
int main()
{
    int n,a[900];
    int count=0;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element im array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==s)
                {
                    count++;
                    cout<<"triplets are "<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }
    cout<<"Number of triplet pair is :"<<count<<endl;

}
