#include <stdio.h>
#include <string.h>

int main() {

	char str[7];
	int error = 0;

	while (1) {
		error = 0;
		scanf("%s", str);
		if (strcmp(str, "0") == 0) {
			break;
		}
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
			printf("no\n");
		}
		else {
			printf("yes\n");
		}
	}

}