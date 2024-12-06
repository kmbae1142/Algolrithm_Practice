#include <stdio.h>
#include <string.h>

int main() {

	int N, i = 0;
	char pattern[103];
	char temp[103];
	char* delimiter = "*";
	char* ptoken;
	char* pattern_str[4];
	scanf("%d", &N);
	scanf("%s", pattern);
	int len = strlen(pattern);

	ptoken = strtok(pattern, delimiter);
	while (ptoken != NULL) {
		pattern_str[i] = ptoken;
		if (i == 0)
			strcpy(temp, ptoken);
		if (i == 1)
			strcat(temp, ptoken);
		ptoken = strtok(NULL, delimiter);
		i++;
	}

	while (N--) {
		i = 0;
		int check = 0;
        char str[103];
		scanf("%s", str);
		int len2 = strlen(str);

		if (len2 == 1) {
			printf("NE\n");
			continue;
		}

		if (len2 == len - 1) {
			if (strcmp(temp, str) == 0) {
				printf("DA\n");
			}
			else {
				printf("NE\n");
			}
			continue;
		}
        
        if (len - 1 > len2) {
	        printf("NE\n");
	        continue;
        }

		pattern_str[2] = pattern_str[1];
		str[strlen(pattern_str[0])] = ' ';
		str[len2 - strlen(pattern_str[1]) - 1] = ' ';

		i = 0;
		ptoken = strtok(str, " ");
		while (ptoken != NULL) {
			if (len2 - len > 1) {
				if (i != 1) {
					if (strcmp(ptoken, pattern_str[i]) == 0) {
						check++;
					}
				}
			}
			else {
				if (strcmp(ptoken, pattern_str[i]) == 0) {
					check++;
				}
			}
			ptoken = strtok(NULL, " ");
			i++;
		}

		if (check > 1) {
			printf("DA\n");
		}
		else {
			printf("NE\n");
		}
	}

}