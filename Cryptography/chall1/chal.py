from itertools import cycle

flag = b"flaggg{????????????????????????????????????????}" # flag was run trhough this script
# len(flag) = 48
key  = b'djpakoda' # key used to cycle thru
# len(key) = 8
ct = bytes(x ^ y for x, y in zip(flag, cycle(key)))

with open("ct", "wb") as ct_file:
    ct_file.write(ct)  # the ciphertext is written to a file named "ct"


print(bytes(x^y for x, y in zip(ct, cycle(key))))  # this will print the original flag