#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[258];
	int happy = 0, sad = 0;

	fgets(str, 258, stdin);
	int len = strlen(str);
	str[len - 1] = '\0';

	for (int i = 0; i < len - 2; i++) {
		if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == ')') {
			happy++;
		}
		else if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == '(') {
			sad++;
		}
	}

	if (happy == 0 && sad == 0) printf("none");
	else if (happy == sad) printf("unsure");
	else if (happy > sad) printf("happy");
	else printf("sad");

	return 0;

}