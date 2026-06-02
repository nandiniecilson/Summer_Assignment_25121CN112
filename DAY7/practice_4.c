#include<stdio.h>
int reverse(int n, int rev){
    if(n==0)
    return rev;
else
     return reverse(n/10, rev*10 + n%10);
    
}
int main()
{
    int n;
    printf("Enter the no.:");
    scanf("%d" , &n);
    int result= reverse(n,0);

    printf("Reverse of %d is:%d",n, result);

    return 0;
}
