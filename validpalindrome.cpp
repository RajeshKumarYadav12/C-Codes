#include <iostream>
using namespace std;

bool is_valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

char tolower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool is_palindrome(string str)
{
    string temp = "";
    for (int j = 0; j < str.length(); j++)
    {
        if (is_valid(str[j]))
        {
            temp.push_back(tolower(str[j]));
        }
    }
    int start = 0;
    int end = temp.length() - 1;
    while (start <= end)
    {
        if (temp[start] != temp[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    char inputString[890];
    cout << "Enter a string: " << endl;
    cin >> inputString;
    if (is_palindrome(inputString))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
    return 0;
}
