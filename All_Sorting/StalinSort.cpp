// Write a C++ program to implement Stalin Sort.

/*
Name - ADITYA BHARDWAJ
Section - D2
Roll No - 07
Course – B TECH
Branch – CSE
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> stalinSort(vector<int>& arr, int n) {
    vector<int> result;

    if (n == 0)
        return result;

    result.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (arr[i] >= result.back()) {
            result.push_back(arr[i]);
        }
        // else: element is removed
    }

    return result;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> sortedArr = stalinSort(arr, n);

    cout << "After Stalin Sort:\n";
    for (int i = 0; i < sortedArr.size(); i++)
        cout << sortedArr[i] << " ";

    return 0;
}
