#include <iostream>
using namespace std;
int main()
{
    string s = "pkppgp";
    bool check[26] = {false};
    int count = 0;
    int mx = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (check[s[i] - 'a'] == false)
        {
            check[s[i] - 'a'] = true;
            count++;
            mx = max(count, mx);
        }
        else
        {
            check[26] = false;
            check[s[i] - 'a'] = true;
            count = 1;
           
        }
    }
    cout << mx << endl;
}