#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    // Example usage
    vector<int> nums = {2, 2, 1};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}
