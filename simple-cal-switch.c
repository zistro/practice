#include <stdio.h>
int main() {
	int p, fi, si, sum, sub, mult;
	float div;
	printf("1. Summation (+)\n");
	printf("2. Subtraction (-)\n");
	printf("3. Multiplication (*)\n");
	printf("4. Division (/)\n");
	printf("Pick one of these four: ");
	scanf("%d", &p);
	printf("Enter two integers with space: ");
	scanf("%d %d", &fi, &si);
	switch (p) {
		case 1:
			sum = fi+si;
			printf("Sum = %d\n", sum);
			break;
		case 2:
			sub = fi-si;
			printf("Sub = %d\n", sub);
			break;
		case 3:
			mult = fi*si;
			printf("Mult = %d\n", mult);
			break;
		case 4:
			div = (float)fi/si;
			printf("Div = %.2f\n", div);
			break;
		default:
			printf("Choosed the wrong number\n");
			break;
	}
	return 0;
}
