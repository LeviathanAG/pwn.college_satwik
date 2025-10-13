# chall 2

lets first look at our generator script and understand whats going on for now :

```py 
from out import enc, R
from math import prod

flag = ''
a = [0] # a is a list with first element 0
for i in range(355):
    b = [_+1 for _ in a] # iterates thru a and adds 1 to each element
    c = [_+1 for _ in b] # iterates thru b and adds 1 to each element
    a += b + c # a is updated to be a + b + c
    # so a is becomes insanely big. 3^n size after n iterations

    if i%5 == 0: # every 5th iteration
        flag += chr(enc[i//5] ^ prod([a[_] for _ in R[i//5]]))
        # enc[i//5] is xored with the product of elements in a at indices specified in R[i//5]
        # the result is converted to a character and appended to flag
        print(flag)


# The encryption uses XOR again
```

to write a decryption lets understand whats happening here :

`flag += chr(enc[i//5] ^ prod([a[_] for _ in R[i//5]]))`

- when we run the script we see : 
```
C
CS
CSC
CSCT
```

so we are already getting the flag but its extremely slow since its brute force.

instead we will do what we do in dp. lets memoize large values in cache to compute large numbers and also compute each value whenever and whever required.

this is my solution script : 
```python
from math import prod
from out import enc, R
from functools import lru_cache

flag = ''

@lru_cache(maxsize=None)
def len_at_iteration(iteration):
    
    if iteration < 0:
        return 1  # a has length 1
    return 3 * len_at_iteration(iteration - 1)

@lru_cache(maxsize=None)
def get_value_at_iteration(iteration, index):
    # before any updates a = [0]
    if iteration < 0:
        return 0 if index == 0 else None
    #  update i, the list a has structure - aprev + b + c
    # where b = x+1 for x in aprev and c = x+2 for x in aprev
    prev_len = len_at_iteration(iteration - 1)  
    if index < prev_len:
        #  in the original aprev part
        return get_value_at_iteration(iteration - 1, index)
    elif index < 2 * prev_len:
        #  in the b part aprev + 1
        return get_value_at_iteration(iteration - 1, index - prev_len) + 1
    else:
        #  in the c part aprev + 2
        return get_value_at_iteration(iteration - 1, index - 2 * prev_len) + 2
for idx in range(len(enc)):
    iteration = idx * 5  # multiples of 5 we need to use for each iter
    indices = R[idx]
    #  update at each iteration 
    values = [get_value_at_iteration(iteration, i) for i in indices]
    product = prod(values)
    char = chr(enc[idx] ^ product)
    flag += char
    print(flag)




```


for this we get output almost instantly :

```
C
CS
CSC
CSCT
CSCTF
CSCTF{
CSCTF{2
CSCTF{24
CSCTF{244
CSCTF{2441
CSCTF{2441d
CSCTF{2441d2
CSCTF{2441d2f
CSCTF{2441d2f2
CSCTF{2441d2f22
CSCTF{2441d2f22f
CSCTF{2441d2f22fa
CSCTF{2441d2f22fa1
CSCTF{2441d2f22fa1d
CSCTF{2441d2f22fa1d5
CSCTF{2441d2f22fa1d5b
CSCTF{2441d2f22fa1d5b9
CSCTF{2441d2f22fa1d5b9f
CSCTF{2441d2f22fa1d5b9fc
CSCTF{2441d2f22fa1d5b9fc0
CSCTF{2441d2f22fa1d5b9fc0a
CSCTF{2441d2f22fa1d5b9fc0a8
CSCTF{2441d2f22fa1d5b9fc0a85
CSCTF{2441d2f22fa1d5b9fc0a850
CSCTF{2441d2f22fa1d5b9fc0a850d
CSCTF{2441d2f22fa1d5b9fc0a850dc
CSCTF{2441d2f22fa1d5b9fc0a850dcf
CSCTF{2441d2f22fa1d5b9fc0a850dcfb
CSCTF{2441d2f22fa1d5b9fc0a850dcfbb
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbc
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbcc
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf6
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf60
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608c
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608ca
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608caf
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafb
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc2
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1b
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1be
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1bea
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaa
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0a
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac3
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac32
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328f
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d2
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d21
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d218
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d2187
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d21878
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d218781
CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d218781}
```


# The flag :
`CSCTF{2441d2f22fa1d5b9fc0a850dcfbbccf608cafbc22a1beaae0ac328ff6d218781}`