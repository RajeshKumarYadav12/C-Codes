#include<iostream>
using namespace std;

bool is_valid(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
    {
        return true;
    }
    else
    {
        return false;
    }  
}

char tolower(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        return ch-'A'+'a';
    }
    return ch;
}
bool is_palindrome(string str)
{
    string temp="";
    for(int j=0; j<str.length(); j++)
    {
        if(is_valid(str[j]))
        {
            temp.push_back(tolower(str[j]));
        }
    }
    int s=0;
    int e=temp.length()-1;
    while(s<=e)
    {
        if(temp[s]!=temp[e])
        {
            return false;
        }
        else
        {
            s++,e--;
        }
    }
    return true;
}


int main()
{
    char inputstring[800];
    cout<<"Enter the string :"<<endl;
    cin>>inputstring;
    if(is_palindrome(inputstring))
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}
