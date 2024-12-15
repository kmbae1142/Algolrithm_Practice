#include <stdio.h>

typedef struct {
	int weight;
	int height;
	int rank;
}Person;

int main() {

	int N, swap = 1;
	Person p[50];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &p[i].weight, &p[i].height);
		p[i].rank = 1;
	}

	for (int i = 0; i < N; i++) {
	    for (int j = 0; j < N; j++) {
		    if (p[i].weight < p[j].weight && p[i].height < p[j].height) {
			    p[i].rank++;
		    }
	    }
    }
	
	for (int i = 0; i < N; i++) {
		printf("%d ", p[i].rank);
	}
    
    return 0;
}