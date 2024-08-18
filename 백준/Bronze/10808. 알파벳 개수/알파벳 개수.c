#include <stdio.h>

int main() {

	char alphabet[26] = { 0, };
	char str[102];

	scanf("%s", str);

	for (int i = 0; i < strlen(str); ++i) {
		for (int j = 'a'; j <= 'z'; ++j) {
			if (str[i] == j)
				alphabet[j - 'a']++;
		}
	}

	for (int i = 0; i < 26; ++i) {
		printf("%d ", alphabet[i]);
	}
}