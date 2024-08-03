#include <stdio.h>

int max_p(int arr[], int len) {

	int max = arr[0];
	int max_index = 0;

	for (int i = 1; i < len; ++i) {
		if (max <= arr[i]) {
			max = arr[i];
			max_index = i;
		}
	}

	return max_index;

}

int main() {

	int num;
	int people[50] = { 0, };
	scanf("%d", &num);

	for (int i = 0; i < num; ++i) {
		scanf("%d", &people[i]);
	}

	int temp = people[0]; // 처음 1번 표 수

	while (max_p(people, num) != 0) {
		people[max_p(people, num)]--;
		people[0]++;
	}

	printf("%d", people[0] - temp);
}