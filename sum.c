// sum of individual digits
#include<stdio.h>
int main(){
int x,n,sum;

printf("Enter a number: ");
scanf("%d", &n);
sum=0;
while(n>0){
x=n%10;
sum=sum+x;
n=n/10;
}
printf("sum=%d", sum);
return 0;
}
