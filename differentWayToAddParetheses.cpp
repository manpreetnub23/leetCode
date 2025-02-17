#include <bits/stdc++.h>
class Solution
{
public:
    int solve(int x, int y, char symbol)
    {
        if (symbol == '+')
            return x + y;
        if (symbol == '-')
            return x - y;
        if (symbol == '*')
            return x * y;
        return 0;
    }
    std::vector<int> diffWaysToCompute(std::string expression)
    {
        std::vector<int> ans;
        bool isNum = true;
        for (int i = 0; i < expression.length(); i++)
        {
            if (!isdigit(expression[i]))
            {
                isNum = false;
                std::vector<int> left =
                    diffWaysToCompute(expression.substr(0, i));
                for (auto i : left)
                    std::cout << i << " ";
                std::cout << std::endl;
                std::vector<int> right =
                    diffWaysToCompute(expression.substr(i + 1));
                for (auto i : right)
                    std::cout << i << " ";
                std::cout << std::endl;
                for (auto x : left)
                    for (auto y : right)
                        ans.push_back(solve(x, y, expression[i]));
            }
        }
        if (isNum)
            ans.push_back(std::stoi(expression));
        return ans;
    }
};

int main()
{
    Solution x;
    std::vector<int> res = x.diffWaysToCompute("2-1-1");
    for (auto i : res)
        std::cout << i << " ";
}