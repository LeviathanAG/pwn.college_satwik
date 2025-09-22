# PONDERING PATHS

## The Root

### Solve : 

In the challenge, I retrieved the flag by invoking the program `pwn` by using the absolute path `/pwn`.

Flag : `pwn.college{k5LpEAPJNeoPTgw24o97af1q5_x.dhzN5QDLzQjN0czW}`
```
hacker@paths~the-root:~$ /pwn
BOOM!!!
Here is your flag:
pwn.college{k5LpEAPJNeoPTgw24o97af1q5_x.dhzN5QDLzQjN0czW}
hacker@paths~the-root:~$
```


### New Learnings

In this challenge, We learn how to access/invoke a file using this path.

Therefore, to invoke the file we give the exact path starting with `/` and this path is called the `absolute path`.

### References 

NONE used.


___

### Program And Absolute Path 



### Sovle : 

Flag : `pwn.college{8Ke7XwuxTSIhovtpbQpkCA6z-Y7.dVDN1QDLzQjN0czW}`

The name of the challenge program in this level is `run`, and it is in the `/challenge` directory. Thus, the path to the run challenge program is `/challenge/run`, therefore after we ssh and type the command in the terminal.

```
hacker@paths~program-and-absolute-paths:/challenge$ /challenge/run
Correct!!!
/challenge/run is an absolute path! Here is your flag:
pwn.college{8Ke7XwuxTSIhovtpbQpkCA6z-Y7.dVDN1QDLzQjN0czW}
hacker@paths~program-and-absolute-paths:/challenge$
```

### New Learnings : 

In this challenge, we learn that all challenges are in the `challenge` directory and the `challenge` directory itself is in the `/` directory.


### References :

NONE used.


### Position Thy Self



### Solve : 

Flag : `pwn.college{UwbN4ANHTwaZ417PYkOTF2Y_GHx.dZDN1QDLzQjN0czW}`


In the given challenge, the run program was in a path I did not know about.

Thus I tried entering `/challenge/run` in the default directory which give this prompt :

Incorrect...

You are not currently in the `/usr/include` directory.

Then I used the aforementioned `cd` command to navigate to the the directory by typing `cd /usr/include` in the terminal
which then switched the directory to the desired one and then after typing `/challenge/run`, I retrieved the flag.

```
hacker@paths~position-thy-self:~$ /challenge/run
Incorrect...
You are not currently in the /usr/include directory.
Please use the `cd` utility to change directory appropriately.
hacker@paths~position-thy-self:~$ cd /usr/include
hacker@paths~position-thy-self:/usr/include$ /challenge/run
Correct!!!
/challenge/run is an absolute path, invoked from the right directory!
Here is your flag:
pwn.college{UwbN4ANHTwaZ417PYkOTF2Y_GHx.dZDN1QDLzQjN0czW}
hacker@paths~position-thy-self:/usr/include$
```


### New Learnings : 

In this challenge, we learn the command `cd` which can help us navigate between directories by passing a path to it as an argument like this : `cd /some/new/directory`.

### References :

NONE used.


## POSITION ELSEWHERE

### Solve : 


**Flag:** `pwn.college{A_gDEB1ShL8wiQx7ADEmfw8GZ0Y.ddDN1QDLzQjN0czW}`



In this challenge, we learn to implement the command `cd` which can help us navigate between directories by passing a path to it as an argument like this : `cd /some/new/directory`.

In the given challenge, the run program was in a path I did not know about.  
Thus I tried entering `/challenge/run` in the default directory which give this prompt :

Incorrect...

You are not currently in the `/usr/share/zoneinfo/posix/Asia` directory.

Then I used the aforementioned `cd` command to navigate to the the directory by typing `cd /usr/share/zoneinfo/posix/Asia` in the terminal which then switched the directory to the desired one and then after typing `/challenge/run`, I retrieved the flag.


```
Connected!
hacker@paths~position-elsewhere:~$ /challenge/run
Incorrect...
You are not currently in the /usr/share/zoneinfo/posix/Asia directory.
Please use the `cd` utility to change directory appropriately.
hacker@paths~position-elsewhere:~$ cd /usr/share/zoneinfo/posix/Asia
hacker@paths~position-elsewhere:/usr/share/zoneinfo/posix/Asia$ /challenge/run
Correct!!!
/challenge/run is an absolute path, invoked from the right directory!
Here is your flag:
pwn.college{A_gDEB1ShL8wiQx7ADEmfw8GZ0Y.ddDN1QDLzQjN0czW}
hacker@paths~position-elsewhere:/usr/share/zoneinfo/posix/Asia$
```

### New Learnings

In this challenge, we learn the command `cd` which can help us navigate between directories by passing a path to it as an argument like this : `cd /some/new/directory`.

### References

NONE used.

---

## POSITION YET ELSEWHERE

### Solve : 

**Flag:** `pwn.college{8jQH6Gply6QpexzIzpWB6x_gG-G.dhDN1QDLzQjN0czW}`


In this challenge, we agian learn to implement the command `cd` which can help us navigate between directories by passing a path to it as an argument like this : `cd /some/new/directory`.

