#include <bits/stdc++.h>
class Solution
{
public:
    bool isPalindrome(std::string s)
    {
        std::string dummy;
        for (int i = 0; i < s.length(); i++)
        {
            if (isalpha(s[i]) || isalnum(s[i]))
            {
                dummy += std::tolower(s[i]);
            }
        }
        std::string reversed = dummy;
        std::reverse(dummy.begin(), dummy.end());
        if (dummy == reversed)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution x;
    std::cout << x.isPalindrome(" ");
}