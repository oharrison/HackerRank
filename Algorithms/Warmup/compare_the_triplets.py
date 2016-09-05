'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > Compare the Triplets
'''

if __name__ == '__main__':
    a_scores = [int(score) for score in input().strip().split(' ')]
    b_scores = [int(score) for score in input().strip().split(' ')]

    a_comparison_score = 0
    b_comparison_score = 0

    index = 0
    while index < len(a_scores):
        if a_scores[index] < b_scores[index]:
            b_comparison_score += 1
        elif a_scores[index] > b_scores[index]:
            a_comparison_score += 1

        index += 1

    print(a_comparison_score, b_comparison_score)
