#include <stdio.h>
int find_max(int num1, int num2);
int find_max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}


int main() {
    int num1 , num2;
     
    printf("Enter two numbers:");
    scanf("%d %d" , &num1 , &num2);
    int maximum;

    maximum = find_max(num1, num2);

    printf("The numbers are: %d and %d\n", num1, num2);
    printf("The maximum value is: %d\n", maximum);

    return 0;
}
