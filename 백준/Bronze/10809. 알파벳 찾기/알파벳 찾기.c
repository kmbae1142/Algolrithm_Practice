#include <stdio.h>
#include <string.h>

int main() {

	char str[103];
	int al[26];
	scanf("%s", str);
	int len = strlen(str);

	for (int i = 0; i < 26; i++) {
		al[i] = -1;
	}

	for (int i = 0; i < len; i++) {
		if (al[str[i] - 'a'] == -1) {
			al[str[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", al[i]);
	}

}