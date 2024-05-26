#include<iostream>
using namespace std;

int print(int n)
{
    //base case
    if(n==0)
    return 0;
    print(n-1);
    cout<<n<<endl;
    
    
}

int main()
{
    int n;
    cout<<"Enter a number::";
    cin>>n;
    print(n);
    return 0;
}
