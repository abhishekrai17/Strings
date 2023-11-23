#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin, s);
    int count = 0;
    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = s.length() - 1; j >= i; j--)
        {
            if (s[i] == s[j])
            {
                int a, b;
                a = i;
                b = j;

                while (a <= b)
                {
                    if (s[a] == s[b])
                    {
                        a++;
                        b--;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 0)
                {
                    continue;
                }
                else
                {
                    cout << s.substr(i, j - i + 1) << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}