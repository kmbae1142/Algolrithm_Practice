#include <stdio.h>
#include <string.h>

int main() {

	int T, N, M, count;
	scanf("%d", &T);

	while (T--) {
		count = 0;
		scanf("%d %d", &N, &M);
		for (int i = N; i <= M; i++) {
			int temp = i;
			if (i == 0) {
				count++;
				continue;
			}
			while (temp > 0) {
				if (temp % 10 == 0) {
					count++;
					temp /= 10;
				}
				else {
					temp -= temp % 10;
					temp /= 10;
				}
			}
		}
		printf("%d\n", count);
	}

}