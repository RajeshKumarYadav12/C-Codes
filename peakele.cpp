#include<iostream>
using namespace std;
int peekelement(int a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        int mid=s+(e-s)/2;

        if(a[mid]<a[mid+1])
        {
            s=mid+1;
        }
        else 
        {
            e=mid;      
        }
    }
    return s;
}
int main()
{
    int a[5]={1,3,5,4,2};
    int index=peekelement(a,5);
    cout<<"Peek element present at index "<<index<<" "<<"And value is "<<a[index]<<endl;
    return 0;

}
