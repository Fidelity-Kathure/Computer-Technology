
#include <iostream>
#include <vector>

void rotate(std::vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // in case k is greater than the size of the array
    std::reverse(nums.begin(), nums.begin() + n - k);
    std::reverse(nums.begin() + n - k, nums.end());
    std::reverse(nums.begin(), nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    rotate(nums, k);

    std::cout << "Rotated array: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
