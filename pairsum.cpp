#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> ans;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(a[i], a[j]));
                temp.push_back(max(a[i], a[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());

    cout << "Pairs with sum " << s << ":" << endl;
    for(int k = 0; k < ans.size(); k++)
    {
        cout << ans[k][0] << " " << ans[k][1] << endl;
    }

    return 0;
}
