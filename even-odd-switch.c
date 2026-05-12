#include <stdio.h>
int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	switch (x%2==0) {
		case 1:	
			printf("%d is even\n", x);
			break;
		case 0:
			printf("%d is odd\n", x);
			break;
	}
	return 0;
}
