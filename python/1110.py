input = int(input())
num = input
i = 0
while True:
    temp1 = num // 10
    temp2 = num % 10
    sum = temp1 + temp2 % 10
    t = sum % 10
    num = int(str(temp2) + str(t))
    i = i + 1
    if(num == input) :
        break
print(i)