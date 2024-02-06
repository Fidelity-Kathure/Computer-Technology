#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) return 0; // Edge case: empty array

    int j = 0; // Pointer to place next unique element
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[j]) {
            // Found a new unique element
            ++j;
            nums[j] = nums[i]; // Move the unique element to nums[j]
        }
    }
    return j + 1; // Length of the array with duplicates removed
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);

    std::cout << "Length of the array with duplicates removed: " << newLength << std::endl;
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
