/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Plus Minus
 */

#include <stdio.h>

int main()
{
    int input_size = 0;
    scanf("%d", &input_size);

    int i = 0, num = 0, negative_count = 0, positive_count = 0, zero_count = 0;
    for(i; i < input_size; i++) {
        scanf("%d", &num);
        if (num < 0) {
            negative_count += 1;
        } else if (num == 0) {
            zero_count += 1;
        } else {
            positive_count += 1;
        }
    }

    printf("%.3f\n", ((float)positive_count) / input_size);
    printf("%.3f\n", ((float)negative_count) / input_size);
    printf("%.3f\n", ((float)zero_count) / input_size);

    return 0;
}
