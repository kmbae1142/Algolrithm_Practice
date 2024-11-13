#include <stdio.h>
#include <string.h>

int main() {

	char str[103];
	int error = 0;

	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++) {
		if (str[i] == str[len - 1 - i]) {
			continue;
		}
		else {
			error = 1;
			break;
		}
	}

	if (error) {
		printf("0");
	}
	else {
		printf("1");
	}

}