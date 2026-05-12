#include <stdio.h>
int main() {
	char str[] = "Lmao gebon";
	int i=0, count=0;
	while (str[i] != '\0') {
		count=count+1;	
		i++;
	}
	printf("Lenth = %d", count);
	return 0;
}
