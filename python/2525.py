import math

h, m = map(int, input().split())
t = int(input())
h += t / 60
m += t % 60
if m >= 60 :
    h += 1
    m = m % 60
if h >= 24 :
    h = h % 24

print(math.trunc(h) ,m)