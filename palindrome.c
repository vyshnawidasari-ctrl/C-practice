#include<stdio.h>
int main(){
int x,rem,rev,y;

printf("Enter a num= ");
scanf("%d", &x);
y=x;
rev=0;
while(x>0){
rem=x%10;
rev=(rev*10) + rem;
x=x/10;
}
if(y==rev){
printf("%d is a palindrome\n",y);
}
else{
printf("it is not a palindrome");
}
return 0;
}
