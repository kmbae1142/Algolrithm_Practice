#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pow2(int n1) {

    int result;
    result = n1 * n1;
    return result;

}

//double distance(int x1, int y1, int x2, int y2) {
//
//    double dist = sqrt(pow2(x2 - x1) + pow2(y2 - y1));
//    return dist;
//}

int main() {

    int x1, x2, y1, y2;
    int r1, r2;
    int num;
    

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {

        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        int d_2 = pow2(x2 - x1) + pow2(y2 - y1);
        int r_sub_2 = pow2(abs(r1 - r2));
        int r_sum_2 = pow2(r1 + r2);

        if (d_2 == 0 && r1 == r2)
            printf("-1\n");
        else if (d_2 == r_sum_2 || d_2 == r_sub_2)
            printf("1\n");
        else if (d_2 < r_sum_2 && d_2 > r_sub_2)
            printf("2\n");
        else
            printf("0\n");
        
    }

}