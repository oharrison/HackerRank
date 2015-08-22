/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Diagonal Difference
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix_size = 0;
    scanf("%d", &matrix_size);

    int row = 0, col = 0, num = 0;
    int left_diagonal_sum = 0, right_diagonal_sum = 0;
    int col_tracker = matrix_size - 1;

    for (row; row < matrix_size; row++){
        for(col = 0; col < matrix_size; col++) {
            scanf("%d", &num);
            if (row == col) {
                left_diagonal_sum += num;
            }
            if (col == col_tracker) {
                right_diagonal_sum += num;
                col_tracker--;
            }
        }
    }

    printf("%d\n", abs(left_diagonal_sum - right_diagonal_sum));
    return 0;
}
