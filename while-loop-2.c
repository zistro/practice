#include <stdio.h>
int main() {
	int i=2, n, flag=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<n){
		if(n%i==0){
			printf("Not a prime number");
			flag=0;
			break;
		}
		i++;
	}
	if(flag==1){
		printf("Prime number");
	}
	return 0;
}
