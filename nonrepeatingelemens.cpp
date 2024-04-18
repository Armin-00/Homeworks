#include <iostream>

int main() {
    int arr[] = {20, 15, 30, 2, 2, 3, 5, 30, 6, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int freq[100] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    
     std::cout << "Non-repeating elements: ";
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}