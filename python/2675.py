testNum = int(input())
lst = []
for i in range(0, testNum) :
    num = input().split()
    for j in num[1] :
        lst.append(j)
        for x in range(0, int(num[0])) :
            print(j, end='')

    print()