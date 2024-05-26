#include<iostream>
using namespace std;
//counting
void printcounting(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    printcounting(a);
    return 0;
}
