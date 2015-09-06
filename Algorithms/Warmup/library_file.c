/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Library Fine
 */

#include <stdio.h>

int main()
{
    int expected_return_day = 0, expected_return_month = 0, expected_return_year = 0;
    int actual_return_day = 0, actual_return_month = 0, actual_return_year = 0;
    scanf("%d %d %d", &actual_return_day, &actual_return_month, &actual_return_year);
    scanf("%d %d %d", &expected_return_day, &expected_return_month, &expected_return_year);


    int fine = 0;
    if (actual_return_year < expected_return_year) {
        fine = 0;
    } else if (actual_return_year == expected_return_year) {
        if (actual_return_month <= expected_return_month) {
            if (actual_return_month == expected_return_month) {
                if (actual_return_day <= expected_return_day) {
                    fine = 0;
                } else {
                    fine = 15 * (actual_return_day - expected_return_day);
                }
            } else {
                fine = 0;
            }
        } else {
            fine = 500 * (actual_return_month - expected_return_month);
        }
    } else {
        fine = 10000;
    }
    printf("%d", fine);
    return 0;
}
