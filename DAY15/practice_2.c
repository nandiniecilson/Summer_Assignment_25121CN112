#include <stdio.h>
int main() {
    int size, r;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int temp[size];
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of left rotations: ");
    scanf("%d", &r);
    r = r % size;
    int k = 0;
    for (int i = r; i < size; i++) {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < r; i++) {
        temp[k] = arr[i];
        k++;
    }
    printf("Rotated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
