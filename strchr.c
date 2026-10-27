#include <stdio.h>
#include<string.h>

int main() {
	char s1[20], s2[20];
	printf("Enter your string 1: \n");
	gets(s1);
	printf("Enter your string 2: \n");
	gets(s2);
	printf("The entered string 1 is %s\n", s1);
	printf("The entered string 2 is %s\n", s2);
	printf("the result of strchr function is %s\n", strchr(s1,'i'));
	printf("the result pf strchr function is %s\n", strchr(s2,'y'));
return 0; 
}
