n1 = int(input())
n2 = int(input())

n3 = n1 * (n2 % 10)
n4 = n1 * (n2 / 10 % 10)
n5 = n1 * (n2 / 100)

print(n3)
print(n4)
print(n5)
print(n1*n2)