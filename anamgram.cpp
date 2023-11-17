
#include <iostream>
using namespace std;
int main()
{
    string s, t;
    cout << "enter the two strings" << endl;
    getline(cin, s);
    getline(cin, t);
    char check[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        check[s[i] - 'a'] = 1;
    }
    for (int i = 0; i < t.length(); i++)
    {
        check[t[i] - 'a'] = 0;
    }
    for (int i = 0; i < 26; i++)
    {
        if (check[i] == 1)
        {
            cout << "Not anagram" << endl;
            break;
        }
    }
}