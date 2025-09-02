// Take an integer input. Print whether the number is positive, negative, or zero.

#include<stdio.h>

int main() {

    int num;

    printf("Enter the number who you have to check is positive , negative or 0 : \n");
    scanf("%d", &num);

    if(num>0) {
        printf("Your entered value is positive ");
    }

    else if (num==0){
        printf("The entered value is zero");
    }

    else {
        printf("The entered value is negative ");
    }

    return 0;
}