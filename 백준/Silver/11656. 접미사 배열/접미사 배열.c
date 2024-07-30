#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

	char suffix[1002];

}Suffix;

Suffix Sfx[1000];

int compare(const Suffix* a, const Suffix* b) {

	return strcmp(a->suffix, b->suffix);

}

int main() {

	char str[1002];
	int i, j, len;

	scanf("%s", str);

	len = strlen(str);

	for (i = 0; i < len; ++i) {
		strcpy(Sfx[i].suffix, str);
		for (j = 0; j < strlen(str) - 1; ++j) {
			str[j] = str[j + 1];
		}
		str[j] = '\0';
	}

	qsort(Sfx, len, sizeof(Suffix), compare);

	for (i = 0; i < len; ++i) {
		printf("%s\n", Sfx[i].suffix);
	}

	return 0;

}