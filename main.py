from string import ascii_uppercase as s
d = {}
[]
for i in range(10):
    d[i] = str(i)
for i in range(10, 36):
    d[i] = s[i - 10]

print(d)
def func(n, n1):
    if n < n1:
        return d[n % n1]
    return d[n % n1] + func((n) // n1, n1)

j = list(map(int, input().split()))
if j[0] < 0:
    print('-' + func(-j[0], j[1])[::-1])
else:
    print(func(j[0], j[1])[::-1])
