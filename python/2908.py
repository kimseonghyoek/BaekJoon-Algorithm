num, num2 = input().split()

num = int(num[::-1])
num2 = int(num2[::-1])

if num > num2 :
    print(num)
else :
    print(num2)