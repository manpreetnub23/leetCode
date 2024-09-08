#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

int main() {
    std::vector<int> nums = {4, 1, 2, 4, 3, 2, 1};
    int count = 0;

    // Sort the vector
    std::sort(nums.begin(), nums.end());

    // Declare an unordered_map to store the frequency of each element
    std::unordered_map<int, int> ump;

    // Iterate over the sorted vector and count the frequency of each element
    for (int i = 0; i < nums.size(); i++) {
        ump[nums[i]]++; // Increment the count of the element
    }

    // Output the contents of the unordered_map
    for (const auto &pair : ump) {
        std::cout << "Element " << pair.first << " occurs " << pair.second << " times.\n";
    }

    return 0;
}
