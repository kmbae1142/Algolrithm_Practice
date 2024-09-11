#include <stdio.h>

int main() {

	int T;
	int a, b;
	int result = 1; 
	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &a, &b);
		result = 1;
        
		for (int i = 1; i <= b; ++i) { 
			result *= a;
			result %= 10;
		}
        
		if (result != 0)
			printf("%d\n", result);
		else {
			printf("10\n");
		}
        
	}

}