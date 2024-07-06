#include <stdio.h>

int main() {

	char ch[5][16] = { 0, };

	for (int i = 0; i < 5; i++) {
		scanf("%s", ch[i]);
	}
	
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 5; j++) {
			if (ch[j][i] != 0) {
				printf("%c", ch[j][i]);
			}
		}
	}

}