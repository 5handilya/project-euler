# DNW memory constraints, need to use segmented sieve
n = 600851475143

#sieve of erastothenes
print("creating dictionary")
is_prime = {i : True for i in range (0, n+1)}
is_prime[1] = False
is_prime[0] = False
x = 2
print("calculating primes")
while (x * x < n):
    print(x)
    if is_prime[x]:
        y = x * x
        while (y <= n):
            print(y)
            is_prime[y] = False
            y += x
    x += 1
    if (x == n//2):
        print("50%")
    elif ( x== n//4):
        print("25%")

lpf = 3
for p in is_prime:
    if is_prime[p]:
        lpf = p

