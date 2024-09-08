#include <bits/stdc++.h>
class Solution
{
public:
    bool detectCapitalUse(std::string word)
    {
        int upperCount = 0, lowerCount = 0;
        for (auto i : word)
        {
            if (isupper(i))
            {
                upperCount++;
            }
            else
            {
                lowerCount++;
            }
        }
        std::cout << word[0];
        if (upperCount == word.length() || lowerCount == word.length())
        {
            return true;
        }
        else if (isupper(word[0]) && (word.length() - 1) == lowerCount)
            return true;
        return false;
    }
};
int main()
{
    Solution x;
    x.detectCapitalUse("Leetcode");
}