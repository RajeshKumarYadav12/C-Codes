#include<iostream>
using namespace std;

int tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp;
        temp=ch-'A'+'a';
        return temp;
    }
}

int getpalindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(tolowercase(name[s])!=tolowercase(name[e]))
        {
            return 0;
        }
        else
        {
            s++,e--;
        }
    }
    return 1;
}
void reverse(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[90];
    cout<<"Enter your name::";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    int len=getlength(name);
    cout<<"Length fo string is = "<<len<<endl;
    reverse(name ,len);
    cout<<"Reverse of string is :"<<name<<endl;

    
   cout<<"palindrome or not = "<<getpalindrome(name,len);
   return 0;
}
