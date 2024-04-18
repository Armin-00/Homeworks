#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {89, 0, -25, 13, 52, -8,12,-63};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before sorting array : ";
    for(int i=0; i<len; i++) {
        cout<<" "<<arr[i];
    }

    bubbleSort(arr, len);

    cout<<"\n\nAfter sorting array : ";
    for(int i=0; i<len; i++) {
        cout<<" "<<arr[i];
    }

    return 0;
}