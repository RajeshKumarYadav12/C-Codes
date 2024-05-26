#include<iostream>
using namespace std;
//numbers of notes present in a number
int main()
{
    int n,x,r,p;
    n=1330;
    cout<<"press 1 for number 100 notes"<<endl;
    cout<<"press 2 for number 50 notes"<<endl;
    cout<<"press 3 for number 20 notes"<<endl;
    cout<<"press 4 for number 1 notes"<<endl;

    cout<<"Enter your choice :"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
        cout<<(n/100)<<endl;
        break;
        case 2:
        r=n%100;
        cout<<(r/50)<<endl;
        break;
        case 3:
        r=n%100;
        cout<<(r/20)<<endl;
        break;
        case 4:
        r=n%100;
        p=r%20;
        cout<<(p/1)<<endl;
        break;

        default :
        cout<<"Invailid case"<<endl;

    }
}
