# chall 1

this is the first crypto chall in the stp-1.

we are given chall.py, lets analyze and write some comments : 

```py
from itertools import cycle

flag = b"flaggg{????????????????????????????????????????}" 
# len(flag) = 48
key  = b'djpakoda' # key used to cycle thru
# len(key) = 8
ct = bytes(x ^ y for x, y in zip(flag, cycle(key)))

with open("ct", "wb") as ct_file:
    ct_file.write(ct)  # the ciphertext is written to a file named "ct"

```

- lets read on what the cycle function does under the hood : 

https://docs.python.org/3/library/itertools.html


the `cycle` method keeps cycling in the loop basically a for-loop that acts like a circular linked list if you know what i mean.


### Solution to decrypt the flag
`since x^y=z. if we know z and y we can get back x by doing z^y=x`

this is the implemented python script :

```py
# we know that x ^ y = z and we get back x when we do z ^ y
# we already know what y is. it is the key

from itertools import cycle


key = b'djpakoda'
with open("ct", "rb") as ct_file:
    ct = ct_file.read()
    print(bytes(x^y for x, y in zip(ct, cycle(key)))) 
    print(len(ct))

    # thus we get the flag like this as our output
```


OUTPUT :

```
C:\Cryptonite\pwn.college_satwik\Cryptography\chall1>python sol.py
b'flaggg{w0w_g0od_j0b_V3ry_gr34t_amazing_AW35OMEE}'
48

```

The flag : `flaggg{w0w_g0od_j0b_V3ry_gr34t_amazing_AW35OMEE}`


- So basically this is an XOR cipher where we xor our message with a known key by cycling thru the letters. it can be easily broken in real world scenarios if someone has our key and the final message.


