#include <iostream>
using namespace std;

int findUnique(int a[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= a[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int result = findUnique(a, n);
    cout << "The unique element in the array is: " << result << endl;

    return 0;
}
