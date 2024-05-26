#include<iostream>
using namespace std;
int main()
{
   /* int n;
    cin>>n;
    //variable size array
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    int r,c;
    cin>>r>>c;
    int **arr=new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;

    return 0;

}
