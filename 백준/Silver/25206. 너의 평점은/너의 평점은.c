typedef struct subscore {

	char subject[52];
	float num;
	char grade[4];

}Sc;

float gradenum(char grade[]) {

	if		(strcmp(grade, "A+") == 0) return 4.5;
	else if (strcmp(grade, "A0") == 0) return 4.0;
	else if (strcmp(grade, "B+") == 0) return 3.5;
	else if (strcmp(grade, "B0") == 0) return 3.0;
	else if (strcmp(grade, "C+") == 0) return 2.5;
	else if (strcmp(grade, "C0") == 0) return 2.0;
	else if (strcmp(grade, "D+") == 0) return 1.5;
	else if (strcmp(grade, "D0") == 0) return 1.0;
	else if (strcmp(grade, "F") == 0)  return 0.0;

}

int main() {

	Sc sc;
	float sum = 0;
	float grade = 0;

	for (int i = 0; i < 20; i++) {

		scanf("%s %f %s", sc.subject, &sc.num, sc.grade);

		if (strcmp(sc.grade, "P") != 0) {
			sum += sc.num * gradenum(sc.grade);
			grade += sc.num;
		}

	}

	printf("%f", sum / grade);

}