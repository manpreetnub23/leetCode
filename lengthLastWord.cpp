#include <bits/stdc++.h>
class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        bool hasStarted = false;
        int count = 0;
        for (int i = s.length();; i--)
        {
            if (s[i] == ' ' && !hasStarted)
            {
                continue;
            }
            else if (std::isalpha(s[i]))
            {
                hasStarted = true;
                count++;
            }
            else if (s[i] == ' ' && hasStarted)
            {
                break;
            }
        }
        return count;
    }
};
int main()
{
    Solution x;
    std::string s = "   fly me   to   the moon  ";
    int ans = x.lengthOfLastWord(s);
    std::cout << ans << std::endl;
}