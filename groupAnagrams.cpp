#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int sum[6] = {0};
    int check[6] = {0};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i] += s[i][j];
        }
    }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << sum[i] << endl;
    // }

    for (int i = 0; i < 5; i++)
    {
        if (check[i] == false)
        {

            cout << s[i] << endl;
        }
        for (int j = i + 1; j < 6; j++)
        {
            if (sum[i] == sum[j] && check[j] == false)
            {
                cout << s[j] << endl;
                check[j] = true;
            }
        }
    }
}
