#include<iostream>
using namespace std;

int largestrowsum(int a[][3],int c,int r)
{
    int maxi=0;
    int rowindex=-1;
    for(int row=0;row<r;row++)
    {
        int sum=0;
        for(int col=0;col<c;col++)
        {
            sum+=a[row][col];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"Largestrow sum is::"<<maxi<<endl;
    return rowindex+1;
}
void colsum(int arr[][3],int r,int c)
{
    for(int col=0;col<r;col++)
    {
        int sum=0;
        for(int row=0;row<c;row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}
void rowsum(int arr[][3],int r,int c)
{
    for(int row=0;row<r;row++)
    {
        int sum=0;
        for(int col=0;col<c;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" "<<endl;
    }
    cout<<endl;
}





int ispresent(int arr[][3],int r,int c,int target)
{
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(arr[row][col]==target)
            return 1;
            
        }
        cout<<endl;
    }
    return 0;
}
int main()
{
    int arr[3][3],t;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin>>arr[row][col];
        }
    }
    //printing array
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the target numbers::";
    cin>>t;
    cout<<ispresent(arr,3,3 ,t)<<endl;
   
    cout<<"Rowwise sum::"<<endl;
    rowsum(arr,3,3);
    cout<<"Colwise sum::"<<endl;
    colsum(arr,3,3);
    cout<<"Largest sum at rowindex ::"<<largestrowsum(arr,3,3);
    return 0;
}
