#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int>& v, int k, int mid)
{
    int cowcount = 1;
    int lastpos = v[0];
    for(int i = 1; i < v.size(); i++)  // Corrected loop condition
    {
        if(v[i] - lastpos >= mid)
        {
            cowcount++;
            if(cowcount == k)
            {
                return true;
            }
            lastpos = v[i];
        }
    }
    return false;
}

int aggresivecow(vector<int>& v, int k)
{
    sort(v.begin(), v.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < v.size(); i++)  // Corrected loop condition
    {
        maxi = max(maxi, v[i]);
    }
    int e = maxi;
    int ans = -1;
    while(s <= e)
    {
        int mid = s + (e - s) / 2;
        if(ispossible(v, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int k;
    vector<int> v = {1, 2, 3, 4, 6};  // Corrected vector initialization
    cout << "Enter the number of cows: ";
    cin >> k;
    int index = aggresivecow(v, k);
    cout << "The maximum distance between two cows is: " << index << endl;
    return 0;
}
