#include <bits/stdc++.h>

class Solution
{
public:
    std::string reverseWords(std::string s)
    {
        std::reverse(s.begin(), s.end());
        int n = s.length();
        int left = 0, right = 0, i = 0;
        while (i < n)
        {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ')
                s[right++] = s[i++];
            std::reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};
int main()
{
    Solution x;
    std::cout << x.reverseWords("a good   example") << std::endl;
}