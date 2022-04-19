word = input()
check = [-1] * 26

for i in range(len(word)):
    if check[ord(word[i]) - 97] != -1:
        continue
    else:
        check[ord(word[i]) - 97] = i

for i in range(26):
    print(check[i], end=' ')