#include <stdio.h>
#include<string.h>

int main() {
	char s1[20], s2[20];
	printf("Enter string1: \n");
	gets(s1);
	printf("Enter string2: \n");
	gets(s2);
	printf("String 1 is: %s\n", s1);
	printf("String 2 is: %s\n", s2);
printf("Length of the strings 1 and 2 are, %d and %d", strlen(s1), strlen(s2));
return 0;
}

