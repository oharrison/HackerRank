'''
Author: Onel Harrison

HackerRank: Algorithms > Implementation > Jumping on the Clouds
'''

if __name__ == '__main__':
    number_of_clouds = int(input())
    clouds = [cloud for cloud in input().strip().split(' ')]
    
    position = 0
    jump_count = 0
    while position < number_of_clouds - 1:
        if position == number_of_clouds - 2 or clouds[position + 2] == '1':
            position += 1
        else:
            position += 2
        jump_count += 1
    print(jump_count)
