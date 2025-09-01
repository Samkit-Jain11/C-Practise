#include<stdio.h>

int main(){
    // marks obtained by student in five different subjects 
 
    float m , c , p , g , e , avg_marks , aggregate_marks ;

    printf("Marks obtained in Maths: ");
    scanf("%f", &m);

    printf("Marks obtained in Chemistry: ");
    scanf("%f", &c);

    printf("Marks obtained in Physics: ");
    scanf("%f", &p);
    
    printf("Marks obtained in Physical Education: ");
    scanf("%f", &g);

    printf("Marks obtained in English: ");
    scanf("%f", &e);

    aggregate_marks = m + c + p + g + e;   // total marks
    avg_marks = aggregate_marks / 5;       // average

    printf("The aggregate marks is %0.2f \n", aggregate_marks);
    printf("The average marks is %0.2f \n", avg_marks);

    return 0;
}
