// Take an integer input from the user. Print whether it is odd or even.

#include<stdio.h>

int main() {

    int integer;

    printf("Enter the integer who we have to identify whether it is odd or even : \n");
    scanf("%d", &integer);

    if(integer%2 ==0 ) {
        printf("The numeber iss even ");
    }

    else {
        printf("The nnumebr is odd");
    }

    return 0;

}