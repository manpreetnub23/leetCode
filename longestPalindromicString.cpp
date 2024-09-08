#include <bits/stdc++.h>
class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int key = s[i];
            int j = i - 1;
            while (j >= 0 && s[j] != s[i])
            {
            }
        }
    }
};
int main()
{
    Solution x;
    std::cout << x.lengthOfLongestSubstring("abcabcbb") << std::endl;
}