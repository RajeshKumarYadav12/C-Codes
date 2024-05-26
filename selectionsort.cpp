#include<iostream>
using namespace std;

void selectionsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[minindex])
            {
                minindex=j;
            }
        }

    int t=a[i];
    a[i]=a[minindex];
    a[minindex]=t;

    }
    
}


int main()
{
    int a[5]={6,9,7,5,4};

    selectionsort(a,5);

    cout<<"Sorted array is "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}


