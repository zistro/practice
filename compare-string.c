#include <stdio.h>
#include <string.h>
int main() {
	char str1[50], str2[50];
	int result;
	printf("Enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	int len1 = strlen(str1);
	if(str1[len1 - 1] == '\n') {
		str1[len1 - 1] = '\0';
	}
	printf("Enter second string: ");
	fgets(str2, sizeof(str2), stdin);
	int len2 = strlen(str2);
	if(str2[len2 - 1] == '\n') {
		str2[len2 - 1] = '\0';
	}
	result = strcmp(str1, str2);
	if (result==0) {
		printf("Both are same");
	}
	else {
		printf("Not same");
	}
	return 0;
}

// If the output is 0 then strings are same
