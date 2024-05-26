#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int a ,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    cout<<"GCD of two number is::"<<gcd(a,b);
    return 0;
}
