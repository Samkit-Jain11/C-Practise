// Write a program that takes a number n from the user and prints its factorial.
#include <stdio.h>

int main() {
    int n , i=1 , fact = 1;
    printf("Enter the value of nuumber you want too find factorial of : \n");
    scanf("%d", &n);

    for ( i=1 ; i<=n ; i++){
       fact = fact*i;
    }
    printf("The factorial of number %d is %d ",n , fact );
    return 0;
}