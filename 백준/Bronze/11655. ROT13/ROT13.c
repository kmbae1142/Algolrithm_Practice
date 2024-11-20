#include <stdio.h> 
#include <string.h> 

int main(void)
{
	char str[103];
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';

	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ') {
			printf("%c", str[i]);
		}
		else {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				if (str[i] + 13 > 'Z') {
					printf("%c", str[i] - 13);
				}
				else {
					printf("%c", str[i] + 13);
				}
			}
			else {
				if (str[i] + 13 > 'z') {
					printf("%c", str[i] - 13);
				}
				else {
					printf("%c", str[i] + 13);
				}
			}
		}
	}

}