# we know that x ^ y = z and we get back x when we do z ^ y
# we already know what y is. it is the key

from itertools import cycle


key = b'djpakoda'
with open("ct", "rb") as ct_file:
    ct = ct_file.read()
    print(bytes(x^y for x, y in zip(ct, cycle(key)))) 
    print(len(ct))

    # thus we get the flag like this as our output