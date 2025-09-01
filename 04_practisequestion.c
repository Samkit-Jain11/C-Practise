#include<stdio.h>

int main() {
    
    // converting the distance between two cities in meters , feet , inches and centimeters
    
    float k , m , e , i , c;

    printf("Enter the distance between both the cities in km :");
    scanf("%f", &k);

    m = 1000 * k;
    e = 3280.84 * k;
    i = 39370.1 * k;
    c = 1000000 * k;

    printf("The distance in meter is %f \n", m);
    printf("THe distance in feet is %f \n ", e);
    printf("The distance in inches iss %f \n", i);
    printf("The distance in centimeter is %f \n", c);

    return 0;
}