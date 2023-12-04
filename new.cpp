#include <iostream>
using namespace std;
class Solution
{
public:
    // Function to find the smallest window in the string s consisting
    // of all the characters of string p.
    string smallestWindow(string s, string t)
    {
        // Your code here
        unordered_map<char, int> m;
        for (int i = 0; i < t.size(); i++)
        {
            m[t[i]]++;
        }
        int ans = INT8_MAX;
        int count = m.size();

        int i = 0;
        int j = 0;
        int start = 0;
        while (j < s.length())
        {
            m[s[j]]--;
            if (m[s[j]] == 0)
            {
                count--;
            }
            if (count == 0)
            {
                while (count == 0)
                {
                    if (ans > j - i + 1)
                    {
                        ans = j - i + 1;
                        start = i;
                    }
                    m[s[i]]++;
                    if (m[s[i]] > 0)
                        count++;

                    i++;
                }
            }
            j++;
        }
        if (ans == INT8_MAX)
            return "-1";

        return s.substr(start, ans);
    }
};