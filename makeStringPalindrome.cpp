#include <bits/stdc++.h>
class Solution
{
public:
    std::string shortestPalindrome(std::string s)
    {
        std::string rev = s;
        std::reverse(rev.begin(), rev.end());
        int right = 0;
        for (int i = 0; i < rev.length(); i++)
        {
            if (s.substr(0, s.length() - i) == rev.substr(i))
            {
                right = s.length() - i;
                break;
            }
        }
        return rev.substr(0, rev.length() - right) + s;
    }
};
int main()
{
    Solution x;
    // std::cout << x.shortestPalindrome("aaab");
    std::string s = "abbab";
    std::cout << s.substr(0, 2);
}