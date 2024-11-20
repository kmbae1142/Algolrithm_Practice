#include <stdio.h>
#include <string.h>

int main() {

	int T, sum;
	char str[1003];
	scanf("%d", &T);

	while (T--) {
		sum = 0;
		int al[26] = { 0, };
		scanf("%s", str);
		for (int i = 0; str[i] != '\0'; i++) {
			al[str[i] - 'A']++;
		}
		for (int i = 0; i < 26; i++) {
			if (al[i] == 0) {
				sum += i + 'A';
			}
		}
		printf("%d\n", sum);
	}

}