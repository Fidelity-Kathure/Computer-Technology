#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            return true; // found a duplicate
        }
        seen.insert(num);
    }
    return false; // no duplicates found
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    if (containsDuplicate(nums)) {
        std::cout << "The array contains duplicates." << std::endl;
    } else {
        std::cout << "The array does not contain duplicates." << std::endl;
    }

    return 0;
}

