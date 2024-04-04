s = input()
a = 0
c = 0
l ='A'
for i in s:
    if i == l:
        a += 1
        c = max(c, a)
    else:
        a = 0
        l = i
print(c)
