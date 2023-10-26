import math

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

def findlcm(arr, n):
    ans = arr[0]
    for i in range(1, n):
        ans = (arr[i] * ans) // gcd(arr[i], ans)
    return ans

def is_prime(n):
    if n == 2:
        return True
    if n % 2 == 0 or n < 2:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

n = int(input())
v = list(map(int, input().split()))
q = min(v)
v.remove(q)
res = None
max_iterations = 10000  # Set a limit on the number of iterations

for _ in range(max_iterations):
    res = findlcm(v, n - 1) + q
    if is_prime(res):
        break
    else:
        v.append(res)
        n += 1
else:
    res = "None"  # If no prime is found after a certain number of iterations

print(res)
