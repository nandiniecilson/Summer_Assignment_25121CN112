#include<stdio.h>
int main(){
    char n;
    int i,j;
    printf("Enter rows:");
    scanf("%c", &n);

    for(i='A'; i<=n; i++){
        for(j='A'; j<=i; j++){
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}