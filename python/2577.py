a = int(input())
b = int(input())
c = int(input())

sum = a * b * c

sumList = list(map(int, str(sum)))

for i in range(0, 10) :
    print(sumList.count(i))