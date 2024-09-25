#include <stdio.h>

int main() {

	int a, c0 = 0, c1 = 0;

	for (int i = 0; i < 3; i++) {

		c0 = 0, c1 = 0;

		for (int j = 0; j < 4; j++) {
			scanf("%d", &a);
			if (a) {
				c1++;
			}
			else {
				c0++;
			}
		}
		
		if (c0 == 1)
			printf("A\n");
		else if (c0 == 2)
			printf("B\n");
		else if (c0 == 3)
			printf("C\n");
		else if (c0 == 4)
			printf("D\n");
		else
			printf("E\n");
	}

}