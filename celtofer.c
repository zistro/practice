#include <stdio.h>
int main() {
	float c,f;
	printf("Enter celcius value: ");
	scanf("%f", &c);
	f=(9*c/5)+32;
	printf("Farenheit : %.2f", f);
	return 0;
}
