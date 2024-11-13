#include <stdio.h> 
#include <string.h> 

int main(void)
{
	char str1[103];
	char* delimiter = "-";
	char* ptoken;

	scanf("%s", str1);

	ptoken = strtok(str1, delimiter);
	while (ptoken != NULL)
	{
		printf("%c", ptoken[0]);
		ptoken = strtok(NULL, delimiter);
	}

}