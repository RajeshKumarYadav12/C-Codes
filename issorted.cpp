#include<iostream>
using namespace std;

bool issorted(int a[],int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    else
    {
        bool remainingpart=issorted(a+1,size-1);
        return remainingpart;
    }

}
int main()
{
    int a[5]={3,4,5,3,7};
    cout<<issorted(a,5);
    return 0;

}
