#include<iostream>
#include<string>
using namespace std;
int main()
{
    string largest;
    string s="Raja";
    string s1="Mathematics";
    string s2="Rajeshkumaryadav";
    if((s>s1)&&(s>s2))
    {
        largest=s;
    }
    else if((s1>s2)&&(s1>s))
    {
        largest=s1;
    }
    else
    {
        largest=s2;
    }
    cout<<"Largest string is  "<<largest;
    return 0;
}
