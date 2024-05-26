#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key )
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if(key<a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int index=binarysearch(a,9,5);
    cout<<"Index of 5 is "<<index<<endl;
    return 0;
}
