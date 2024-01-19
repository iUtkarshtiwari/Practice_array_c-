#include <iostream>
using namespace std;

int remove_duplicates(int *arr, int n) {
    int j = 0; // Index for elements to be included in the new array

    for (int i = 0; i < n; i++) {
        int k;
        for (k = 0; k < j; k++) {
            if (arr[i] == arr[k]) {
                break; // Skip duplicate elements
            }
        }
        if (k == j) {
            arr[j++] = arr[i]; // If arr[i] is not a duplicate, add it to the new array
        }
    }
    return j; // Return the new size of the array
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k = remove_duplicates(arr, n);
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
