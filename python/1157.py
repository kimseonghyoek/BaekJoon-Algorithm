word = input()
word_lst = list(set(word))
count_word = []

for i in word_lst:
    count = word.count(i)
    count_word.append(count)

if count_word.count(max(count_word)) >= 2:
    print("?")
else :
    print(word_lst[(count_word.index(max(count_word)))].upper())