//checking program for vote eligibility.
#include<stdio.h>
int main(){
int age;
printf("ENTER YOUR AGE; ");
scanf("%d", &age);
if(age>= 18){
printf("You are eligible to vote.");
}

if(age<18){
printf("You are not eligible to vote yet.");
}
return 0;
}

