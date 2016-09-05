'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > Funny String
'''

test_cases = int(input())
for test_case in range(test_cases):
    string = input()
    reversed_string = string[::-1]
    funny = True

    for i in range(1, len(string)):
        if abs(ord(string[i]) - ord(string[i-1])) != abs(ord(reversed_string[i]) - ord(reversed_string[i-1])):
            print("Not Funny")
            break
    else:
        print("Funny")
