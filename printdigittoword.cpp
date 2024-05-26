#include<iostream>
#include<string>
using namespace std;

void sayword(int n , string a[])
{
    if(n==0)
    {
        return ;
    }
    int digit=n%10;
    n=n/10;
    sayword(n ,a);

    cout<<a[digit]<<" ";
}


int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    sayword(n , arr);
    cout<<endl;
    return 0;
}
