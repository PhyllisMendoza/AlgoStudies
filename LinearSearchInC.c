#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int key = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = linearSearch(arr, size, key);

    if (ans != -1) {
        printf("The number %d is at index %d in the array.", key, ans);
    } else {
        printf("The number is not in the array.");
    }

    return 0;
}
