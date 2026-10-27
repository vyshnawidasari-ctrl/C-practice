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
	printf("the result of strncmp function is %d", strncmp(s1,s2,3));
return 0; 
}
