#include <stdio.h>
#include <stdlib.h>

typedef struct score {
	int score;
	int index;
}Score;

int compare1(const void* _sc1, const void* _sc2) {

	Score* sc1 = (Score*)_sc1;
	Score* sc2 = (Score*)_sc2;

	if (sc1->score > sc2->score)
		return 1;
	else if (sc1->score < sc2->score)
		return -1;
	else
		return 0;

}

int compare2(const void* _index1, const void* _index2) {

	int* index1 = (int*)_index1;
	int* index2 = (int*)_index2;

	if (*index1 > *index2)
		return 1;
	else if (*index1 < *index2)
		return -1;
	else
		return 0;

}

int main() {

	Score sc[8];
	int index5[5];
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &sc[i].score);
		sc[i].index = i + 1;
	}

	qsort(sc, 8, sizeof(Score), compare1);

	for (int i = 3; i < 8; i++) {
		index5[i - 3] = sc[i].index;
		sum += sc[i].score;
	}
	
	qsort(index5, 5, sizeof(int), compare2);

	printf("%d\n", sum);
	for (int i = 0; i < 5; i++) {
		printf("%d ", index5[i]);
	}
}