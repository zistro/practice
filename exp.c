#include <stdio.h>

int main() { 
	int x;
	float y;
	char z;
	printf("Enter a int value: ");
	scanf("%d", &x);
	printf("Enter a float value: ");
	scanf("%f", &y);
	printf("Enter a char value: ");
	scanf(" %c", &z);
	printf("Int = %d", x);
	printf("Float = %.2f", y);
	printf("Char = %c", z);
	return 0;
}
