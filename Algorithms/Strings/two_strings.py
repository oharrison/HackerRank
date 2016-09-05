'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > Two Strings
'''

if __name__ == '__main__':
    number_of_pairs = int(input())
    for pair in range(number_of_pairs):
        str1_chars = set(input())
        str2_chars = set(input())

        if str1_chars.intersection(str2_chars):
            print("YES")
        else:
            print("NO")
