#include<stdio.h>

int main() {
    // finding volume of a cylinder
    float r , h ;

    printf("Radius of cylinder is : ");
    scanf("%f", &r);

    printf("Height of cylinder is : ");
    scanf("%f", &h);

    printf("Volume of cylinder is %.2f", 3.14*r*r*h);
    return 0;

}