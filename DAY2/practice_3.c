#include<stdio.h>
int main()
{
    int num,prod=1;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        prod= prod * (num%10);  
        num=num/10;
    }
    printf("The product of digits of the given number is: %d", prod);
    return 0;
}