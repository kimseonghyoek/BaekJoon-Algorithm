numbers = list(range(1, 10001))
delete_list = []

for i in numbers :
    for j in str(i) :
        i += int(j)
    if i <= 10000 :
        delete_list.append(i)

for delete_list in set(delete_list) :
    numbers.remove(delete_list)
for self_num in numbers :
    print(self_num)