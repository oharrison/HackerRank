/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > A Very Big Sum
 */

#include <stdio.h>

int main()
{
    long long int big_sum = 0, num;
    int input_size = 0;
    scanf("%d", &input_size);

    int i = 0;
    for(i; i < input_size; i++) {
        scanf("%lld", &num);
        big_sum += num;
    }

    printf("%lld", big_sum);
    return 0;
}
