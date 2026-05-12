#include <stdio.h>
int main() {
	char pew;
	printf("Enter something: ");
	scanf("%c", &pew);
	if((pew>=65 && pew<=90) || (pew>=97 && pew<=122)) {
		printf("Alphabet\n");
	}
	else if (pew>=48 && pew<=57) {
		printf("Number\n");
	}
	else {
		printf("Special char\n");
	}
	return 0;
}
