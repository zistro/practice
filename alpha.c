#include <stdio.h>
int main() {
	char pew;
	printf("Enter something: ");
	scanf("%c", &pew);
	if((pew>=65 && pew<=90) || (pew>=97 && pew<=122)) {
		printf("Alphabet\n");
	}
	else {
		printf("Not an alphabet\n");
	}
	return 0;
}
