#include<iostream>
using namespace std;
//calculator
int main()
{
    int a,b;
    char ch;
    cout<<"Enter value of a :"<<endl;
    cin>>a;
    cout<<"Enter value of b :"<<endl;
    cin>>b;
    cout<<"Enter your operation you want to perform"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+': 
        cout<<(a+b)<<endl;
        break;
        case '-':
        cout<<(a-b)<<endl;
        break;
        case '*':
        cout<<(a*b)<<endl;
        break;
        case '/':
        cout<<(a/b)<<endl;
        break;
        case '%':
        cout<<(a%b)<<endl;
        break;
        default :
        cout<<"Invalid case"<<endl;
    }
        
    return 0;
}
