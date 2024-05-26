#include <iostream>
using namespace std;

int numberofwords(char s[]) {
    int i = 0, word = 1;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            word++;
        }
        i++;
    }
    return word;
}

int main() {
    char str[100];
    cin.getline(str, 100);;  // Use getline to read the entire line with spaces
    cout << numberofwords(str);

    return 0;
}
