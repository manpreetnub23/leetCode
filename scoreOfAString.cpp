#include <bits/stdc++.h>
class Solution
{
public:
    int scoreOfString(std::string s)
    {
        int prev = 0, next = 1, sum = 0;
        int size = s.length();
        if (s.length() < 2)
            return 0;
        while (next < size)
        {
            std::cout << "s[prev] = " << s[prev] << " and s[next] = " << s[next] << std::endl;
            sum += abs((s[prev]) - (s[next]));
            std::cout << (sum) << std::endl;
            next++, prev++;
        }
        return sum;
    }
};
int main()
{
    Solution x;
    std::cout << x.scoreOfString("hello") << std::endl;
}