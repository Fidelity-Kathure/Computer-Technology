#include <iostream>
#include <limits>

// Function to calculate the sum of integers in the array
int summation(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum integer in the array
int maximum(int arr[], int n) {
    int max = std::numeric_limits<int>::min(); // Initialize max to the smallest possible integer value
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int sum = summation(arr, n);
    int max = maximum(arr, n);

    std::cout << "Sum of the integers: " << sum << std::endl;
    std::cout << "Maximum integer: " << max << std::endl;

    return 0;
}
