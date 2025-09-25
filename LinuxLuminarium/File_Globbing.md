# File Globbing 

This module tackles file globbing.


- [File Globbing](#file-globbing)
  - [Matching with \*](#matching-with-)
    - [Solve :](#solve-)
  - [Matching with ?](#matching-with--1)
    - [Solve :](#solve--1)
  - [Matching with \[\]](#matching-with--2)
    - [Solve :](#solve--2)
  - [Matching paths with \[\]](#matching-paths-with-)
    - [Solve :](#solve--3)
    - [New loearning :](#new-loearning-)
  - [Multiple globs](#multiple-globs)
    - [Solve :](#solve--4)
    - [new learning :](#new-learning-)
  - [Missing globs](#missing-globs)
    - [solve :](#solve--5)
  - [Exclusionary globbing](#exclusionary-globbing)
    - [solve :](#solve--6)
  - [Tab completion](#tab-completion)
    - [Solve:](#solve)
  - [Multiple options for tab completion](#multiple-options-for-tab-completion)
    - [Solve :](#solve--7)
  - [Tab autocompletion on commands](#tab-autocompletion-on-commands)
    - [solve :](#solve--8)
- [END](#end)
  


## Matching with * 

### Solve :

The flag : `pwn.college{YwYMBsNrGCNK24mSi1MHS3A0-kh.dFjM4QDLzQjN0czW}`

The first glob we'll learn is *. When it encounters a * character in any argument, the shell will treat it as "wildcard" and try to replace that argument with any files that match the pattern. It's easier to show you than explain:


 
In this challenge, we are supposed to change our cwd to `/challenge` and execute the `run` file to get our flag. But we can only pass in 4 characters to the cd command.

I run the command `cd /ch*` to change my cwd to `/challenge` and then I execute `./run` to get the flag.



```
This challenge resets your working directory to /home/hacker unless you change
directory properly...
This challenge resets your working directory to /home/hacker unless you change
directory properly...
hacker@globbing~matching-with-:~$ cd /ch*
hacker@globbing~matching-with-:/challenge$ /challenge/run
You ran me with the working directory of /challenge! Here is your flag:
pwn.college{YwYMBsNrGCNK24mSi1MHS3A0-kh.dFjM4QDLzQjN0czW}
hacker@globbing~matching-with-:/challenge$
```

## Matching with ? 

### Solve :

Flag : `pwn.college{E88ZFNrKShWnj1_NHASGlgdBjw-.dJjM4QDLzQjN0czW}`

When the shell encounters a `?` character in any argument, the shell will treat it as single-character wildcard. This works like *, but only matches one character. 

To solve this challenge, we are suppposed to change our cwd to `/challenge` and execute the `run` file to get our flag. But we need to use the `?` character instead of c and l in the argument to cd.

I run the command `cd /?ha??enge` to change my cwd to `/challenge` and execute the `./run` file to get the 





```
hacker@globbing~matching-with-:~$ cd /?ha??enge
hacker@globbing~matching-with-:/challenge$ /challenge/run
You ran me with the working directory of /challenge! Here is your flag:
pwn.college{E88ZFNrKShWnj1_NHASGlgdBjw-.dJjM4QDLzQjN0czW}
hacker@globbing~matching-with-:/challenge$
```


## Matching with []

### Solve :
 Flag : `pwn.college{QjzAaYquRNM6XwswRy1eqEq_ujf.dNjM4QDLzQjN0czW}`

 The square brackes are, essentially, a limited form of ?, in that instead of matching any character, [] is a wildcard for some subset of potential characters, specified within the brackets. For example, [pwn] will match the character p, w, or n.


To solve this challenge, we are supposed to change our cwd to `/challenge/files` and execute the `run` file with a single argument that bracket-globs into file_b, file_a, file_s, and file_h.

I ran `cd /challenge/files` to change my cwd to `/challenge/files`. 

We can use `[]` globbing to include `file_a, file_b, file_s, file_h` so I run `/challenge/run file_[bash]` to get the



```
hacker@globbing~matching-with-:/challenge/files$ /challenge/run file_[bash]
You got it! Here is your flag!
pwn.college{QjzAaYquRNM6XwswRy1eqEq_ujf.dNjM4QDLzQjN0czW}
hacker@globbing~matching-with-:/challenge/files$
```
## Matching paths with []

### Solve : 

Flag : `pwn.college{QjzAaYquRNM6XwswRy1eqEq_ujf.dNjM4QDLzQjN0czW}`



As with the previous challenge, we are supposed to execute `/challenge/run` with a single argument that bracket-globs into the absolute paths to the file_b, file_a, file_s, and file_h files but from our home directory.

I run `/challenge/run/challenge/files/file_[bash]` to get the flag.

```
hacker@globbing~matching-paths-with-:~$ /challenge/run /challenge/files/file_[bash]
You got it! Here is your flag!
pwn.college{U53rnanKNJkEkDWdp00Jlfjq3AK.dRjM4QDLzQjN0czW}
hacker@globbing~matching-paths-with-:~$
```

### New loearning :
Globbing happens on a path basis, so you can expand entire paths with your globbed arguments.

## Multiple globs 

### Solve :

Flag : `pwn.college{wncXD3Bo0JfsvYhpiNXIUtLCm-U.QXycTO2EDLzQjN0czW}`

cd to  /challenge/files and then did ls to see a lot of ffiles and acc to chall desc i can do this to get the flag : 

```

hacker@globbing~multiple-globs:~$ cd /challenge/files
hacker@globbing~multiple-globs:/challenge/files$ ls
amazing      delightful   great       jovial    magical     pwning   splendid   victorious  youthful
beautiful    educational  happy       kind      nice        queenly  thrilling  wonderful   zesty
challenging  fantastic    incredible  laughing  optimistic  radiant  uplifting  xenial
hacker@globbing~multiple-globs:/challenge/files$ /challenge/run *p*
You got it! Here is your flag!
pwn.college{wncXD3Bo0JfsvYhpiNXIUtLCm-U.QXycTO2EDLzQjN0czW}
hacker@globbing~multiple-globs:/challenge/files$
```


### new learning :

Bash supports the expansion of multiple globs in a single word

## Missing globs

### solve : 
Flag : `pwn.college{QjzAaYquRNM6XwswRy1eqEq_ujf.dNjM4QDLzQjN0czW}`

 TO solve this challenge, we are supposed to change our cwd to `/challenge/files` and execute the `/challenge/run` file with a single argument that bracket-globs into "challenging", "educational", and "pwning" files.

I run `cd /challenge/files` to change my cwd to `/challenge/files`. 

The argument had to less than or equal to 6 characters So I ran `/challenge/run [cep]*` to the flag.

```
hacker@globbing~mixing-globs:~$ cd /challenge/files
hacker@globbing~mixing-globs:/challenge/files$ /challenge/run [cep]*
You got it! Here is your flag!
pwn.college{oY0Ml0HbaGTcx3k-_EBHLUj8xVA.dVjM4QDLzQjN0czW}
```




## Exclusionary globbing

### solve :

The flag : `pwn.college{sKcU5HNx1aQC4ZNjw5G78hWJVy9.dZjM4QDLzQjN0czW}`


Sometimes, you want to filter out files in a glob! Luckily, [] helps you do just this. If the first character in the brackets is a ! or (in newer versions of bash) a ^, the glob inverts, and that bracket instance matches characters that aren't listed.

To solve his challenge,  we are asked  to change our cwd to `/challenge/files` and execute the `/challenge/run` file with a single argument that bracket-globs into every file that does not start with p,w and n.

I run `cd /challenge/files` to change my cwd to `/challenge/files`. 

We can use `!` to invert the glob so that it ignores the files that start with p,w and n. Therefore I run `/challenge/run [!pwn]*` to get the flag.

```
hacker@globbing~exclusionary-globbing:~$ cd /challenge/files
hacker@globbing~exclusionary-globbing:/challenge/files$ /challenge/run [!pwn]*
You got it! Here is your flag!
pwn.college{sKcU5HNx1aQC4ZNjw5G78hWJVy9.dZjM4QDLzQjN0czW}
```

## Tab completion

### Solve: 
flag :`pwn.college{w6Pmrvsm_YtX58DbLA-r0OSTAR-.QX0QTM3EDLzQjN0czW}`

just do `cat /challenge/pwn<tab>`


```
hacker@globbing~tab-completion:~$ cat /challenge/pwncollege​
pwn.college{w6Pmrvsm_YtX58DbLA-r0OSTAR-.QX0QTM3EDLzQjN0czW}
hacker@globbing~tab-completion:~$
```

## Multiple options for tab completion 

### Solve : 

flag : `pwn.college{81RDQj9or61iKa1_OxF_4_RtrQy.QX2QTM3EDLzQjN0czW}`

use tab twice to print out the multiple files and tried catting em all using * but its not allowed so had to brute force search manually

```
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn
pwn                    pwn-the-planet         pwncollege-flag        pwncollege-flyswatter
pwn-college            pwncollege-family      pwncollege-flamingo    pwncollege-hacking
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn
pwn                    pwn-the-planet         pwncollege-flag        pwncollege-flyswatter
pwn-college            pwncollege-family      pwncollege-flamingo    pwncollege-hacking
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn-
pwn-college     pwn-the-planet
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn-college
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn-the-planet
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn*
This level disallows the use of * globs!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwncollege-hacking
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwncollege-flyswatter
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn-college
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwn
No flag in this file!
hacker@globbing~multiple-options-for-tab-completion:~$ cat /challenge/files/pwncollege-flag
pwn.college{81RDQj9or61iKa1_OxF_4_RtrQy.QX2QTM3EDLzQjN0czW}
hacker@globbing~multiple-options-for-tab-completion:~$
```

## Tab autocompletion on commands

### solve : 

Flag : `pwn.college{QMII2oQHLgVt3zxmRfnB08wOYyN.QX1QTM3EDLzQjN0czW}`


basically what the title says u can autocompelte commands and just doing what the chall says gives flag.

```
Connected!
hacker@globbing~tab-completion-on-commands:~$ pwncollege-17655
Correct! Here is your flag:
pwn.college{QMII2oQHLgVt3zxmRfnB08wOYyN.QX1QTM3EDLzQjN0czW}
hacker@globbing~tab-completion-on-commands:~$
```

# END
