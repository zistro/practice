#include <stdio.h>
int main() {
	int i, num, flag=0;
	printf("Enter the num: ");
	scanf("%d", &num);
	for(i=2;i<num;i++) {
		if (num%i==0) {
			printf("Not prime");
			flag=1;
			break;
		}
	}
	if(flag==0) {
		printf("Prime");
	}
	return 0;
}
