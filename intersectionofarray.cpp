#include<iostream>
#include<vector>
using namespace std;

vector<int> v;

int main()
{
    int m, n;
    cout << "Enter the size of a1: " << endl;
    cin >> m;
    cout << "Enter the size of a2: " << endl;
    cin >> n;
    
    int a1[900], a2[900];
    
    cout << "Enter the elements of a1: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
    
    cout << "Enter the elements of a2: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    
    int i = 0, j = 0;
    
    while (i < m && j < n)
    {
        if (a1[i] == a2[j])
        {
            v.push_back(a1[i]);
            i++;
            j++;
        }
        else if (a1[i] < a2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    cout << "Common elements: ";
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
    cout << endl;
    
    return 0;
}
