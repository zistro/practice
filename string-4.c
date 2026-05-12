#include <stdio.h> 
#include <string.h> 
int main() { 
	char st[100]; 
	fgets(st, sizeof(st), stdin);   scanf("%s",st); 
	//scanf("%[^\n]",st);  printf("%s",st); 
 return 0; 
} 

