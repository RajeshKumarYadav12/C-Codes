#include<iostream>
using namespace std;
int checkkey(int a[],int n,int k)
{
    if(n==0)
    {
        return false;
    }
    if(a[0]==k)
    {
        return true;
    }
    
        int remains=checkkey(a+1,n-1,k);
        return remains;
    
}
int main()
{
    int a[5]={2,3,4,5,1};
    int k=3;
    int index=checkkey(a,5,k);
    cout<<"check element presentornot :"<<index<<endl;
    return 0;
}

