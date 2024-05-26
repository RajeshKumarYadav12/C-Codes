#include<iostream>
using namespace std;
int bubblesort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}

int main()
{
    int a[5]={4,5,6,3,32};

    bubblesort(a,5);

    cout<<"Sorted array is "<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
