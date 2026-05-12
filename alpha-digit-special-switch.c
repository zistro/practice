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
			switch (pew>=48 && pew<=57) {
				case 1:
					printf("Number\n");
					break;
				case 0:
					printf("Special char\n");
					break;
			}
	}
	return 0;
}
