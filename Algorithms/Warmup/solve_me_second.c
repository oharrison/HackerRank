/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Solve me second
 * Purpose: get two numbers, sum the numbers, and output the result, repeatedly
 */

#include <stdio.h>

int sum(int, int);

int main()
{
    // get the number of test cases
    int test_cases = 0;
    scanf("%d", &test_cases);

    int i = 0, num1 = 0, num2 = 0, total = 0;
    for (i; i < test_cases; i++) {
        // get two numbers
        scanf("%d %d", &num1, &num2);

        // sum the two numbers
        total = sum(num1, num2);

        // output the result
        printf("%d\n", total);
    }
    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
