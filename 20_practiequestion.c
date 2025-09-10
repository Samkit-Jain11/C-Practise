// Adding the number entered by user till he enter 0
#include <stdio.h>

int main() {
    int num , sum = 0 ;
    printf("Enter the number : \n");
    scanf("%d", &num);

    while(num!=0){    // condition keep looping until the nnumber eentered is 0 
        sum = sum + num ;   // != thi means not equal to so here it means the number entered by user should not be zero 
        printf("Enter the number :\n");
        scanf("%d", &num);
    }
   printf("Total sum = %d ", sum);
    return 0;
}