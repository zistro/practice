#include <stdio.h>
int main() {
	float c,f;
	printf("Enter farenheit value: ");
	scanf("%f", &f);
	c=(f-32)*5/9;
	printf("Celcius : %.2f", c);
	return 0;
}
