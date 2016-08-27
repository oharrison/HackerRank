'''
Author: Onel Harrison

HackerRank: Python > Strings > Find a String
'''

def substr_count(string, sub_str):
    count = 0
    last_index = len(string) - len(sub_str)
    for index in range(last_index + 1):
        if string[index : index + len(sub_str)] == sub_str:
            count += 1
    return count

if __name__ == '__main__':
    original_str = input()
    sub_str = input()

    print(substr_count(original_str, sub_str))
