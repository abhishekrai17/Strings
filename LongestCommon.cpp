#include <iostream>
using namespace std;
int main()
{

    string arr[3];
    string ch = "";
    cout << "Enter the elements:" << endl;
    for (int x = 0; x < 3; x++)
    {
        cin >> arr[x];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            ch += arr[1][i];
        }
    }
    cout << "The longest common prefix is " << ch << endl;
}