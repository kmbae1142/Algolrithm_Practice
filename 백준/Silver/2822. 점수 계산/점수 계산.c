#include <stdio.h>

typedef struct {
	int score;
	int index;
}Score;

int main() {

	Score sc[8];
	int max, min, sum = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &sc[i].score);
		sc[i].index = i;
	}

	for (int i = 0; i < 5; i++) {
		max = i;
		for (int j = i + 1; j < 8; j++) {
			if (sc[max].score < sc[j].score) {
				max = j;
			}
		}
		Score temp = sc[max];
		sc[max] = sc[i];
		sc[i] = temp;

		sum += sc[i].score;
	}

	printf("%d\n", sum);

	for (int i = 0; i < 4; i++) {
		min = i;
		for (int j = i + 1; j < 5; j++) {
			if (sc[min].index > sc[j].index) {
				min = j;
			}
		}
		Score temp = sc[min];
		sc[min] = sc[i];
		sc[i] = temp;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", sc[i].index + 1);
	}

}