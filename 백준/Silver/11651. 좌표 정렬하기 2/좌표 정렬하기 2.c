#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int xpos;
	int ypos;

}Pos;

int compare(const void* x, const void* y) {

	Pos* ptr1 = (Pos*)x;
	Pos* ptr2 = (Pos*)y;

	if (ptr1->ypos == ptr2->ypos) {
		return ptr1->xpos - ptr2->xpos;
	}
	else {
		return ptr1->ypos - ptr2->ypos;
	}

}

Pos pos[100000];

int main() {

	int num;

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &pos[i].xpos, &pos[i].ypos);
	}

	qsort(pos, num, sizeof(Pos), compare);

	for (int i = 0; i < num; i++) {
		printf("%d %d\n", pos[i].xpos, pos[i].ypos);
	}

}