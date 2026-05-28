#include<stdio.h>
int main()
{
    int n, r,original, reverse=0;
    printf("Enter a number:");
    scanf("%d",&n);
    
    original =n;
    while(n>0)
    {
        reverse= reverse*10 + n%10;
        n/=10;
    }
    if(original==reverse)
    {
        printf("%d is a palindrome\n", original);
    } else{
        printf("%d is not a palindrome\n", original);
    }
    return 0;
}