#include <stdio.h>
int main() {
	char pew;
	printf("Enter something: ");
	scanf("%c", &pew);
	switch (pew>=65 && pew<=90) {
		case 1:
			printf("Upper case\n");
			break;
		case 0:
			switch (pew>=97 && pew<=122) {
				case 1:
					printf("Lower case\n");
					break;
				case 0:
					printf("Is it an char?\n");
					break;
			}
	}
	return 0;
}
