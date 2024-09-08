#include <bits/stdc++.h>
int main()
{
    int n = 19;
    int total = 0;
    std::vector<int> nums;
    bool f = true;
    while (f)
    {
        if (n == 1)
        {
            // return true;
            std::cout << "yes";
        }
        while (n > 0)
        {
            int temp = n % 10;
            // rem = rem * 10 + temp;
            n = n / 10;
            std::cout << temp << " ";
            nums.push_back(temp);
        }
        for (auto i : nums)
        {
            total += pow(i, 2);
            // std::cout << total << " ";
        }
        n = total;
        // std::cout << total << " ";
    }
}