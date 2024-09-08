#include <bits/stdc++.h>
class Solution
{
public:
    int maxPower(std::string s)
    {
        int count = 0, maxCount = INT_MIN;
        bool start = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i + 1] && !start)
            {
                std::cout << "aaya aur s[i] = " << s[i] << std::endl;
                count += 2;
                start = true;
                std::cout << count << std::endl;
            }
            else if (s[i] == s[i + 1] && start)
            {
                std::cout << "aaya aur s[i] = " << s[i] << std::endl;
                count++;
                std::cout << count << std::endl;
            }
            else
            {
                if (maxCount < count)
                    maxCount = count;
                std::cout << "else mien aaya hai aur max Count = " << maxCount << std::endl;
                count = 0;
                start = false;
            }
        }
        return maxCount;
    }
};
int main()
{
    Solution x;
    std::cout << x.maxPower("cc") << std::endl;
}