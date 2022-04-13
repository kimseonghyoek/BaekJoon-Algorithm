testCase = int(input())
point = 0
sum = 0

for i in range(0, testCase) :
    lst = list(input())
    for j in range(0, len(lst)) :
        if lst[j] == 'O' :
            point = point + 1
            sum += point
        else :
            point = 0
    print(sum)
    point = 0
    sum = 0