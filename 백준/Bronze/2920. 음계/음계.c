#include <stdio.h>
#include <string.h>

int main() {

    char note[16];
    char ascend[16] = "1 2 3 4 5 6 7 8";
    char descend[16] = "8 7 6 5 4 3 2 1";

    fgets(note, sizeof(note), stdin);

    if (strcmp(note, ascend) == 0)
        printf("ascending\n");
    else if (strcmp(note, descend) == 0)
        printf("descending\n");
    else
        printf("mixed");

}