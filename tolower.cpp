#include <bits/stdc++.h>
class Solution
{
public:
    std::string toLowerCase(std::string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                // std::cout << "usmein aaya hai : s[i] = " << s[i] << std::endl;
                s[i] = (s[i] - 'A') + 'a';
                // std::cout << s[i] << std::endl;
            }
        }
        return s;
    }
};
int main()
{
    Solution x;
    std::string res = x.toLowerCase("Hello");
    std::cout << res << std::endl;
}