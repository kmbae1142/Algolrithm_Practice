#include <stdio.h>
#define max_(a, b) (((a) > (b)) ? (a) : (b))

int main() {
	
	int n;
	int dice[3];
	int count = 0, min = 0, temp, max;
	scanf("%d", &n);

	while (n--) {

		count = 0;

		for (int i = 0; i < 3; i++) {
			scanf("%d", &dice[i]); 
		}

		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (dice[i] == dice[j]) {
					count++;
					temp = dice[i];
				}
			}
		}

		max = dice[0];
		for (int i = 1; i < 3; i++) {
			if (max < dice[i])
				max = dice[i];
		}

		if (count == 3)
			min = max_(min, 10000 + temp * 1000); 
		else if (count == 1)
			min = max_(min, 1000 + temp * 100); 
		else {
			min = max_(min, max * 100); 
		}
		 
	}

	printf("%d", min); 
}