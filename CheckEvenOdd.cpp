#include<iostream>
using namespace std;

//even and odd
bool isEven(int num)
{
if(num&1) {
    return 0;//odd
}
else 
{
  return 1;  //even
}
}

int main()
{
    int a;
    cin>>a;
    if(isEven(a))
    {
        cout<<"Number is even"<<endl;
    }
    else
    {
        cout<<"Number is odd"<<endl;
    }
    return 0;
}
