// Take two numbers a and b as input. Find which is number is larger 

#include<stdio.h>

int main() {

    int a , b ;

    printf("Enter the value of a : \n");
    scanf("%d", &a);

    printf("Enter the value of b : \n");
    scanf("%d", &b);

    if(a>b) {
        printf("The numbera a is larger then b \n");
    }
    
    else if (a<b) {
        printf("The number b is larger then a \n");
    }

    else {
        printf("Both nummber are equal \n");
    }

    return 0;
}