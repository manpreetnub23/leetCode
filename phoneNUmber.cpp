#include <bits/stdc++.h>
class Solution
{
public:
    std::vector<std::string> letterCombinations(std::string digits)
    {
        std::vector<std::string> res;
        if (digits.empty())
            return res;
        std::unordered_map<char, std::string> numbers{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}};

        res.push_back("");

        for (auto i : digits)
        {
            std::vector<std::string> temp;
            std::string letters = numbers[i];

            // making combinations.
            for (int i = 0; i < res.size(); ++i)
            {
                for (int j = 0; j < letters.length(); ++j)
                    temp.push_back(res[i] + letters[j]);
            }
            res = temp;
        }
        return res;
    }
};
int main()
{
    Solution x;
    x.letterCombinations("234");
}