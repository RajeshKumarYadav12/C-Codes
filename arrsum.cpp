#include<iostream>
using namespace std;
int sumarray(int a[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return a[0];
    }
    
        int remainingpart=sumarray(a+1,n-1);
        return a[0]+remainingpart;
    
}
int main()
{
    int a[5]={2,3,4,5,1};

    int sum=sumarray(a,5);
    cout<<"sum of array element :"<<sum<<endl;
    return 0;
}

