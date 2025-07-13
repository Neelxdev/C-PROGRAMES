#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return the index where target is found
        }
            
     }
     return -1;  // Return -1 if not found
}

int main() {
    int arr[100], n, target, result;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Element found at index %d (position %d).\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
