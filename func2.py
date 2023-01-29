def isPrime(num, ans = 2):
    if num < ans*ans:
        return True
    if num % ans == 0:
        return False
    return isPrime(num, ans + 1)

for t in range(1, 10000000):
    if t == 1:
        ('NO')
    else:
        (('YES' if isPrime(t) else 'NO'))
