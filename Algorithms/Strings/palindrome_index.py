'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > Palindrome Index
'''

def is_palindrome(string):
    return string == string[::-1]

def palindrome_index(string):
    if is_palindrome(string):
        return -1

    front_index = 0
    rear_index = len(string) - 1

    while front_index <= rear_index:
        if string[front_index] != string[rear_index]:
            if is_palindrome(string[:front_index] + string[front_index + 1:]):
                return front_index
            elif is_palindrome(string[:rear_index] + string[rear_index + 1:]):
                return rear_index

        front_index += 1
        rear_index -= 1
    return -1

if __name__ == '__main__':
    test_cases = int(input())
    for test_case in range(test_cases):
        string = input()
        print(palindrome_index(string))
