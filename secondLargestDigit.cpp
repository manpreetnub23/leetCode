#include <bits/stdc++.h>
class Solution
{
public:
    int secondHighest(std::string s)
    {
        int firstLargest = -1, secondLargest = -1;
        for (auto i : s)
        {
            int num = i - '0';
            if (num > firstLargest)
            {
                secondLargest = firstLargest;
                firstLargest = num;
            }
            else if (num > secondLargest && num < firstLargest)
                secondLargest = num;
        }

        return (secondLargest == firstLargest) ? -1 : secondLargest;
    }
};
int main()
{
    Solution x;
    std::cout << x.secondHighest("ck077");
}