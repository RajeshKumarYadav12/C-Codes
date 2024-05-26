#include<iostream>
using namespace std;

void insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int t=a[i];
        for( ;j>=0;j--)
        {
            if(a[j] > t)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=t;
    }
}




int main()
{
    int a[6]={9,6,5,4,3,2,};
    insertionsort(a,6);
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
