#include <bits/stdc++.h>
class Solution
{
public:
    bool isSubsequence(std::string s, std::string t)
    {
        int current = -1, count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = current + 1; j < t.length(); j++)
            {
                if (s[i] == t[j])
                {
                    current = j;
                    count++;
                    std::cout << s[i] << " " << t[j] << std::endl;
                    std::cout << current << "and count is " << count << std::endl;
                    break;
                }
            }
        }
        if (count == s.length())
            return true;
        else
            return false;
    }
};
int main()
{
    // Solution x;
    // std::string a = "ab";
    // std::string b = "baab";
    // std::cout << "res is " << x.isSubsequence(a, b);
    std::cout<<5/2;
}