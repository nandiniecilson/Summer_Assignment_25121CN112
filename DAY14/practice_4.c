#include <stdio.h>
int main() {
    int n, i, j;
    int count = 0;


    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    int visited[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    printf("\nDuplicate elements in the array are: ");
    for (i = 0; i < n; i++) {
       
        if (visited[i] == 1) {
            continue;
        }

        int isDuplicate = 0;
        
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                visited[j] = 1; 
            }
        }
        if (isDuplicate == 1) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("None");
    }
    
    printf("\nTotal duplicate values found: %d\n", count);

    return 0;
}
