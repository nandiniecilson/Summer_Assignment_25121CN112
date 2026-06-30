#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%scanf", &target);
    result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element found at index %d (Position %d).\n", result, result + 1);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
