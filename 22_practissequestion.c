// A guess game where the number is already fixed and user has to guess it
#include <stdio.h>

int main() {
    int a , i ;
    int num_tu_guess = 446;
    int try = 10 ;
    
    printf("Welcome to the gamme you have %d tries to guess the number \n", try);

    for(i=1; i<= try ; i++) {
        printf("Attempt %d : Enter your guess : \n", i);
        scanf("%d", &a);
    
    if (a>num_tu_guess) {
        printf("Too high guess low \n");
    }
    else if (a<num_tu_guess){
        printf("Too low guess high \n");
    }
    
    else {
         printf("You guessed it right in %d tries \n", i );
         break ;
    
    }   
    

}
if (a!=num_tu_guess) {
        printf("Sorry, you used all your tries. The correct answer was %d.\n", num_tu_guess);
    }
    return 0;
}