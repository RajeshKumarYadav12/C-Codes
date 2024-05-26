#include<iostream>
using namespace std;

int checkarray(int a[],int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            count++;
        }
    }
    if(a[n-1]>a[0])
    {
        count++;
    }
return count<=1;
}

int main()
{
    int n, a[900];
    cout<<"Enter the  size of array :"<<endl;
    cin>>n;
    cout<<"Enter the element in array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   cout<<checkarray(a,n);
return 0;
}

