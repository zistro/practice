#include <stdio.h>
#include <string.h>
int main() {
	char str1[] = "Moshi mosh";
	char str2[50];
	strcpy(str2, str1);
	printf("String 2 is %s", str2);
	return 0;
}
