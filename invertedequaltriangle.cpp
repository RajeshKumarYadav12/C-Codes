#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<pow(a,b)<<endl;
    cout<<a<<" "<<b<<"\n";
    cout<<"physics\n"<<"wallah"<<endl;
    int u;
    cin>>u;
    if(u%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }

    return 0;
}
