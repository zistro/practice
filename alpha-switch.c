#include <stdio.h>
int main() {
	char pew;
	printf("Enter something: ");
	scanf("%c", &pew);
	switch ((pew>=65 && pew<=90) || (pew>=97 && pew<=122)) {
		case 1:
			printf("Alphabet\n");
			break;
		case 0:
			printf("Not an alphabet\n");
	}
	return 0;
}
