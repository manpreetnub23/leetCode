#include <bits/stdc++.h>
class Solution
{
public:
    bool validPalindrome(std::string s)
    {
        int left = 0, right = s.length() - 1;
        bool removed = false;
        while (left < right)
        {
            if (s[left] == s[right])
                // std::cout << "inside if and s[left] and s[right] = " << s[left] << " " << s[right] << std::endl;
                left++, right--;
            else if (!removed)
            {
                // std::cout << "inside else if and s[left] and s[right] = " << s[left] << " " << s[right] << std::endl;
                removed = true;
                if (s[left + 1] == s[right])
                    left++;
                else if (s[left] == s[right - 1])
                    right--;
                else
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};

int main()
{
    Solution x;
    std::cout << x.validPalindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga");
}
