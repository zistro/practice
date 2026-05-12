#include <stdio.h>
int main() {
	int lw;
	printf("Enter the number: ");
	scanf("%d", &lw);
	if (lw%2==0) {
		printf("%d is even\n", lw);
	}
	else {
		printf("%d is odd\n", lw);
	}
	return 0;	
}

