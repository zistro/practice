#include <stdio.h>
int main() {
	int i=1, n, count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<=n) {
		if(n%i==0){
			printf("%d\n", i);
			count = count+1;
		}
		i++;
	}
	printf("No of divisiors = %d\n", count);
	if(count==2){
		printf("Prime number");
	}
	else{
		printf("Not a prime number");
	}
	return 0;
}
