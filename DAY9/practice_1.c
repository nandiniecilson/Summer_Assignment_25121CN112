#include<stdio.h>
int main(){
    int rows, i, j;
    printf("Enter no. of rows:");
    scanf("%d",&rows);

    for (i = rows; i>=1; i--){
        for(j=1 ; j<i+1;j++ ){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}