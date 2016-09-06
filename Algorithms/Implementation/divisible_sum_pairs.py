'''
Author: Onel Harrison

HackerRank: Algorithms > Implementation > Divisible Sum Pairs
'''

if __name__ == '__main__':
    n, k = [int(num) for num in input().strip().split(' ')]
    numbers = [int(num) for num in input().strip().split(' ')]

    pair_count = 0
    i = 0
    while i < len(numbers):
        j = i + 1
        while j < len(numbers):
            if (numbers[i] + numbers[j]) % k == 0:
                pair_count += 1
            j += 1
        i += 1

    print(pair_count)
