#include <stdio.h>
#include <string.h>
int main() {
	char str1[50] = "Modon Mohan";
	char str2[50];
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("%s", str2);
	return 0;
}
