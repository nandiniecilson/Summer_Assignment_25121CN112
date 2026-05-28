#include<stdio.h>
int main()
{
    int start, end, j,i, flag=1;

    printf("Enter the start number:");
    scanf("%d", &start);
        printf("Enter the end number:");
        scanf("%d", &end);

    printf("The prime no between %d and %d are:\n", start , end);
     for(i=start; i<=end; i++){
    if(i < 2)
        continue;
       flag= 1;
     
    
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag==1){
            printf("%d\n", i);
        }
    }
      return 0;
 }



