#include <bits/stdc++.h>
class Solution
{
public:
    std::string replaceDigits(std::string s)
    {
        char prev;
        for (int i = 0; i < s.length(); i++)
        {
            if (!isdigit(s[i]))
                prev = s[i];
            else
            {
                s[i] = prev + (s[i] - '0');
            }
        }
        return s;
    }
};
int main()
{
}