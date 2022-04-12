lst = []
for i in range(0, 10) :
    number = int(input())
    lst.append(number%42)
lst = set(lst)
print(len(lst))