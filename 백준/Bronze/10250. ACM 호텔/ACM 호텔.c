#include <stdio.h>


int main() {

	int T;
	int H, W;
	int N;
	int k = 0, l = 0, count = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		k = 0, l = 0;
		count = 0;
		scanf("%d %d %d", &H, &W, &N);
		int hotel[H][W];

		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				hotel[i][j] = (i + 1) * 100 + j + 1;
			}
		}

		while (l < W) {
			k = 0;
			while (k < H) {
				if (count == N)
					break;
				k++;
				count++;
			}
			if (count + 1 == N + 1)
				break;
			
			l++;
		}
		
		printf("%d\n", hotel[k - 1][l]);
		
        
	}
}