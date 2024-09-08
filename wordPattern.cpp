#include <bits/stdc++.h>

class Solution
{
public:
    bool wordPattern(std::string pattern, std::string s)
    {
        std::string word = "";
        std::unordered_map<char, std::string> ump;
        for (int _ = 0; _ < pattern.length(); _++)
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == ' ')
                {
                    // word.push_back(s[j]);
                    ump[j] = word;
                    word = "";
                }
                word.push_back(s[j]);
            }
        }
    }
};
int main() {}