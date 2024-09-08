#include <bits/stdc++.h>
class Solution
{
public:
    // bool isAnagram(std::string s, std::string t)
    // {
    //     std::unordered_map<char, int> ump1;
    //     std::unordered_map<char, int> ump2;
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         ump1[s[i]]++;
    //     }
    //     for (int i = 0; i < t.length(); i++)
    //     {
    //         ump2[t[i]]++;
    //     }
    //     if (ump1.size() != ump2.size())
    //         return false;
    //     for (auto pair : ump1)
    //     {
    //         auto it = ump2.find(pair.first);
    //         if (it == ump2.end() || it->second != pair.second)
    //         {
    //             return false;
    //         }
    //     }
    //     return true;
    // }
};
int main()
{
    // Solution x;
    // std::string str1 = "anagram";
    // std::string str2 = "ngaram";
    // std::cout << x.isAnagram(str1, str2);
    std::vector<int> arr1(26, 0);
    for (auto i : arr1)
    {
        std::cout << i << " ";
    }
}