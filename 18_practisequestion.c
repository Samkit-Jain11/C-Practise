#include <stdio.h>

int main() {
    int sum=0 , n , i ;
    printf("Enter the number till you want to know even number : \n");
    scanf("%d", &n);

    printf("Even numbers are : \n");

    for(i=1 ; i<=n ; i++){
        if(i%2==0){
            printf("%d \n", i);
            sum = sum +i ; 
        }
    }
    printf("The sum of even numbers are = %d ", sum );
    return 0;
}