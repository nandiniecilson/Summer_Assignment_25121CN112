#include <stdio.h>
void rightRotateByOne(int arr[], int size) {

    int last = arr[size - 1]; 
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = last; 
}

// Function to handle multiple right rotations
void rightRotate(int arr[], int size, int rotations) {

    rotations = rotations % size; 
    for (int i = 0; i < rotations; i++) {
        rightRotateByOne(arr, size);
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, rotations;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size]; 

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of times to right-rotate: ");
    scanf("%d", &rotations);
    printf("\nOriginal Array: ");
    printArray(arr, size);
    rightRotate(arr, size, rotations);

    printf("Rotated Array:  ");
    printArray(arr, size);

    return 0;
}
