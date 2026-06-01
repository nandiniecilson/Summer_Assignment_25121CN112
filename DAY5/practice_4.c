#include <stdio.h>

int main() {
    long long int num, largestFactor = 0, i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    
    for (i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %lld", largestFactor);

    return 0;
}