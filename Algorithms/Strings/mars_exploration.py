'''
Author: Onel Harrison

HackerRank: Algorithms > Strings > Mars Exploration
'''
S = input().strip()
sos = 'SOS'
count = 0
i = 0
while i < len(S):
    if S[i] != sos[i % 3]:
        count += 1
    i += 1
print(count)
