#include<iostream>
#include<string>
using namespace std;

int main()
{
    string readme ("Super Boy");
    for(auto ch:readme)
    {
        cout<<ch<<endl;
    }
    
string read ("Rajesh,kumar!!!!!");
    int punct_count=0;
    for(auto ch : read)
    {
        if(ispunct(ch))
        {
          punct_count++;
        }
    }
    cout<<"Number of charactor in readme is "<<readme<<"= "<<punct_count<<endl;

  string rd ("super,thirty");
  for(auto &ch : rd)
  {
    ch=toupper(ch);
  }

  cout<<"In upper case string :"<<endl<<rd<<endl;

  string rd1 ("hello world");
  {
    if(!rd1.empty())
    {
        rd1[0]=toupper(rd1[0]);
        cout<<rd1<<endl;

    }
  }

string rd2 ("hello world");
    for(auto ch :rd2)
    {
        for(int i=0;i!=rd2.size();i++)
        {
        rd1[i]=toupper(rd1[i]);}}
        cout<<rd1<<endl;

    
  return 0;
}

