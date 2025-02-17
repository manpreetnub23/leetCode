#include <bits/stdc++.h>
class Solution
{
public:
    std::string finalString(std::string s)
    {
        std::string tillNow = "";
        for (int i = 0; i < s.length(); i++)
        {
            // std::cout
            if (s[i] != 'i')
                tillNow += s[i];
            else
            {
                std::cout << "else mein aaya hai aur reverse hua hai." << std::endl;
                reverse(tillNow.begin(), tillNow.end());
                std::cout << "reverese hone ke baad string hai : " << tillNow << std::endl;
            }
        }
        return tillNow;
    }
};
int main()
{
    Solution x;
    std::cout << x.finalString("poiinter") << std::endl;
}