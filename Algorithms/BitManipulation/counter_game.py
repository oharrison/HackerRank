'''
Author: Onel Harrison

HackerRank: Algorithms > Bit Manipulation > Counter Game
'''
def ispower_of_two(num):
    if num == 1 or num == 2:
        return True
    else:
        power = 1
        while power < num:
            power <<= 1

        if power == num:
            return True
        else:
            return False

def largest_power_under(num):
    power = 1
    while power < num:
        power <<= 1
    return power >> 1


if __name__ == '__main__':
    test_cases = int(input())

    players = ['Louise', 'Richard']
    for test_case in range(test_cases):
        counter = int(input())
        turn = 0
        while counter != 1:
            if ispower_of_two(counter):
                counter -= counter >> 1
            else:
                counter -= largest_power_under(counter)

            if counter == 1:
                break
            else:
                turn += 1

        print(players[turn % len(players)])
