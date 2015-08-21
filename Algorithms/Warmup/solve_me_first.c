/**
 * Author: Onel Harrison
 * HackerRank: Algorithms > Warmup > Solve me first
 * Purpose: get two numbers, sum the numbers, and output the result
 */

#include <stdio.h>

int sum(int, int);

int main()
{
    // get two numbers
    int num1 = 0, num2 = 0;
    scanf("%d %d", &num1, &num2);

    // sum the two numbers
    int total = 0;
    total = sum(num1, num2);

    // output the result
    printf("%d", total);

    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
