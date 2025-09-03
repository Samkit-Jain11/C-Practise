// Write a program that takes a number (1–7) as input and prints the corresponding day of the week.
 
 #include<stdio.h>
 
 int main() {
 int day;
 
 printf("Enter the number for which you have to find day of week :\n");
 scanf("%d", &day );
 
 switch(day) {
 
 case 1 :
 printf("Monday \n");
 break;
 
 case 2:
 printf("Tuesday \n");
 break;
 
 case 3:
 printf("Wednesday\n");
 break;
 
 case 4:
 printf("Thursday \n");
 break;
 
 case 5:
 printf("Friday \n");
 break;
 
 case 6:
 printf("Saturday\n");
 break;
 
 case 7:
 printf("Sunday");
 break;
 
 default:
 printf("Invalid input ! Enter a valid value between 1 to 7 . \n");
 
 
 }
 
 return 0;
 }