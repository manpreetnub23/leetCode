#include <bits/stdc++.h>
class Solution
{
public:
    bool digitCount(std::string num)
    {
        int count = 0, arr[10] = {0};
        for (auto i : num)
        {
            arr[i - '0']++;
        }
        for (int i = 0; i < num.length(); i++)
        {
            if (arr[i] == num[i] - '0')
                count++;
        }
        return count == num.length() ? true : false;
    }
};
int main()
{
    Solution x;
    std::cout << x.digitCount("1210");
}
