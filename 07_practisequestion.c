// checking if number is positive 
#include<stdio.h>

int main() {
    int num;

    printf("Enter the number  you want to check is positive or negative : \n");
    scanf("%d", &num );

    if (num>0){
        printf("The numebr is positive \n ");
    }
    
    else {
        printf("The number is negative \n ");
    }

    return 0;
}