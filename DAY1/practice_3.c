#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a no. to find its factorial:");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        fact *=i;
    }
    printf("Factorial of given no. is %d", fact);
return 0;
}