#include <iostream>
using namespace std;

int fibonacciNumber(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        return fibonacciNumber(n - 2) + fibonacciNumber(n - 1);
    }
}

int main() {
    int t, n, result;
    cin >> t;
    while (t > 0) {
        cin >> n;
        result = fibonacciNumber(n);
        cout << result << endl;
        t--;
    }
    return 0;
}
