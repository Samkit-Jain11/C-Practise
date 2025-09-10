// Adding the number entered by user till he enter 0
#include <stdio.h>

int main() {
    int num , sum = 0 ;
    printf("Enter the number : \n");
    scanf("%d", &num);

    while(num!=0){
        sum = sum + num ;
        printf("Enter the number :\n");
        scanf("%d", &num);
    }
   printf("Total sum = %d ", sum);
    return 0;
}