#include <stdio.h> 
#include <string.h> 

int main() {

	char str[103];
	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (i % 10 == 0 && i != 0) {
			printf("\n");
		}
		printf("%c", str[i]);
	}

	return 0;

}