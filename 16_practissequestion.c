// multiplication table of number entered by the user

#include<stdio.h>
int main () {
    int n , i;
    printf("Enter the number you want to see its multiplication table : \n ");
    scanf("%d", &n);

    for ( i=0 ; i<=10 ; i++){
        printf("%d * %d = %d \n ", n , i , n*i);

    }
    return 0;
}