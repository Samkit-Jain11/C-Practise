// Take numbers from user and find out that he or she is fail 
 
 #include<stdio.h>
 
 int main() {
 
 int p , c , m ;
 
 printf("Enter the number obtained in Physics :\n");
 scanf(" %d", &p);
 
 printf("Enter the number obtained in Chemistry :\n");
 scanf("%d", &c);
 
 printf("Enter the number obtained in Mathematics :\n");
 scanf("%d", &m);
 
 if( p>=33 && c>=33 && m>=33 ){
 printf("You have passed the exam. Congratulations ! \n");
 }
 
 else if( p<33 && c>=33 && m>=33) {
 printf("You have failed in Physics that is the reason you failed in exam \n");
 }
 
 else if( p>=33 && c<33 && m>=33){
 printf("You have failed in Chemmistry that is the reason you failed in exam \n");
 }
 
 else if( p>=33 && c>=33 && m<33) {
 printf("You have failed in Maths that is the reason you failed in exam \n");
 }
 
 
 else {
 printf("Since , we consider a student is failed the exam even if he failed in one subject . You did failed in more theen one subject . \n");
 
 }
 
 return 0;
 }