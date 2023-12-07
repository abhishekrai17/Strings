#include <iostream>
using namespace std;
int main()
{
    string s = "this is a string";
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 1)
        {
            cout << char('a' + i) << " ," << count[i] << " times" << endl;
        }
    }
}