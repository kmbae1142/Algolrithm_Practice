#include <stdio.h>
#include <string.h>

int main() {

	int num;
	int count = 0, group_word = 0, count_set = 0;
	char str[103];
	scanf("%d", &num);

	while (num--) {

		char alphabet_set[26] = { 0, };
		scanf("%s", str);
		count = 0;
		count_set = 0;

		int len = strlen(str);

		for (int i = 0; i < len; i++) {
			alphabet_set[str[i] - 'a'] = 1;
		}
		for (int i = 0; i < len - 1; i++) {
			if (str[i] != str[i + 1]) {
				count++;
			}
		}
		count++;

		for (int i = 0; i < 26; i++) {
			if (alphabet_set[i] == 1) {
				count_set++;
			}
		}
		if (count_set == count) {
			group_word++;
		}
	}

	printf("%d", group_word);
    return 0;
}