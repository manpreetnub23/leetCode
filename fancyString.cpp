#include <bits/stdc++.h>
class Solution
{
public:
    std::string makeFancyString(std::string s)
    {
        int count = 1;
        std::string fancyString = "";
        for (int i = 0; i < s.length(); i++)
        {
            std::cout << "for loop mein aaya ." << std::endl;
            if (s[i] == s[i + 1])
                count++;
            else
            {
                std::cout << "else mein aaya ." << std::endl;
                if (count >= 2)
                {
                    std::cout << "else ke if mein aaya aur count hai : " << count << std::endl;
                    fancyString.push_back(s[i - 1]);
                    fancyString.push_back(s[i - 1]);
                    std::cout << "fancy string mein yeh gaya hai 2 baar : " << s[i] << std::endl;
                    count = 1;
                    continue;
                }
                fancyString.push_back(s[i]);
                std::cout << "else ke if ke bahar yeh gaya hai :" << s[i] << std::endl;
            }
        }
        return fancyString;
    }
};
int main()
{
    Solution x;
    std::cout << x.makeFancyString("aab");
}