
# Chall 3



## Flag:
`idek{charles_and_the_chocolate_factory!!!}`


lets look at the chall.py and write some comments first : 

```
from Crypto.Util.number import *

def generator(m:int) -> int:
    p = 396430433566694153228963024068183195900644000015629930982017434859080008533624204265038366113052353086248115602503012179807206251960510130759852727353283868788493357310003786807
    return (pow(13, m, p) + pow(37, m, p)) % p
# generator function takes an integer m and returns (13^m + 37^m) mod p
# why is there p also in the pow method? because calculating large powers directly can result in extremely large numbers that are impractical to handle. By using modular exponentiation, we can keep the numbers manageable and avoid overflow issues.
# so after we add these two values we mod p again to ensure the final result is within the range of 0 to p-1.



flag = b"REDACTED" 
secret = bytes_to_long(flag) # convert the flag to a long integer
flag_obscured = generator(secret) # pass this long integer to the generator function 
outputs = []

for i in range(secret):
    outputs.append(generator(i))  # store all outputs of generator from 0 to secret-1

outputs.append(flag_obscured) # append the obscured flag at the end

remain = outputs[-2:] # get the last two elements of outputs
print(remain)

remain = [88952575866827947965983024351948428571644045481852955585307229868427303211803239917835211249629755846575548754617810635567272526061976590304647326424871380247801316189016325247, 67077340815509559968966395605991498895734870241569147039932716484176494534953008553337442440573747593113271897771706973941604973691227887232994456813209749283078720189994152242]


# # we can get the flag by bruteforcing the value of secret from 0 to a reasonable limit and checking when generator(secret) matches the second last output in remain
# g_secret_minus_1 = remain[0]
# g_secret = remain[1]
# secret = 0
# while True:
#     if generator(secret) == g_secret:
#         break
#     secret += 1
#     if secret % 1000 == 0:
#         print(f"Trying: {secret}")
# print(f"Secret found: {secret}")
# flag = long_to_bytes(secret)

# brute force takes too long
```


## Solution


`13^(secret - 1)` and `37^(secret - 1)`.

### Step 1 — Understanding the Equations

Let:

```
x = 13^(secret - 1)  mod p  
y = 37^(secret - 1)  mod p
```

We are given two linear combinations:

```
remain[0] = x + 24y  (mod p)
remain[1] = 13x + 37y  (mod p)
```

That’s a simple 2×2 system of equations:

```
r0 = x + 24y
r1 = 13x + 37y
```

So i solved for `x` and `y` using modular arithmetic.

### Step 2 — Solving the System

Subtract `13 * r0` from `r1`:

```
r1 - 13*r0 = (13x + 37y) - 13(x + 24y)
r1 - 13*r0 = (37 - 312)y = -275y
```

That gave me:

```
y = (r1 - 13*r0) * inverse(-275, p) mod p
```

Since `-275 ≡ 24 mod p` (they’re congruent modulo p), we can simply compute:

```
y = (r1 - 13*r0) * inverse(24, p) mod p
x = (r0 - y) mod p
```

This gives us the actual values of `13^(secret-1)` and `37^(secret-1)` modulo `p`.

### Step 3 — Recovering the Secret

Now that I had `x = 13^(secret-1)`, I used a discrete log to recover the exponent `secret - 1`:

```
k = discrete_log(p, x, 13)
secret = k + 1
```

Finally, I had the complete script to get the flag

```python
from Crypto.Util.number import long_to_bytes
from sympy.ntheory import discrete_log
p = 396430433566694153228963024068183195900644000015629930982017434859080008533624204265038366113052353086248115602503012179807206251960510130759852727353283868788493357310003786807
r0 = 88952575866827947965983024351948428571644045481852955585307229868427303211803239917835211249629755846575548754617810635567272526061976590304647326424871380247801316189016325247
r1 = 67077340815509559968966395605991498895734870241569147039932716484176494534953008553337442440573747593113271897771706973941604973691227887232994456813209749283078720189994152242
inv24 = pow(24, -1, p)
y = ((r1 - 13 * r0) * inv24) % p
x = (r0 - y) % p

print(f" {x}")
print("\n")
print(f" {y}")
print("\n")
print("Discrete lg ")
exp = discrete_log(p, x, 13) 
secret = exp + 1
flag = long_to_bytes(secret)

print(f"{flag.decode()}")

```


```bash
C:\Cryptonite\pwn.college_satwik>python -u "c:\Cryptonite\pwn.college_satwik\Cryptography\chal3\sol.py"
 283001744514890495576378030084572880056703783863652482852274654265806408379349362782996277867216599854433961351900599840013013948260270713786567965295274422457583758108068498465
 202381264918631605618568018335558744415584261633830403715050010461700903366078081399877299495465509078389703005220222975361464829762216007277932088482880826578710915390951613589
Discrete ln: 
idek{charles_and_the_chocolate_factory!!!}

C:\Cryptonite\pwn.college_satwik>python -u "c:\Cryptonite\pwn.college_satwik\Cryptography\chal3\sol.py"
 283001744514890495576378030084572880056703783863652482852274654265806408379349362782996277867216599854433961351900599840013013948260270713786567965295274422457583758108068498465


 202381264918631605618568018335558744415584261633830403715050010461700903366078081399877299495465509078389703005220222975361464829762216007277932088482880826578710915390951613589


Discrete lg
idek{charles_and_the_chocolate_factory!!!}

C:\Cryptonite\pwn.college_satwik>
```