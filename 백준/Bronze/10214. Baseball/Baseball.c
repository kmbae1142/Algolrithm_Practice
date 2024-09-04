#include <stdio.h>

int main() {

	int T;
	int Y, K;
	int Ys = 0, Ks = 0;
	scanf("%d", &T);

	while (T--) {
		for (int i = 0; i < 9; i++) {
			scanf("%d %d", &Y, &K);
			Ys += Y;
			Ks += K;
		}
		if (Ys > Ks)
			printf("Yonsei\n");
		else if (Ys < Ks)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
	
}