#include <stdio.h>
int main() {
    int n, i, searchElement, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &searchElement);
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            count++;
        }
    }
    printf("\nThe element %d occurs %d time(s) in the array.\n", searchElement, count);

    return 0;
}
