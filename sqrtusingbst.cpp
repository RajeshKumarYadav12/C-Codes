#include<iostream>
using namespace std;

long long int sqrtinteger(int k)
{
    long long int s=0;
    long long int e=k-1,ans=0;
    while(s<=e)
    {
        long long int mid=s+(e-s)/2;
        long long int square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        if(square<k)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return ans;
}

double moreprecision(int n,int precision,int tempsol)
{
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;

}



int main()
{

    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int tempsol=sqrtinteger(n);
    cout<<tempsol<<endl;
    cout<<"More precision value is "<<moreprecision(n,3,tempsol)<<endl;
    return 0;
}
