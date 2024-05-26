#include<iostream>
using namespace std;

//nCr
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int num=factorial(n);
    int din=factorial(r)*factorial(n-r);
    int ans=num/din;
    return ans;
}

int main()
{
    int n,r;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of r"<<endl;
    cin>>r;
    int ans=nCr(n,r);
    cout<<"nCr is "<<ans<<endl;
    return 0;

}
