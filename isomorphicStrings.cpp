#include <bits/stdc++.h>
class Solution
{
public:
    bool isIsomorphic(std::string s, std::string t)
    {
        if (s.length() != t.length())
            return false;
        std::unordered_map<char, int> ump1;
        std::unordered_map<char, int> ump2;
        for (int i = 0; i < s.length(); i++)
        {
            ump1[s[i]]++;
        }
        for (int i = 0; i < t.length(); i++)
        {
            ump2[t[i]]++;
        }
        std::string res1 = "";
        std::string res2 = "";
        for (auto i : ump1)
        {
            res1.push_back(i.second);
        }
        for (auto j : ump2)
        {
            res2.push_back(j.second);
        }
        if (res1 == res2)
            return true;
        else
            return false;
    }
};
int main()
{
    Solution x;
    std::string s1 = "title";
    std::string s2 = "paper";
    std::vector<int> haha;
    // x.isIsomorphic(s1, s2);
    for (int i = 0; i < s1.length(); i++)
    {
        int res = s1[i] - 'a' xor s2[i] - 'a';
        haha.push_back(res);
    }
    for (auto i : haha)
    {
        std::cout << i << " ";
    }
}
