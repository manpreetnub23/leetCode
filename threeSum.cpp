// #include <bits/stdc++.h>
// class Solution
// {
// public:
//     std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
//     {
//         std::vector<std::vector<int>> res;
//         std::sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 for (int k = j + 1; k < nums.size(); k++)
//                 {
//                     if (i != j && i != k && j != k && nums[i] + nums[j] + nums[k] == 0)
//                     {
//                         std::cout << "i : " << i << " j : " << j << " k : " << k << std::endl;
//                         std::vector<int> temp = {nums[i], nums[j], nums[k]};
//                     }
//                 }
//             }
//         }
//         return res;
//     }
// };
// int main()
// {
//     Solution x;
//     std::vector<int> input{-1, 0, 1, 2, -1, -4};
//     std::vector<std::vector<int>> ress = x.threeSum(input);
//     for (const auto &triplet : ress)
//     {
//         // Iterate over each element in the triplet and print it
//         for (int num : triplet)
//         {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl; // Newline for separating triplets
//     }
// }
#include <bits/stdc++.h>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> res;
        std::set<std::vector<int>> uniqueTriplets;

        // Sort the input array
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                for (int k = j + 1; k < nums.size(); k++)
                {
                    if (nums[i] + nums[j] + nums[k] == 0)
                    {
                        std::vector<int> temp = {nums[i], nums[j], nums[k]};

                        // Add to set to ensure uniqueness
                        if (uniqueTriplets.find(temp) == uniqueTriplets.end())
                        {
                            uniqueTriplets.insert(temp);
                            res.push_back(temp);
                        }
                    }
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution x;
    std::vector<int> input{-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> ress = x.threeSum(input);

    for (const auto &triplet : ress)
    {
        // Iterate over each element in the triplet and print it
        for (int num : triplet)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl; // Newline for separating triplets
    }
}
