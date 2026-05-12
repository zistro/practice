#include <stdio.h>
int main() {
	char str1[] = "Moshi mosh";
	char str2[50];
	int i=0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("String 2 is %s", str2);
	return 0;
}
