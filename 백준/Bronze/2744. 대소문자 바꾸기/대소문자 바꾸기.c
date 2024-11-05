#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {

	char str[102];

	scanf("%s", str);

	for (int i = 0; i < strlen(str); i++) {
		if (islower(str[i]) != 0)
			str[i] = toupper(str[i]);
		else
			str[i] = tolower(str[i]);
	}
	printf("%s", str);


}