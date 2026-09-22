// write a program to display reverse of a number.
#include<stdio.h>
int main() {
int x;
int rem;
int rev;
printf("Enter a number: ");
scanf("%d", &x);
rev=0;
while(x>0){
rem=x%10;
rev=(rev*10)+rem;
x=x/10;
}
printf("Reverse: %d", rev);
return 0;
}
