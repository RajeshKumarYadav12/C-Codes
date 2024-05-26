#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n==0)
    cout<<"Entered number is = 0"<<endl;
    else if(n<0)
    {
        cout<<"Entered number is negative "<<endl;
    }
    else
    {
        cout<<"Entered number is positive "<<endl;
    }
    return 0;
}
