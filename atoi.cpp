#include <bits/stdc++.h>

class Solution
{
public:
    int myAtoi(std::string s)
    {
        int num = 0;
        bool neg = false;
        bool hasStarted = false;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && !hasStarted)
            {
                continue; // Skip leading whitespaces
            }
            else if (s[i] == '-' && !hasStarted)
            {
                hasStarted = true;
                neg = true;
            }
            else if (s[i] == '+' && !hasStarted)
            {
                hasStarted = true;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                hasStarted = true;

                int digit = s[i] - '0';

                // Check if adding the digit will cause overflow
                if (num > (INT_MAX - digit) / 10)
                {
                    return neg ? INT_MIN : INT_MAX;
                }

                num = num * 10 + digit;
            }
            else
            {
                break; // Stop processing on any non-digit character after starting
            }
        }

        return neg ? -num : num;
    }
};

int main()
{
    std::string s = "91283472332";
    Solution x;
    int res = x.myAtoi(s);
    std::cout << "Returned value is: " << res << std::endl;
}
