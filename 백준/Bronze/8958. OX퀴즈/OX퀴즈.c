#include <stdio.h>

int main() {

	int T, count, score;
	char str[83];
	scanf("%d", &T);

	while (T--) {
		scanf("%s", str);
		count = 0;
		score = 0;

		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] == 'O') {
				count++;
				score += count;
			}
			else {
				count = 0;
			}
		}

		printf("%d\n", score);
	}

}