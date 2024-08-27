#include <stdio.h>

void hanoi_tower(int n, int from, int temp, int to) {
	// 종료조건				  1		   2		3
	if (n == 1) {
		printf("%d %d\n", from, to);
	}
	else {
		// 마지막 원반을 제외한 원반들을 중간기둥으로 옮긴다.
		hanoi_tower(n - 1, from, to, temp);
		printf("%d %d\n", from, to);
		// 중간기둥에 있던 원반들을 목적기둥으로 옮긴다.
		hanoi_tower(n - 1, temp, from, to);
	}
}

int main() {

	int n;
	scanf("%d", &n);

	printf("%d\n", (1 << n) - 1);
	hanoi_tower(n, 1, 2, 3);

}