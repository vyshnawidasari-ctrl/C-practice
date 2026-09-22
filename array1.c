//w.a.p. to display and store roll numbers of 5 people.
#include<stdio.h>
int main(){
int hallTicket[5];
for(int i=0; i<=5;i++){
printf("Enter the Roll Number: ");
scanf("%d", &hallTicket[i]);
}
for(int j=0;j<=5;j++){
printf("The Roll Numbers are:");
printf("%d\n", hallTicket[j]);
}
return 0;
}
