#include <bits/stdc++.h>
class Solution
{
public:
    int countSegments(std::string s)
    {
        int count = 0;
        bool start = false;
        if (s == "")
            return 0;
        for (int i = 0; i < s.length(); i++)
        {
            // if (isalpha(s[i]) && !start) {
            //     start = true;
            //     count++;
            // } else if (s[i] == ' ') {
            //     if (isalpha(s[i + 1])) {
            //         count++;
            //     } else
            //         continue;
            // }
            if (s[i] != ' ' && s[i + 1] == ' ')
            {
                count++;
            }
        }
        std::cout << count + 1 << std::endl;
        return count;
    }
};
int main()
{
    Solution x;
    // x.countSegments("love live! mu'sic forever");
    // x.countSegments(", , ,,         a, eaefa");
    x.countSegments("                ");
}