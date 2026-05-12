#include <stdio.h>
int main() {
	int i=1, num=10;
label:
	printf("%d * %d\n", num, i);
	i++;
	if(i<=5)
		goto label;
	return 0;
}
