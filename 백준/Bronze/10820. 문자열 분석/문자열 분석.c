#include <stdio.h>

void stranalyze(char* str, int* lower, int* upper, int* num, int* nul) {
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			(*upper)++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			(*lower)++;
		else if (str[i] == ' ')
			(*nul)++;
		else if (str[i] >= '0' && str[i] <= '9')
			(*num)++;
	}

}

int main() {

	char str[103];

	while (gets(str) != NULL) {
		int lower = 0, upper = 0, num = 0, nul = 0; 
		stranalyze(str, &lower, &upper, &num, &nul);
		printf("%d %d %d %d\n", lower, upper, num, nul);
	}

}