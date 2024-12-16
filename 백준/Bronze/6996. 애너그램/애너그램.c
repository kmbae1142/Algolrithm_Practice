#include <stdio.h>

void alphabet_check(int* al, char* str) {

	for (int i = 0; str[i] != '\0'; i++) {
		al[str[i] - 'a']++;
	}

}

int main() {

	int T, check = 1;
	char str1[103], str2[103];
	scanf("%d", &T);

	while (T--) {
		int al1[26] = { 0, };
		int al2[26] = { 0, };
		scanf("%s %s", str1, str2);
		if (strlen(str1) == strlen(str2)) {
			alphabet_check(al1, str1);
			alphabet_check(al2, str2);
			for (int i = 0; i < 26; i++) {
				if (al1[i] != al2[i])
					check = 0;
			}
			if (check)
				printf("%s & %s are anagrams.\n", str1, str2);
			else
				printf("%s & %s are NOT anagrams.\n", str1, str2);
		}
		else {
			printf("%s & %s are NOT anagrams.\n", str1, str2);
		}
	}

}