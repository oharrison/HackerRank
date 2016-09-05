'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > String Construction
'''

number_of_strings = int(input().strip())
for k in range(number_of_strings):
    unique_chars = set(input().strip())
    print(len(unique_chars))
