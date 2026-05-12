#include <stdio.h>
int main() {
	char pew;
	printf("Enter something: ");
	scanf("%c", &pew);
	if (pew>=65 && pew<=90) {
		printf("Upper case\n");
	}
	else if (pew>=97 && pew<=122) {
		printf("Lower case\n");
	}
	else {
		printf("Is it an char?\n");
	}
	return 0;
}
