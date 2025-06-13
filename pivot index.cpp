#include <iostream>
using namespace std;

int findPivot(int arr[], int size) {
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s; // Returns the index of the pivot element
}

int main() {
    int arr[] = {3, 8, 10, 17, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivot(arr, size);
    cout << "Pivot element is: " << arr[pivotIndex] << " at index " << pivotIndex << endl;

    return 0;
}