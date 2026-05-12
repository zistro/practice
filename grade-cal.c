#include <stdio.h>
int main() {
	float marks;
	printf("Enter you number: ");
	scanf("%f", &marks);
	if(marks>=50 && marks<=100) {
		printf("You have passed");
	}
	else if(marks>=33 && marks<=49) {
		printf("You have barely passed");
	}
	else {
		printf("You have failed");
	}
	return 0;
}
