#include <iostream>

int main() {
    int arr[3][3] = {{2, 5, 4}, {8, 2, 3}, {1, 3, 6}};
    int temp;

    
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
