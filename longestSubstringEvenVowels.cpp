#include <bits/stdc++.h>
class Solution
{
public:
    int findTheLongestSubstring(std::string s)
    {
        std::vector<int> mapy(32, -2);
        mapy[0] = -1;

        int maxLen = 0;
        int mask = 0;

        for (int i = 0; i < s.size(); ++i)
        {
            char ch = s[i];

            switch (ch)
            {
            case 'a':
                mask ^= 1;
                break;
            case 'e':
                mask ^= 2;
                break;
            case 'i':
                mask ^= 4;
                break;
            case 'o':
                mask ^= 8;
                break;
            case 'u':
                mask ^= 16;
                break;
            }
            std::cout << "bahar aane ke baad mask = " << mask << std::endl;
            int prev = mapy[mask];
            std::cout << "prev is " << prev << std::endl;
            if (prev == -2)
            {
                std::cout << "if mein i hai " << i << std::endl;
                mapy[mask] = i;
                std::cout << "mapy[mask] = " << mapy[mask] << std::endl;
            }
            else
            {
                maxLen = std::max(maxLen, i - prev);
                std::cout << "maxLen is " << maxLen << std::endl;
            }
        }

        return maxLen;
    }
};
int main()
{
    Solution x;
    std::string s = "leetcodeisgreat";
    std::cout << x.findTheLongestSubstring(s);
}