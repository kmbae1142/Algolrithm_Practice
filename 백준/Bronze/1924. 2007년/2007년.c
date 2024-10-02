#include <stdio.h>

int main() {

	int day_rem[8] = { 0, 1, 2, 3, 4, 5, 6 };
	int month_[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char* str[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month, day;
	int index = 0;
	scanf("%d %d", &month, &day);

	for (int i = 0; i < month - 1; i++) {
		index = (index + month_[i] % 7) % 7;
	}

	printf("%s", str[day_rem[(index + day % 7) % 7]]);

}