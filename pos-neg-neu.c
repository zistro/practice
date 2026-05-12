#include <stdio.h>

int main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x>0) {
		printf("Positive number");
	}
	if(x<0) {
		printf("Negative number");
	}
	if(x==0) {
		printf("Neutral number");
	}
	return 0;
}
