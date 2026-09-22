#include<stdio.h>
int main(){
int i,n;
printf("Enter limit: ");
scanf("%d", &n);
i=1;
while(i<=n){
printf("Square of %d is %d.\n", i, i*i);
i++;
}
return 0;
}

