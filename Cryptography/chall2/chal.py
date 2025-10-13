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


# The encryption uses XOR, which is reversible. 