#include <bits/stdc++.h>

using namespace std;

// function prototypes
void swap(int *a, int *b);
void print(int arr[], int size);
void selectionSort(int arr[], int size);

void selectionSort(int arr[], int size) {
    int i, j, minimumIndex;

    for (i = 0; i < size - 1; i++) {
        minimumIndex = i;

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minimumIndex])
                minimumIndex = j;
        }

        swap(&arr[minimumIndex], &arr[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size) {
    int i;
    for (i = 0; i < size - 1; i++)
        cout << arr[i] << ", ";
    cout << arr[size - 1] << endl;
}

int main() {
    int arr[] = {8, 5, 10, 99, -8, 14, 77};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    print(arr, size);
    return 0;
}
