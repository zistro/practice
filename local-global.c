#include <stdio.h>
int a=10;
int main() {
	int a=2;
	{
		int a=3;
		a++;
		printf("%d\n", a);
	}
	a++;
	printf("%d\n", a);
	return 0;
}
