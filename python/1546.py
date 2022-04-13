case = int(input())
score = list(map(int, input().split()))
maxScore = max(score)

lst = []

for i in range (0, case) :
    lst.append(score[i] / maxScore * 100)

print(sum(lst)/case)