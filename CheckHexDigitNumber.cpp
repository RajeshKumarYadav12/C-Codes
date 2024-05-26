#include<iostream>
#include<string>
using namespace std;
int main()
{
    const string hexdigits="0123456789ABCDEF";
    cout<<"Enter the value from 0-15 ::";
    string result;
    string:: size_type ip;
    while(cin>>ip)
    {
        if(ip<hexdigits[ip])
        {
        result+=hexdigits[ip];
        }
    }
    cout<<result;

}
