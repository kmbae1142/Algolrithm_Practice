#include <stdio.h>

int main() {

	int score[2][9];
	int score_ulim = 0;
	int score_slink = 0;
	int check = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 9; i++) {
		score_ulim += score[0][i];
		if (score_ulim > score_slink) {
			check = 1;
		}
		score_slink += score[1][i];
		if (score_ulim > score_slink) {
			check = 1;
		}
	}

	if (check) {
		printf("Yes");
	}
	else {
		printf("No");
	}

}