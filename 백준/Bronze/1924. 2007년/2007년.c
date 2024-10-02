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


	// 1월 31일 수요일, 2월 1일 목
	/*1 7 
	8 14
	15 21
	22 28
	29 30 31*/

	
	// 월.. 토일 1월     day_rem[0]  31일   31%7=3      
	// 목금토일월화수 2월 day_rem[3]  28일   28%7=0
	// 목.. 수 3월  day_rem[3]       31일   31%7 = 3
	// 일월..금토 4월	day_rem[6]	30일    30%7 = 2
	// 화.. 일월 5월		day_rem[1]  

}