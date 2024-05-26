
#include<iostream>
using namespace std;
int main() {
    // Write C++ code here
    string sex,male,female;
    int salary;
    cout<<"Enter the sex of the employees::"<<endl;
    cin>>sex;
    cout<<"Enter the salary of the employees::"<<endl;
    cin>>salary;
    if(sex==male)
    {
        if(salary>=10000)
        {
            salary+=salary*5*0.01;
            cout<<"Salary of employees is = "<<salary<<endl;
        }
        else
        {
            salary=salary+salary*7*0.01;
            cout<<"Salary of employees is = "<<salary<<endl;
        }
    }
    else
    {
        if(salary>=10000)
        {
            salary=salary + salary*10*0.01;
            cout<<"Salary of employees is = "<<salary<<endl;
        }
        else
        {
            salary=salary+salary*12*0.01;
            cout<<"Salary of employees is = "<<salary<<endl;
        }
    }
    
    return 0;
}
