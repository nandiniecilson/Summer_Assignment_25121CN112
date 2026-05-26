#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter numbers upto be added:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    sum= n*(n+1)/2 ;
    printf("Sum of N natural nos is %d" , sum);
    return 0;
}
