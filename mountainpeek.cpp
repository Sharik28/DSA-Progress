#include <iostream>

using namespace std;

int mountainpeek(int arr[], int n) {
    if (n == 1) return arr[0];
    if (n == 2) return max(arr[0], arr[1]);

    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
            return arr[mid];
        } else if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return arr[low];
}

int main() {

    int arr[] = {1, 3, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = mountainpeek(arr, n);
    cout << "The peak element is: " << peak << endl;
   

    return 0; 
}