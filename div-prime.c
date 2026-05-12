#include <stdio.h>
int main() {
	int i, num, count=0;
	printf("Enter the number: ");
	scanf("%d", &num);
	for(i=1;i<=num;i++) {
		if(num%i==0) {
			printf("%d\n", i);
			count = count+1;
		}
	}
	if(count==2){
		printf("Prime");
	}
	else {
		printf("Not prime");
	}
	return 0;
}
