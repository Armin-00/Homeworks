#include <iostream>
#include <unordered_set>

int main() {
    int arr[] = {1, 6, 39, 17, 60};
    int target = 23;
    int n = sizeof(arr) / sizeof(arr[0]);

    std::unordered_set<int> num_set;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (num_set.find(complement) != num_set.end()) {
            std::cout << "Pair found: " << arr[i] << ", " << complement << std::endl;
            return 0;
        }
        num_set.insert(arr[i]);
    }

    std::cout << "Pair not found" << std::endl;
    return 0;
}