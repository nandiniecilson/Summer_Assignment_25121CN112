#include <stdio.h>
#include <string.h>

int isStringPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    return 1;
}
int isNumberPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    while (num > 0) {
        int remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num = num / 10;
    }
    return original == reversed;
}

int main() {
    int choice;
    
    printf("--- Palindrome Checker ---\n");
    printf("1. Check a Word (String)\n");
    printf("2. Check a Number (Integer)\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        char word[100];
        printf("Enter a word: ");
        scanf("%s", word);

        if (isStringPalindrome(word)) {
            printf("\"%s\" is a palindrome.\n", word);
        } else {
            printf("\"%s\" is not a palindrome.\n", word);
        }
    } 
    else if (choice == 2) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
