// Take numbers from the user until they enter 0, and find the largest number entered.

#include <stdio.h>

int main() {
    int a , largest;
    printf("Enter the number : \n");
    scanf("%d", &a);

    largest = a;

    while(a!=0){
        if(a>largest) {
        largest = a;
    }
      printf("Enter the number again : \n ");
        scanf("%d", &a);
}
    printf("The largest number you entered is %d", largest );
    return 0;
}