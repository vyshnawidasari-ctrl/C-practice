//w.a.p. to store and display marks using float.

#include<stdio.h>
int main(){
float marks[5];

for(int i=0;i<=4;i++){
printf("The Marks obtained by student is ");
scanf("%f", &marks[i]);
}
for(int j=0;j<=4;j++){
printf("%.2f\n", marks[j]);
}
return 0;
}
