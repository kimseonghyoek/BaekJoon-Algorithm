x, y, w, h = map(int, input().split())

temp1 = w - x
temp2 = h - y

print(min(x, y, temp1, temp2))