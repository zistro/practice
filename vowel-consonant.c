#include <stdio.h>
int main() {
	char vc;
	printf("Enter char: ");
	scanf("%c", &vc);
	switch (vc>='A' && vc<='Z' || vc>='a' && vc<='z') {
		case 1:
			switch (vc=='A' || vc=='E' || vc=='I' || vc=='O' || vc=='U' || vc=='a' || vc=='e' || vc=='i' || vc=='o' || vc=='u' ) {
				case 1:	
					printf("Vowel\n");
					break;
				case 0:
					printf("Not a vowel\n");
					break;
			}
			break;
		case 0:
			printf("Did you entered a char?\n");
			break;
	}
	return 0;
}
