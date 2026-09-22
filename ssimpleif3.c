//wap to print zero or positive or negative.
include<stdio.h>
int main()
{
int a;
printf("Enter a number: ");
scanf("%d", &a);
if(a==0){
printf("ZERO");
}
if(a>0){
printf("This is a positive number.");
}
if(a<0){
printf("This is a negative number.");
}
return 0;
}

