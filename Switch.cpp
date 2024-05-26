#include<iostream>
//using std::cout;
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number of case"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
        cout<<"first"<<endl;
        break;
        case 2:
        cout<<"second"<<endl;
        break;
        case 3:
        cout<<"Third"<<endl;
        break;

        default :
        cout<<"default case"<<endl;

    }
    return 0;
}
