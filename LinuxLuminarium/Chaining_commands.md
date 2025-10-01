# Chaining Commands

This module is about chaining commands.


- [Chaining Commands](#chaining-commands)
  - [Chaining with Semicolons](#chaining-with-semicolons)
    - [Solve](#solve)
  - [Building on Success](#building-on-success)
    - [Solve](#solve-1)
    - [Handling Failure](#handling-failure)
    - [Solve](#solve-2)
  - [Your First Shell Script](#your-first-shell-script)
    - [Solve](#solve-3)
  - [Redirecting Script Output](#redirecting-script-output)
    - [Solve](#solve-4)
  - [Executable Shell Scripts](#executable-shell-scripts)
    - [Solve](#solve-5)
  - [Understanding Shebangs](#understanding-shebangs)
    - [Solve](#solve-6)
  - [Scripting with Arguments](#scripting-with-arguments)
    - [Solve](#solve-7)
  - [Scripting with Conditionals](#scripting-with-conditionals)
    - [Solve](#solve-8)
  - [Scripting with Default Cases](#scripting-with-default-cases)
    - [Solve](#solve-9)
  - [Scripting with Multiple Conditions](#scripting-with-multiple-conditions)
    - [Solve](#solve-10)
  - [Reading Shell Scripts](#reading-shell-scripts)
    - [Solve](#solve-11)
- [END](#end)



## Chaining with Semicolons

### Solve 

The flag : `pwn.college{k485ipG32ZWgWX2q-jT1KjiUrJ7.dVTN4QDLzQjN0czW}`.

In this challenge, we should chain the commands `/challenge/pwn` and `/challenge/college` in order to get the flag.

> [!NOTE]
> We can use `;` to chain commands in Linux.

I run **`/challenge/pwn; /challenge/college`** to get the flag.

```
hacker@chaining~chaining-with-semicolons:~$ /challenge/pwn ; /challenge/college
Yes! You chained /challenge/pwn and /challenge/college! Here is your flag:
pwn.college{k485ipG32ZWgWX2q-jT1KjiUrJ7.dVTN4QDLzQjN0czW}
hacker@chaining~chaining-with-semicolons:~$
```

## Building on Success 
### Solve

Flag: `pwn.college{Y2OUcgqDO1FcDay6B9VmwFJt-a4.QXyQzM4EDLzQjN0czW}`

used `&&` to chain command 1 and command 2 since we know cmd 1 will succeed we can do this instead of `;` also we can use `&&`for conditional command chaining.

```
hacker@chaining~building-on-success:~$ /challenge/first-success && /challenge/second
Nice chaining! Flag: pwn.college{Y2OUcgqDO1FcDay6B9VmwFJt-a4.QXyQzM4EDLzQjN0czW}
hacker@chaining~building-on-success:~$
```


### Handling Failure 



### Solve 
Flag: `pwn.college{svzNp_nHhJTtVR7gesixFzMFnYu.QXzQzM4EDLzQjN0czW}`

in this we learn about `||`. This means: "Run command1, and IF it fails, then run command2."

to solve i did this :
```
hacker@chaining~handling-failure:~$ /challenge/first-failure || /challenge/second
Nice chaining! Flag: pwn.college{svzNp_nHhJTtVR7gesixFzMFnYu.QXzQzM4EDLzQjN0czW}
hacker@chaining~handling-failure:~$
```

## Your First Shell Script

### Solve 

Flag : 
`pwn.college{oz0sHJ-dUbH3eNEGG5Dij-GyMiF.dFzN4QDLzQjN0czW}`

In this challenge, we should add our commands to a bash file called `x.sh` and run it in order to get our flag.

I use the command line text editor [nano](https://www.nano-editor.org/) to edit `x.sh` 


Finally I run `bash x.sh` to run the file and get the flag.


## Redirecting Script Output

### Solve 

THe flag : `pwn.college{whODnWXdlKgyOfdUPkOIDoyz2Y4.dhTM5QDLzQjN0czW}`

Similar to the previous challenge, we need to create a bash file and pipe the output of the script into `/challenge/solve`

I create a bash file called `x.sh` like the previous challenge using [nano](https://www.nano-editor.org/).

I run **`bash x.sh | /challenge/solve`** to pipe the output of the script into `/challenge/solve` to get the flag.

```
Connected!
hacker@chaining~redirecting-script-output:~$ nano x.sh
hacker@chaining~redirecting-script-output:~$ bash x.sh | /challenge/solve
Correct! Here is your flag:
pwn.college{whODnWXdlKgyOfdUPkOIDoyz2Y4.dhTM5QDLzQjN0czW}
hacker@chaining~redirecting-script-output:~$
```




## Executable Shell Scripts

### Solve 

The flag : `pwn.college{cGaIzWWD7tdhJ_ZEo8RQpzrkDkC.dRzNyUDLzQjN0czW}`

In this challenge, we are supposed to create a bash script that calls `/challenge/solve` and run it without explicitly invoking bash.

> [!NOTE]
> We can directly run a bash file without using the `bash` command by making the file executable

I create a bash file called `x.sh` like the previous challenge using [nano](https://www.nano-editor.org/).

Using the knowledge I gained in the previous challenges, I utilise the `chmod` command to make the file executable - **`chmod u+x x.sh`**

Finally I run **`./x.sh`** to get the flag.

```
hacker@chaining~executable-shell-scripts:~$ nano x.sh
hacker@chaining~executable-shell-scripts:~$ chmod u+x x.sh
hacker@chaining~executable-shell-scripts:~$ ./x.sh
Congratulations on your shell script execution! Your flag:
pwn.college{cGaIzWWD7tdhJ_ZEo8RQpzrkDkC.dRzNyUDLzQjN0czW}
hacker@chaining~executable-shell-scripts:~$
```

## Understanding Shebangs

### Solve

Flag: `pwn.college{giCZbYSqIV_6XOzn-XHk1_ru1jD.QX5MzM4EDLzQjN0czW}`

used nano solve.sh to make a file in /home/hacker and then wrote this code :

```
#!/bin/bash
echo "hack the planet"
```
then changed the perms and ran the verify script.

```
hacker@chaining~understanding-shebangs:~$ chmod u+x solve.sh
hacker@chaining~understanding-shebangs:~$ /challenge/run
Testing your script...
Perfect! Your flag:
Flag: pwn.college{giCZbYSqIV_6XOzn-XHk1_ru1jD.QX5MzM4EDLzQjN0czW}
```



## Scripting with Arguments

### Solve



Flag: `pwn.college{kMppdIvyym7bfZZHDkGSEkXiQR7.QX1MzM4EDLzQjN0czW}`

we can solve by taking args and then printing them in reverse order

```
hacker@chaining~scripting-with-arguments:~$ nano solve.sh
hacker@chaining~scripting-with-arguments:~$ ./solve.sh hi bye
bye
hi
hacker@chaining~scripting-with-arguments:~$ /challenge/run
Not quite right!
Expected: college_yLE87CAVlqM pwn_a53dCVfwWuo
Got: college_yLE87CAVlqM
pwn_a53dCVfwWuo
hacker@chaining~scripting-with-arguments:~$ nano solve.sh
hacker@chaining~scripting-with-arguments:~$ ./solve.sh hi bye
bye hi
hacker@chaining~scripting-with-arguments:~$ /challenge/run
Correct! Your script properly reversed the arguments.
Here's your flag:
pwn.college{kMppdIvyym7bfZZHDkGSEkXiQR7.QX1MzM4EDLzQjN0czW}
hacker@chaining~scripting-with-arguments:~$
```

## Scripting with Conditionals

### Solve

Flag: `pwn.college{sSyVzpl3fQG-_zc2DibKNlf4nk9.QX2MzM4EDLzQjN0czW}`

write a conditional statement in solve.sh and run the verify script to get the flag.

```
#!/bin/bash

if [ "$1" == "pwn" ]
then
    echo "college"
fi
```

```
hacker@chaining~scripting-with-conditionals:~$ nano solve.sh
hacker@chaining~scripting-with-conditionals:~$ ./solve.sh pwn
college
hacker@chaining~scripting-with-conditionals:~$ /challenge/run
Correct! Your script properly handles all the conditions.
Here's your flag:
pwn.college{sSyVzpl3fQG-_zc2DibKNlf4nk9.QX2MzM4EDLzQjN0czW}
hacker@chaining~scripting-with-conditionals:~$
```

## Scripting with Default Cases



### Solve

Flag: `pwn.college{IsUnERrcnAQhI5RJ4tECyGAoKPL.QX3MzM4EDLzQjN0czW}`

write the solve.sh according to the requirements and run the verify script

```
#!/bin/bash

if [ "$1" == "pwn" ]
then
    echo "college"
else
    echo "nope"
fi

```

```
hacker@chaining~scripting-with-default-cases:~$ nano solve.sh
hacker@chaining~scripting-with-default-cases:~$ /challenge/run
Correct! Your script properly handles the if/else conditions.
Here's your flag:
pwn.college{IsUnERrcnAQhI5RJ4tECyGAoKPL.QX3MzM4EDLzQjN0czW}
hacker@chaining~scripting-with-default-cases:~$
```

## Scripting with Multiple Conditions



### Solve

same as previous chall with  elif statements.

Flag: `pwn.college{cbND4ZjKRrAzvAL4_7hEu0T67NP.QX4MzM4EDLzQjN0czW}`

```
  GNU nano 8.4                                            solve.sh                                                      #!/bin/bash

if [ "$1" == "hack" ]
then
    echo "the planet"
elif [ "$1" == "pwn" ]
then
    echo "college"
elif [ "$1" == "learn" ]
then
    echo "linux"
else
    echo "unknown"
fi
```

```
hacker@chaining~scripting-with-multiple-conditions:~$ nano solve.sh
hacker@chaining~scripting-with-multiple-conditions:~$ /challenge/run
Correct! Your script properly handles all the conditions with elif.
Here's your flag:
pwn.college{cbND4ZjKRrAzvAL4_7hEu0T67NP.QX4MzM4EDLzQjN0czW}
hacker@chaining~scripting-with-multiple-conditions:~$
```

## Reading Shell Scripts

### Solve



Flag: `pwn.college{ogeZMJ4HKWnEJuYCB0ZMj80wJqH.QXyADO4EDLzQjN0czW}`

Since the password is hardcoded we can cat `/challenge/run` : 
```
hacker@chaining~reading-shell-scripts:~$ cat /challenge/run
#!/opt/pwn.college/bash

read GUESS
if [ "$GUESS" == "hack the PLANET" ]
then
        echo "CORRECT! Your flag:"
        cat /flag
else
        echo "Read the /challenge/run file to figure out the correct password!"
fi
hacker@chaining~reading-shell-scripts:~$
```

the pw is : hack the Planet which we can give as input to the command to get the flag : `/challenge/run` and then `hack the PLANET`

```
hacker@chaining~reading-shell-scripts:~$ /challenge/run
hack the PLANET
CORRECT! Your flag:
pwn.college{ogeZMJ4HKWnEJuYCB0ZMj80wJqH.QXyADO4EDLzQjN0czW}
hacker@chaining~reading-shell-scripts:~$
```

# END