#include <stdio.h>
#include <string.h>

int main() {

	int N;
	int al[26] = { 0, };
	char str[32];
	int count = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", str);
		al[str[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (al[i] >= 5) {
			printf("%c", i + 'a');
			count++;
		}
	}

	if (count == 0) {
		printf("PREDAJA");
	}

}