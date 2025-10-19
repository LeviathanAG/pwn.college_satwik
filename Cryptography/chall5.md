# challenge 5


## flag : 


## solve

- Lets look at the part of the code where enc is happening : 
```
suspect1 = pow(1234*p + q, 4321, n)
suspect2 = pow(p**2 + 1234, q, n) 
suspect3 = pow(bytes_to_long(flag), e, n)
```

on rewriting we get : 

`suspect 1 = (1234*p + q ) ** 4321 % n`

`suspect 2 = (p**2 + 1234)**q % n`

`p and q are random primes with 1024 bits`.

I couldnt give enough time to this challenge since i was hardstuck on chall 4. will try again in a bit

