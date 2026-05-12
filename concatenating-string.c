#include <stdio.h>
#include <string.h>
int main() {
	char str1[100] = "Moshi";
	char str2[] = "Mosh";
	strcat(str1, str2);
	printf("%s", str1);
	return 0;
}
