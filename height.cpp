// #include <bits/stdc++.h>
// class Solution
// {
// public:
//     int heightChecker(std::vector<int> &heights)
//     {
//         int count = 0;
//         for (int i = 0; i < heights.size() - 1; i++)
//         {
//             int minIdx = i;
//             for (int j = i + 1; j < heights.size(); j++)
//             {
//                 if (heights[minIdx] > heights[j])
//                     minIdx = j;
//                 if (minIdx != i)
//                 {
//                     std::cout<<"ismein jabaaya hai toh heightsminIdx hai : "<<heights[minIdx]<<"Aur height[i] hai" 
//                     // int temp = heights[i];
//                     // heights[i] = heights[minIdx];
//                     // heights[minIdx] = temp;
//                     std::swap(heights[minIdx], heights[i]);
//                     count++;
//                 }
//             }
//         }
//         std::cout << count << std::endl;
//         return count;
//     }
// };
// int main() {}