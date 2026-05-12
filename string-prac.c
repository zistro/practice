#include <stdio.h>
#include <string.h>
int main() {
	char str1[50] = "Modon";
	char str2[50];
	int i;
	for (i=0; i!='\0'; i++) {
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	printf("%s", str2);
	return 0;
}
