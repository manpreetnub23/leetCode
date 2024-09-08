#include <bits/stdc++.h>
class Solution
{
public:
    std::string addStrings(std::string num1, std::string num2)
    {
        std::string res = "";
        int carry = 0;
        int i = num1.length() - 1, j = num2.length() - 1;
        while (i >= 0 || j >= 0)
        {
            int sum = carry;
            if (i >= 0)
            {
                sum += num1[i--] - '0';
                std::cout << sum << "one" << std::endl;
            }
            if (j >= 0)
            {
                sum += num2[j--] - '0';
                std::cout << sum << "two" << std::endl;
            }
            carry = sum > 9 ? 1 : 0;
            std::cout << "cary is : " << carry << std::endl;
            res += std::to_string(sum % 10);
            std::cout << "res is now : " << res << std::endl;
        }
        if (carry)
            res += std::to_string(carry);
        std::reverse(res.begin(), res.end());
        return res;
    }
};
int main()
{
    Solution x;
    std::string haha = x.addStrings("456", "77");
    std::cout << haha;
}