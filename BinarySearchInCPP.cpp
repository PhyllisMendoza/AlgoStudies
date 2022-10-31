#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] > key) {
            return binarySearch(arr, left, mid - 1, key);
        }

        return binarySearch(arr, mid + 1, right, key);
    }
    return -1;
}

int main() {
    int arr[] = {-8, 0, 5, 27, 99, 157, 199, 205, 418};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, 0, size - 1, key);

    if (ans != -1) {
        cout << "The number " << key << " is at index " << ans << " in the array." << endl;
    } else {
        cout << "The number is not in the array.";
    }

    return 0;
}
