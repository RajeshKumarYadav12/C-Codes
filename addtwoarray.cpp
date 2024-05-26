#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>& v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> addtwoarray(int a1[], int n, int a2[], int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0, sum = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int val1 = a1[i];
        int val2 = a2[j];
        sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while (i >= 0)
    {
        sum = a1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while (j >= 0)
    {
        sum = a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while (carry != 0)
    {
        sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}

int main()
{
    int n, m;
    cout << "Enter the size of the first array:" << endl;
    cin >> n;
    cout << "Enter the size of the second array:" << endl;
    cin >> m;
    cout << "Enter the elements in the first array:" << endl;
    int a1[990];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    cout << "Enter the elements in the second array:" << endl;
    int a2[990];
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }

    vector<int> result = addtwoarray(a1, n, a2, m);

    cout << "The sum of the two arrays is:";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]<<" ";
    }
    cout << endl;

    return 0;
}
