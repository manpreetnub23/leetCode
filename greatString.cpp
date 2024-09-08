#include <bits/stdc++.h>
class Solution
{
public:
    std::string makeGood(std::string s)
    {
        if (s.length() < 2)
            return s;
        for (int i = 0; i < s.length(); i++)
        {
            int j = i + 1;
            // std::cout << " i and j = " << i << " " << j << std::endl;
            if (s[i] == (s[j] - 'A' + 'a'))
            {
                // std::cout << "now s[i] and s[j] are equal " << s[i] << " " << s[j] << std::endl;
                s.erase(i, 1);
                s.erase(i, 1);
                i = -1, j = i + 1;
                // std::cout << "i and j change hue hain aur ab hain : " << i << " " << j << std::endl;
            }
            else if (s[i] == (s[j] - 'a' + 'A'))
            {
                s.erase(i, 1);
                s.erase(i, 1);
                i = -1, j = i + 1;
            }
        }
        return s;
    }
};
int main()
{
    Solution x;
    std::cout << x.makeGood("Pp");
}