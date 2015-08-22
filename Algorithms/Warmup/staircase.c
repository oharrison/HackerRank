/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Staircase
 */

#include <stdio.h>

int main() {
    int staircase_height = 0;
    scanf("%d",&staircase_height);

    int i = 0, j = 0, k = 0;
    for (i; i < staircase_height; i++) {
        for (j = i; j < staircase_height - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
