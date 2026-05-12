#include <iostream>
using namespace std;

void combSort(int arr[], int n) {
    int gap = n;
    bool swapped = true;

    while(gap != 1 || swapped) {
        gap = (gap * 10) / 13;
        if(gap < 1) {
            gap = 1;
        }

        swapped = false;

        for(int i = 0; i + gap < n; i++) {
            if(arr[i] > arr[i + gap]) {
                swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}

int main() {
    int arr[] = {8, 4, 1, 56, 3, -44, 23, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    combSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}