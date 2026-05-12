#include <stdio.h>
int fun(int n) {
	if (n==1) return 1;
	else return 1+fun(n-1);
	return 0;
}
int main() {
	int a=3;
	fun(a);
	printf("%d", a);
	return 0;
}
