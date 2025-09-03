// Calculating simple interest 

#include<stdio.h>

int main() {
    
    float principal , interest , time , simple_interest ;

    printf("Enter the principal amount :\n");
    scanf("%f", &principal);

    printf("Enter the interest rate been charged : \n");
    scanf("%f", &interest);

    printf("Enter the total time : \n");
    scanf("%f", &time);

    simple_interest = ( principal * interest * time )/100 ;

    printf("The simple interest turns out to be %f",simple_interest);


    return 0;

}