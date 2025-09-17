// Take numbers from the user until they enter 0, and find the largest number entered.

#include <stdio.h>

int main() {
    int a , largest;
    printf("Enter the number : \n");
    scanf("%d", &a);

    largest = a; // initial condition where we assumed the number the user entered is largest 

    while(a!=0){
        if(a>largest) {
        largest = a; // if the number entered is larger then the previously entered one then it will store till 0
    } // the loop will close when the entered number is 0
      printf("Enter the number again : \n ");
        scanf("%d", &a);
}
    printf("The largest number you entered is %d", largest );
    return 0;
}