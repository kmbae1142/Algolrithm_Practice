#include <stdio.h>
#include <string.h>

char str[1000003];

int main() {

	int alphabet[26] = { 0, };
	int max, count = 0;
	scanf("%s", str);
    int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			alphabet[str[i] - 'A']++;
		}
		else {
			alphabet[str[i] - 'a']++;
		}
	}

	max = 0;
	for (int i = 1; i < 26; i++) {
		if (alphabet[max] < alphabet[i]) {
			max = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[max] == alphabet[i]) {
			count++;
		}
	}

	if (count > 1) {
		printf("?");
	}
	else {
		printf("%c", max + 'A');
	}

}