#include<iostream>
using namespace std;

int main()
{
    int n, m=41;

    while(true)
    {
    cout<<"Enter your number : ";
    cin>>n;

    //check your number
    if(n==m)
    {
        cout<<"You Found the number :";
        break;
    }
    else if(n>m)
    {
        cout<<"Its greater than your guess number\n";
    }
    else{
        cout<<"Its lesser than your guess number\n";
    }

    }

    return 0;
}