#include <iostream>
using namespace std;

int findMaxIndex(int arr[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void flip(int arr[], int i) {
    int start = 0;
    while(start < i) {
        swap(arr[start], arr[i]);
        start++;
        i--;
    }
}

void pancakeSort(int arr[], int n) {
    for(int currSize = n; currSize > 1; currSize--) {
        int maxIndex = findMaxIndex(arr, currSize);

        if(maxIndex != currSize - 1) {
            flip(arr, maxIndex);
            flip(arr, currSize - 1);
        }
    }
}

int main() {
    int arr[] = {23, 10, 20, 11, 12, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    pancakeSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}