In the given challenge, the run program was in a path I did not know about.  
Thus I tried entering `/challenge/run` in the default directory which give this prompt :

Incorrect...

You are not currently in the `/usr/share/zoneinfo/posix/Asia` directory.

Then I used the aforementioned `cd` command to navigate to the the directory by typing `cd /usr/share/zoneinfo/posix/Asia` in the terminal which then switched the directory to the desired one and then after typing `/challenge/run`, I retrieved the flag.

```
hacker@paths~position-yet-elsewhere:/usr/share/zoneinfo/posix/Asia$ /challenge/run
Correct!!!
/challenge/run is an absolute path, invoked from the right directory!
Here is your flag:
pwn.college{8jQH6Gply6QpexzIzpWB6x_gG-G.dhDN1QDLzQjN0czW}
hacker@paths~position-yet-elsewhere:/usr/share/zoneinfo/posix/Asia$
```


### New Learnings

Same as **Position Elsewhere**.

### References

NONE used.

---

## IMPLICIT RELATIVE PATHS FROM /

### Solve : 

**Flag:** `pwn.college{4ftRmPAo1kI7jEq154njpu3Uqgq.dlDN1QDLzQjN0czW}`



* A relative path is any path that does not start at root (i.e., it does not start with `/`).  
* A relative path is interpreted relative to your current working directory (cwd).  
* Your cwd is the directory that your prompt is currently located at.

This means how you specify a particular file, depends on where the terminal prompt is located.

Imagine we want to access some file located at `/tmp/a/b/my_file`.

* If my cwd is `/`, then a relative path to the file is `tmp/a/b/my_file`.  
* If my cwd is `/tmp`, then a relative path to the file is `a/b/my_file`.  
* If my cwd is `/tmp/a/b/c`, then a relative path to the file is `../my_file`. The `..` refers to the parent directory.

To solve this challenge, I accessed the root directory `/` using `cd /` and then invoked the command `challenge/run` to retrieve the flag.

```
hacker@paths~implicit-relative-paths-from-:/$ challenge/run
Correct!!!
challenge/run is a relative path, invoked from the right directory!
Here is your flag:
pwn.college{4ftRmPAo1kI7jEq154njpu3Uqgq.dlDN1QDLzQjN0czW}
hacker@paths~implicit-relative-paths-from-:/$
```

### References

NONE used.



---

## EXPLICIT RELATIVE PATHS, FROM /

### Solve : 

**Flag:** `pwn.college{8NTWVLsHyAH7W4tl4jF-g80tzUG.dBTN1QDLzQjN0czW}`

In this challenge, we learn how to use `.` to navigate directories using relative paths.

To solve this challenge, I accessed the root directory `/` using `cd /` and then invoked the command `./challenge/run` to retrieve the flag.

```
hacker@paths~explicit-relative-paths-from-:/$ ./challenge/run
Correct!!!
./challenge/run is a relative path, invoked from the right directory!
Here is your flag:
pwn.college{8NTWVLsHyAH7W4tl4jF-g80tzUG.dBTN1QDLzQjN0czW}
hacker@paths~explicit-relative-paths-from-:/$
```
### References

NONE used.

---

## IMPLICIT RELATIVE PATH

### Solve : 

**Flag:** `pwn.college{wFwkIN86zeaUUqkZl3j4DftkbbF.dFTN1QDLzQjN0czW}`

We learn more about using `.` i.e relative paths in this challenge.

We also learn about a very crucial safety measure where linux doesn't run with a naked path.

In the below example, we get an error `bash: run: command not found` if we use the command `cd /challenge` and then `run`.

Therefore, to solve this challenge, we have to use `./run` after `cd` into the `challenge` directory.

Doing the aforementioned commands gave me the flag.

```
hacker@paths~implicit-relative-path:/challenge$ ./run
Correct!!!
./run is a relative path, invoked from the right directory!
Here is your flag:
pwn.college{wFwkIN86zeaUUqkZl3j4DftkbbF.dFTN1QDLzQjN0czW}
hacker@paths~implicit-relative-path:/challenge$
```

### References

NONE used.

---

## HOME SWEET HOME

### Solve : 

**Flag:** `pwn.college{A1E4AOpazpbMf5nm8JVMS2x72ZY.dNzM4QDLzQjN0czW}`


To solve this challenge, I ran the command `/challenge/run ~/a` which give me the output.
```
hacker@paths~home-sweet-home:~$ /challenge/run ~/a
Writing the file to /home/hacker/a!
... and reading it back to you:
pwn.college{A1E4AOpazpbMf5nm8JVMS2x72ZY.dNzM4QDLzQjN0czW}

```



###  Learning : 
In this challenge, we learn that every user has a `home` directory under `/home`.

The `home` directory is typically where users store most of their personal files.

The `~` in this prompt is the current working directory, with `~` being shorthand for `/home/hacker`.  

Note: The expansion of `~` is an absolute path, and only the leading `~` is expanded. This means, for example, that `~/~` will be expanded to `/home/hacker/~` rather than `/home/hacker/home/hacker`.


### References

NONE used.

