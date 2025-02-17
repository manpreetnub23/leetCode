// #include <bits/stdc++.h>
// class Solution
// {
// public:
//     std::vector<int> findDisappearedNumbers(std::vector<int> &nums)
//     {
//         std::cout << "inside infinite loop" << std::endl;
//         std::vector<int> disappearedNums;
//         int prevTemp = 0;
//         for (int _ = 0; _ <= nums.size(); _++)
//         {
//             std::cout << "for mein aaya aur num[i] hai : " << nums[_] << std::endl;
//             int temp = nums[_];
//             if (prevTemp == temp)
//             {
//                 std::cout << "if mein aaya " << std::endl;
//                 disappearedNums.push_back(temp);
//             }
//             prevTemp = nums[_];
//             std::swap(nums[_], nums[nums[_] - 1]);
//         }
//         return disappearedNums;
//     }
// };
// int main()
// {
//     Solution x;
//     std::vector<int> a{4, 3, 2, 7, 8, 2, 3, 1};
//     std::vector<int> res = x.findDisappearedNumbers(a);
//     for (auto i : res)
//     {
//         std::cout << i << " ";
//     }
// }

#include <bits/stdc++.h>

class Solution
{
public:
    std::vector<int> findDisappearedNumbers(std::vector<int> &nums)
    {
        int n = nums.size();

        // Placing elements in their correct positions
        for (int i = 0; i < n; i++)
        {

            while (nums[i] != nums[nums[i] - 1]) // Ensure correct placement
            {
                // std::cout << "inside while loop : " << std::endl;
                // std::cout << "nums[i] = " << nums[i] << " & nums[nums[i] - 1] = " << nums[nums[i] - 1] << std::endl;
                std::swap(nums[i], nums[nums[i] - 1]);
            }
        }
        // 4, 3, 2, 7, 8, 2, 3, 1

        std::vector<int> disappearedNums;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != i + 1)
            {
                disappearedNums.push_back(i + 1);
            }
        }

        return disappearedNums;
    }
};

int main()
{
    Solution x;
    std::vector<int> a{4, 3, 2, 7, 8, 2, 3, 1};
    std::vector<int> res = x.findDisappearedNumbers(a);

    for (auto i : res)
    {
        std::cout << i << " ";
    }
}
