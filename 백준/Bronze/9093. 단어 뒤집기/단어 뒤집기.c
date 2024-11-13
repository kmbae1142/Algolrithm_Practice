#include <stdio.h> 
#include <string.h> 

void reverse(char* str, int size) {

	for (int i = 0; i < size / 2; i++) {
		int temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
	}

}

int main(void)
{
	char str1[1003];
	char ch;
	char* delimiter = " ";
	char* ptoken;
	int T;

	scanf("%d", &T);
	while ((ch = getchar()) != '\n');

	for (int i = 0; i < T; i++) {
		fgets(str1, 1003, stdin);
		str1[strlen(str1) - 1] = '\0';

		ptoken = strtok(str1, delimiter);
		while (ptoken != NULL)
		{
			reverse(ptoken, strlen(ptoken));
			printf("%s ", ptoken);
			ptoken = strtok(NULL, delimiter);
		}
		printf("\n");
	}

}