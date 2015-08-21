/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Simple Array Sum
 */

#include <stdio.h>

int main()
{
    int input_size = 0;
    scanf("%d", &input_size);

    int i = 0, num = 0, total = 0;
    for (i; i < input_size; i++) {
        scanf("%d", &num);
        total += num;
    }
    
    printf("%d\n", total);
    return 0;
}
