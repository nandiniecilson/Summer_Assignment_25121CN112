#include <stdio.h>

int main() {
    int n, i;
    int largest, smallest;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; 
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
