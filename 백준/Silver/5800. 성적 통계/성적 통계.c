#include <stdio.h>

int main() {

	int n, max, temp, cnt = 1;
	scanf("%d", &n);

	while (n--) {

		int num, gap;
		int score[50] = { 0, };
		scanf("%d", &num);

		for (int i = 0; i < num; i++) {
			scanf("%d", &score[i]);
		}

		for (int i = 0; i < num - 1; i++) {

			max = i;
			for (int j = i + 1; j < num; j++) {
				if (score[max] < score[j]) {
					max = j;
				}
			}
			
			temp = score[max];
			score[max] = score[i];
			score[i] = temp;

		}

		gap = score[0] - score[1];
		for (int i = 1; i < num - 1; i++) {
			if (gap < score[i] - score[i + 1])
				gap = score[i] - score[i + 1];
		}

		printf("Class %d\n", cnt++);
		printf("Max %d, Min %d, Largest gap %d\n", score[0], score[num - 1], gap);

	}

}
