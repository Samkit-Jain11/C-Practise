// take a number from user let us say n and then add it rom 1 , 2 .... till n

#include<stdio.h>

int main() {

    int sum = 5 , n , i ;
    printf("Enter the number till where you want to see the sum  :\n");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
    sum = sum + i;
    }
    printf("The sum of number entered from 1 to %d is %d \n", n , sum );

    return 0;
}