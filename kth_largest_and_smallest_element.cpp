#include <iostream>
using namespace std;

int kth_largest_and_smallest(int arr[], int n, int k) {
    int a = arr[k - 1];  // Assuming k is valid (within bounds)
    return a;
}

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int a[n1], b[n2];

    for (int i = 0; i < n1; i++) {
        a[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;  // Start merging from the beginning of the original array

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Kth smallest element: " << kth_largest_and_smallest(arr, n, k) << endl;

    return 0;
}
