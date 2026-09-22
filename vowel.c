// vowel identification using switch-cases.
#include<stdio.h>
int main() {
char alphabet;
printf("enter an alphabet= ");
scanf("%c", &alphabet);
switch(alphabet){
 case 'A':
 printf("%c is a vowel.", alphabet);
 break;
case 'E':
 printf("%c is a vowel.", alphabet);
 break;
case 'I':
 printf("%c is a vowel.", alphabet);
 break;
case 'O':
 printf("%c is a vowel.", alphabet);
 break;
case 'U':
 printf("%c is a vowel.", alphabet);
 break;
case 'a':
 printf("%c is a vowel.", alphabet);
 break;
case 'e':
 printf("%c is a vowel.", alphabet);
 break;
 case 'i':
 printf("%c is a vowel.", alphabet);
 break;
 case 'o':
 printf("%c is a vowel.", alphabet);
 break;
case 'u':
 printf("%c is a vowel.", alphabet);
 break;
default:
printf("%c is not a vowel.", alphabet);
}
return 0;
}


