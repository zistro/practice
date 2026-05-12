#include <stdio.h>
// Prototype 
int add(int a, int b); 
int sub(int a, int b);
int mult(int a, int b);
float division(float a, float b);
// Main function
int main() {
	int a, b;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	// function use with actual parameters
	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mult(a, b));
	printf("%f\n", division(a, b));
	return 0;
}
// Definition with formal parameters
int add(int a, int b) {
	int result = a + b;
	return result;
}
int sub(int a, int b) {
	int result = a - b;
	return result;
}
int mult(int a, int b) {
	int result = a * b;
	return result;
}
float division(float a, float b) {
	float result = a / b;
	return result;
}
