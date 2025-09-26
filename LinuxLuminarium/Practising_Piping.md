# Practicing Piping

In this module, We learn to pipe.

<b>INDEX</b>

- [Practicing Piping](#practicing-piping)
  - [Redirecting output](#redirecting-output)
    - [solve](#solve)
  - [Redirecting more output](#redirecting-more-output)
    - [solve](#solve-1)
  - [Appending output](#appending-output)
    - [solve](#solve-2)
  - [Redirecting Errors](#redirecting-errors)
    - [solve](#solve-3)
  - [Redirecting input](#redirecting-input)
    - [Solve :](#solve-)
  - [Grepping stored results](#grepping-stored-results)
  - [Grepping live output](#grepping-live-output)
    - [Sovle :](#sovle-)
  - [Grepping errors](#grepping-errors)
    - [solve ;](#solve--1)
  - [Filtering with grep -v](#filtering-with-grep--v)
    - [Solve :](#solve--2)
    - [New learnings :](#new-learnings-)
  - [Duplicating piped data with tee](#duplicating-piped-data-with-tee)
    - [solve :](#solve--3)
    - [new learnings](#new-learnings)
  - [Process substitution for input](#process-substitution-for-input)
    - [solve](#solve-4)
  - [Writing to multiple programs](#writing-to-multiple-programs)
    - [solve](#solve-5)
  - [Split-piping stderr and stdout](#split-piping-stderr-and-stdout)
    - [solve :](#solve--4)
  - [Named Pipes](#named-pipes)
    - [solve](#solve-6)
    - [Terminal 1 :](#terminal-1-)
    - [Terminal 2 :](#terminal-2-)
    - [new learnings :](#new-learnings--1)
- [END](#end)
  

## Redirecting output 

The flag - `pwn.college{8rtLJRk69yEOARuc9RygZQki5nq.dRjN1QDLzQjN0czW}`

### solve 
 this challenge, we are required to write `PWN` to the file `COLLEGE`.

We can run `echo PWN > COLLEGE` to write the message `PWN` to the file `COLLEGE`. Running this gives us 



```
Connected!
hacker@piping~redirecting-output:~$ echo PWN > COLLEGE
Correct! You successfully redirected 'PWN' to the file 'COLLEGE'! Here is your
flag:
pwn.college{8rtLJRk69yEOARuc9RygZQki5nq.dRjN1QDLzQjN0czW}
hacker@piping~redirecting-output:~$

```

## Redirecting more output

### solve

The flag : `pwn.college{MrJ0vONjZeMwUBcg6wl0ZRVr0zb.dVjN1QDLzQjN0czW}`

In this challenge, we are required to redirect the output of the command `/challenge/run` into a file called `myflag`.

We can run `/challenge/run > myflag` to write the output into the file `myflag` and use `cat` to get the flag.

```
Connected!
hacker@piping~redirecting-more-output:~$ /challenge/run > myflag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[PASS] The file at the other end of my stdout looks okay!
[PASS] Success! You have satisfied all execution requirements.

hacker@piping~redirecting-more-output:~$
hacker@piping~redirecting-more-output:~$ cd /challenge
hacker@piping~redirecting-more-output:/challenge$ cat myflag
cat: myflag: No such file or directory
hacker@piping~redirecting-more-output:/challenge$ ls
DESCRIPTION.md  chio.py  run
hacker@piping~redirecting-more-output:/challenge$ cd ./
hacker@piping~redirecting-more-output:/challenge$ cd .
hacker@piping~redirecting-more-output:/challenge$ cd /
hacker@piping~redirecting-more-output:/$ ls
bin   challenge  etc   home  lib32  libx32  mnt  opt   root  sbin  sys  usr
boot  dev        flag  lib   lib64  media   nix  proc  run   srv   tmp  var
hacker@piping~redirecting-more-output:/$ cd ~
hacker@piping~redirecting-more-output:~$ ls
 COLLEGE   Desktop   myfile   myflag   not-the-flag  '~'
hacker@piping~redirecting-more-output:~$ cat myflag

[FLAG] Here is your flag:
[FLAG] pwn.college{MrJ0vONjZeMwUBcg6wl0ZRVr0zb.dVjN1QDLzQjN0czW}

hacker@piping~redirecting-more-output:~$
```



## Appending output

### solve 
flag :

`pwn.college{c_BeuLUgX-VNxv76mEdWfnorqx7.ddDM5QDLzQjN0czW}`

To solve this challenge, we are required to redirect the output of the command `/challenge/run` in append mode (>>) to `/home/hacker/the-flag` to get the complete flag.

I  tan  `/challenge/run >> /home/hacker/the-flag` to redirect the output to the file.

We can then run `cat /home/hacker/the-flag` to get the flag - 

```
Connected!
hacker@piping~appending-output:~$ /challenge/run >> /home/hacker/the-flag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : /home/hacker/the-flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] Good luck!

[TEST] You should have redirected my stdout to a file called /home/hacker/the-flag. Checking...

[HINT] File descriptors are inherited from the parent, unless the FD_CLOEXEC is set by the parent on the file descriptor.
[HINT] For security reasons, some programs, such as python, do this by default in certain cases. Be careful if you are
[HINT] creating and trying to pass in FDs in python.

[PASS] The file at the other end of my stdout looks okay!
[PASS] Success! You have satisfied all execution requirements.
I will write the flag in two parts to the file /home/hacker/the-flag! I'll do
the first write directly to the file, and the second write, I'll do to stdout
(if it's pointing at the file). If you redirect the output in append mode, the
second write will append to (rather than overwrite) the first write, and you'll
get the whole flag!
hacker@piping~appending-output:~$ cat /home/hacker/the-flag
 |
\|/ This is the first half:
 v
pwn.college{c_BeuLUgX-VNxv76mEdWfnorqx7.ddDM5QDLzQjN0czW}
                              ^
     that is the second half /|\
                              |

If you only see the second half above, you redirected in *truncate* mode (>)
rather than *append* mode (>>), and so the write of the second half to stdout
overwrote the initial write of the first half directly to the file. Try append
mode!
hacker@piping~appending-output:~$
```

## Redirecting Errors

### solve

The flag : `pwn.college{EcdXHBtzpmISK6lxLR7QfbPUpTw.ddjN1QDLzQjN0czW}`

To solve this challenge, we are required to redirect the output to `myflag` and redirect the errors to `instructions`

I ran `/challenge/run > myflag 2> instructions` 

Then I printed out the `myflag` using `cat myflag` to get 

```
Connected!
hacker@piping~redirecting-errors:~$ /challenge/run > myflag 2> instructions
hacker@piping~redirecting-errors:~$ cat myflag

[FLAG] Here is your flag:
[FLAG] pwn.college{EcdXHBtzpmISK6lxLR7QfbPUpTw.ddjN1QDLzQjN0czW}

hacker@piping~redirecting-errors:~$ cat instructions
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will check that error output is redirected to a specific file path : instructions
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[PASS] The file at the other end of my stdout looks okay!

[TEST] You should have redirected my stderr to instructions. Checking...

[PASS] The file at the other end of my stderr looks okay!
[PASS] Success! You have satisfied all execution requirements.
hacker@piping~redirecting-errors:~$
hacker@piping~redirecting-errors:~$
```


```
hacker@piping~redirecting-errors:~$ /challenge/run > myflag 2> instructions
hacker@piping~redirecting-errors:~$ cat mflag
cat: mflag: No such file or directory
hacker@piping~redirecting-errors:~$ cat myflag

[FLAG] Here is your flag:
[FLAG] pwn.college{EcdXHBtzpmISK6lxLR7QfbPUpTw.ddjN1QDLzQjN0czW}

hacker@piping~redirecting-errors:~$
```

## Redirecting input

### Solve : 
The flag - `pwn.college{AS2cI-b41ekCVhei01gqIGzdYIh.dBzN1QDLzQjN0czW}`

To solve this challenge, we are required to redirect a file called `PWN` that contains `COLLEGE` to the command `/challenge/run` to get our flag.

I ran `echo COLLEGE > PWN` to create the file that we need to redirect.

Then I ran `/challenge/run < PWN` to get



```
Connected!
hacker@piping~redirecting-input:~$ echo COLLEGE > PWN
hacker@piping~redirecting-input:~$ /challenge/run < PWN
Reading from standard input...
Correct! You have redirected the PWN file into my standard input, and I read
the value 'COLLEGE' out of it!
Here is your flag:
pwn.college{AS2cI-b41ekCVhei01gqIGzdYIh.dBzN1QDLzQjN0czW}
hacker@piping~redirecting-input:~$


```
## Grepping stored results

In this challenge, we are required to redirect the output of `/challenge/run` to `/tmp.data.txt` and then search for our flag in the data file. 

I ran the command `/challenge/run > /tmp.data.txt` to redirect the output.

The file has hundred thousand lines of text so I used grep to search for the string `pwn.college` as all the flags start with it. Running **`grep pwn.college /tmp/data.txt`** gave 

The flag - `pwn.college{8NWJb_iUPbSgrWJaobttz-cLdoK.dhTM4QDLzQjN0czW}`

```
Connected!
hacker@piping~grepping-stored-results:~$ /challenge/run > /tmp/data.txt
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : /tmp/data.txt
[INFO] - the challenge will output a reward file if all the tests pass : /challenge/.data.txt

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /challenge/.data.txt file.

[TEST] You should have redirected my stdout to a file called /tmp/data.txt. Checking...

[HINT] File descriptors are inherited from the parent, unless the FD_CLOEXEC is set by the parent on the file descriptor.
[HINT] For security reasons, some programs, such as python, do this by default in certain cases. Be careful if you are
[HINT] creating and trying to pass in FDs in python.

[PASS] The file at the other end of my stdout looks okay!
[PASS] Success! You have satisfied all execution requirements.
hacker@piping~grepping-stored-results:~$ grep pwn.college /tmp/data.txt
pwn.college{8NWJb_iUPbSgrWJaobttz-cLdoK.dhTM4QDLzQjN0czW}
hacker@piping~grepping-stored-results:~$

```

## Grepping live output

### Sovle : 

The flag - `pwn.college{MAEvvgXFKNY559CizSIPhz0capk.dlTM4QDLzQjN0czW}`

 like the last challenge, we are required to look for our flag in the output using the piping (|) operator.

We can run the command `/challenge/run | grep pwn.college` where `|` is the piping operator. Running this gives us



```
hacker@piping~grepping-live-output:~$ /challenge/run | grep pwn
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge checks for a specific process at the other end of stdout : grep
[INFO] - the challenge will output a reward file if all the tests pass : /challenge/.data.txt

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /challenge/.data.txt file.

[TEST] You should have redirected my stdout to another process. Checking...
[TEST] Performing checks on that process!

[INFO] The process' executable is /nix/store/8b4vn1iyn6kqiisjvlmv67d1c0p3j6wj-gnugrep-3.11/bin/grep.
[INFO] This might be different than expected because of symbolic links (for example, from /usr/bin/python to /usr/bin/python3 to /usr/bin/python3.8).
[INFO] To pass the checks, the executable must be grep.

[PASS] You have passed the checks on the process on the other end of my stdout!
[PASS] Success! You have satisfied all execution requirements.
pwn
pwns
pwned
pwn.college{MAEvvgXFKNY559CizSIPhz0capk.dlTM4QDLzQjN0czW}
pwning

```

## Grepping errors

### solve ;

The flag - `pwn.college{4Ql6mrl4XfQqf0sbw1BNtxd7E_M.dVDM5QDLzQjN0czW}`

To solve this challenge, we are asked to look for our flag in the error stream of the `/challenge/run` command using grep.

> [!NOTE]
>The piping operator `|` only redirects standard output so we need to convert standard error to standard output. We can use `>&` operator to achieve this.
>
>The `>&` operator redirects a file descriptor to another file descriptor.

We can run `/challenge/run 2>&1 | grep pwn.college` which gives us


```
hacker@piping~grepping-errors:~$ /challenge/run 2>&1 | grep pwn.college
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge checks for a specific process at the other end of stderr : grep
[INFO] - the challenge will output a reward file if all the tests pass : /challenge/.data.txt

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /challenge/.data.txt file.

[TEST] You should have redirected my stderr to another process. Checking...
[TEST] Performing checks on that process!

[INFO] The process' executable is /nix/store/xpq4yhadyhazkcsggmqd7rsgvxb3kjy4-gnugrep-3.11/bin/grep.
[INFO] This might be different than expected because of symbolic links (for example, from /usr/bin/python to /usr/bin/python3 to /usr/bin/python3.8).
[INFO] To pass the checks, the executable must be grep.

[PASS] You have passed the checks on the process on the other end of my stderr!
[PASS] Success! You have satisfied all execution requirements.
pwn.college{4Ql6mrl4XfQqf0sbw1BNtxd7E_M.dVDM5QDLzQjN0czW}
hacker@piping~grepping-errors:~$


```


## Filtering with grep -v 

### Solve :

flag : `pwn.college{cd9sxI1US2ZHnGtzFFmYLjD5AoC.QX4ETM3EDLzQjN0czW}`


to solve the chall, i piped the stdout of `/challenge/run` into `grep -v DECOY`

```
hacker@piping~filtering-with-grep-v:~$ /challenge/run | grep -v DECOY
pwn.college{cd9sxI1US2ZHnGtzFFmYLjD5AoC.QX4ETM3EDLzQjN0czW}
```

### New learnings : 
-v arg allows filtering of data 


## Duplicating piped data with tee 

### solve : 

The flag - `pwn.college{AFRiWxfacRu9Cv5hYIJIFIzH0D9.dFjM5QDLzQjN0czW}`

TO sovle this challenge, we are supposed to pipe the output of `/challenge/pwn` into `/challenge/college` but we also need to read the output of `/challenge/pwn` to find out the argument that will give the flag. 


We can run **`/challenge/pwn | tee output | /challenge/college`** and then `cat output` which outputs:

```
Usage: /challenge/pwn --secret [SECRET_ARG]

SECRET_ARG should be "AFRiWxfa"
```

We can see that we must pass in the `secret` argument with the value `AFRiWxfa` into `/challenge/pwn` to get our flag. 

Running **`/challenge/pwn --secret AFRiWxfa | /challenge/college`** gives us 



```
Connected!
hacker@piping~duplicating-piped-data-with-tee:~$ /challenge/pwn | tee output | /challenge/college
Processing...
The input to 'college' does not contain the correct secret code! This code
should be provided by the 'pwn' command. HINT: use 'tee' to intercept the
output of 'pwn' and figure out what the code needs to be.
hacker@piping~duplicating-piped-data-with-tee:~$ cat output
Usage: /challenge/pwn --secret [SECRET_ARG]

SECRET_ARG should be "AFRiWxfa"
hacker@piping~duplicating-piped-data-with-tee:~$
hacker@piping~duplicating-piped-data-with-tee:~$ /challenge/pwn --secret AFRiWxfa | /challenge/college
Processing...
Correct! Passing secret value to /challenge/college...
Great job! Here is your flag:
pwn.college{AFRiWxfacRu9Cv5hYIJIFIzH0D9.dFjM5QDLzQjN0czW}
hacker@piping~duplicating-piped-data-with-tee:~$


```

### new learnings
>[!NOTE]
> We need to pipe the output into both a file and a command. We can use the `tee` command to achieve this. 
> The `tee` command duplicates data flowing through your pipes to any number of files provided on the command

## Process substitution for input 

### solve 

flag : `pwn.college{ciuQlSYzdO6yK7lEF1UbjRDam6r.QX2AzM4EDLzQjN0czW}`

solved it by creating two temp files for the commands and using pass them as arguments to diff.

```
hacker@piping~process-substitution-for-input:~$ diff <(/challenge/print_decoys) <(/challenge/print_decoys_and_flag)
81a82
> pwn.college{ciuQlSYzdO6yK7lEF1UbjRDam6r.QX2AzM4EDLzQjN0czW}
hacker@piping~process-substitution-for-input:~$

```

## Writing to multiple programs

### solve

The flag - `pwn.college{M-jFpEtGLAZCp2M8RvPDgRcF7Ul.dBDO0UDLzQjN0czW}`

To solve this challenge, we need to pipe the output of `/challenge/hack` into both `/challenge/the` and `/challenge/planet`.

> [!NOTE]
> The `tee` command is designed to write to files and to standard output.
>
> We can write one of the commands as >(command) to pass it in as a file.


We can run `/challenge/hack | tee >(/challenge/the) | /challenge/planet` which will give us 



```
Connected!
hacker@piping~writing-to-multiple-programs:~$ /challenge/hack | tee >(/challenge/the) | /challenge/planet
Congratulations, you have duplicated data into the input of two programs! Here
is your flag:
pwn.college{M-jFpEtGLAZCp2M8RvPDgRcF7Ul.dBDO0UDLzQjN0czW}
hacker@piping~writing-to-multiple-programs:~$
```

## Split-piping stderr and stdout

### solve : 
The flag - `pwn.college{AWTSHxtuRObGwqP_TiYiRBWVPmO.dFDNwYDLzQjN0czW}`



To solve this challenge, we are supposed to pipe out the standard error of `/challenge/hack` into `/challenge/the` and the standard output into `/challenge/planet`

We can run `/challenge/hack 2> >(/challenge/the) | /challenge/planet`  which will give us 


```

Connected!
hacker@piping~split-piping-stderr-and-stdout:~$ /challenge/hack 2> >(/challenge/the) | /challenge/planet
Congratulations, you have learned a redirection technique that even experts
struggle with! Here is your flag:
pwn.college{AWTSHxtuRObGwqP_TiYiRBWVPmO.dFDNwYDLzQjN0czW}
hacker@piping~split-piping-stderr-and-stdout:~$



```
## Named Pipes 


### solve 

Flag : ` pwn.college{s_MRunCZUxhqJSuTytcnJWPvl7L.QXzMzM4EDLzQjN0czW}`
so the content and info inside the fifo and mkfifo's non persistence was very interesting but the chall itself was simple imo.
i did these cmds : `mkfifo flag_flag` and `/challenge/run > flag_fifo`
and it got stuck in that process indefinitely so i booted up a desktop in pwn.college website and ran `cat flag_fifo`
### Terminal 1 : 

```
hacker@piping~named-pipes:~$ mkfifo /tmp/flag_fifo
hacker@piping~named-pipes:~$ /challenge/run > /tmp/flag_fifo
You're successfully redirecting /challenge/run to a FIFO at /tmp/flag_fifo!
Bash will now try to open the FIFO for writing, to pass it as the stdout of
/challenge/run. Recall that operations on FIFOs will *block* until both the
read side and the write side is open, so /challenge/run will not actually be
launched until you start reading from the FIFO!
cat /tmp/flag_fifo
hacker@piping~named-pipes:~$ cat /tmp/flag_fifo
```
### Terminal 2 :
```


hacker@piping~named-pipes:~$ cat /tmp/flag_fifo
You've correctly redirected /challenge/run's stdout to a FIFO at 
/tmp/flag_fifo! Here is your flag:
pwn.college{s_MRunCZUxhqJSuTytcnJWPvl7L.QXzMzM4EDLzQjN0czW}

```



### new learnings :

You can also create your own persistent named pipes that stick around on the filesystem! These are called FIFOs, which stands for First (byte) In, First (byte) Out.

You create a FIFO using the mkfifo command:
```
hacker@dojo:~$ mkfifo my_pipe
hacker@dojo:~$ ls -l my_pipe
prw-r--r-- 1 hacker hacker 0 Jan 1 12:00 my_pipe
-rw-r--r-- 1 hacker hacker 0 Jan 1 12:00 some_file
hacker@dojo:~$
Notice the p at the beginning of the permissions - that indicates it's a pipe! That's markedly different than the - that's at the beginning of normal files, such as some_file in the above example.
```
Unlike the automatic named pipes from process substitution:

You control where FIFOs are created
They persist until you delete them
Any process can write to them by path (e.g., echo hi > my_pipe)
You can see them with ls and examine them like files
One problem with FIFOs is that they'll "block" any operations on them until both the read side of the pipe and the write side of the pipe are ready. For example, consider this:

hacker@dojo:~$ mkfifo myfifo
hacker@dojo:~$ echo pwn > myfifo
To service echo pwn > myfifo, bash will open the myfifo file in write mode. However, this operation will hang until something also opens the file in read mode (thus completing the pipe). That can be in a different console:
```
hacker@dojo:~$ cat myfifo
pwn
hacker@dojo:~$
```
What happened here? When we ran cat myfifo, the pipe had both sides of the connection all set, and unblocked, allowing echo pwn > myfifo to run, which sent pwn into the pipe, where it was read by cat.

Of course, this can somewhat be done by normal files: you've learned how to echo stuff into them and cat them out. Why use a FIFO instead? Here are key differences:

No disk storage: FIFOs pass data directly between processes in memory - nothing is saved to disk
Ephemeral data: Once data is read from a FIFO, it's gone (unlike files where data persists)
Automatic synchronization: Writers block until the readers are ready, and vice-versa. This is actually useful! It provides automatic synchronization. Consider the example above: with a FIFO, it doesn't matter if cat myfifo or echo pwn > myfifo is executed first; each would just wait for the other. With files, you need to make sure to execute the writer before the reader.
Complex data flows: FIFOs are useful for facilitating complex data flows, merging and splitting data in flexible ways, and so on. For example, FIFOs support multiple readers and writers

# END