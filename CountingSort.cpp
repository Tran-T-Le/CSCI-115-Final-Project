#include <iostream>
using namespace std;

int countingMaxValue(int arr[], int n) {
    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

void countingSort(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    int maxValue = countingMaxValue(arr, n);

    int* count = new int[maxValue + 1];
    int* output = new int[n];

    for (int i = 0; i <= maxValue; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 1; i <= maxValue; i++) {
        count[i] = count[i] + count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] count;
    delete[] output;
}
