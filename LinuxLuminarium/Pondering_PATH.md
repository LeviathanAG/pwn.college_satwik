# Pondering PATH

This module is about the PATH variable in Linux.



- [Pondering PATH](#pondering-path)
  - [The PATH Variable](#the-path-variable)
    - [Solve](#solve)
  - [Setting PATH](#setting-path)
    - [solve](#solve-1)
  - [Finding Commands](#finding-commands)
    - [Solve](#solve-2)
  - [Adding Commands](#adding-commands)
    - [Solve](#solve-3)
  - [Hijacking Commands](#hijacking-commands)
    - [Solve](#solve-4)
- [END](#end)


## The PATH Variable

### Solve

The flag : `pwn.college{oHPGAGCRKjUPAjH5JVMsy1TFQD3.dZzNwUDLzQjN0czW}`

In this challenge, we are supposed to make it so that `/challenge/run` cannot use the `rm` command in order to get our flag.

> [!NOTE]
> The shell will search for programs corresponding to commands in a special variable called the `PATH` variable.

We can set the value of the `PATH` variable to an empty string to prevent the program from accessing the `rm` command. The program 
`/challenge/run` will be a child process of our shell so we can export the `PATH` variable since child processes inherit the variables of the parent shell

I run **`export PATH=""`** to export the `PATH` variable as a empty string.

Then I run **`/challenge/run`** to get the flag.

```
Connected!
hacker@path~the-path-variable:~$ export PATH=""
hacker@path~the-path-variable:~$ /challenge/run
Trying to remove /flag...
/challenge/run: line 4: rm: No such file or directory
The flag is still there! I might as well give it to you!
pwn.college{oHPGAGCRKjUPAjH5JVMsy1TFQD3.dZzNwUDLzQjN0czW}
hacker@path~the-path-variable:~$
```



## Setting PATH

### solve

The flag : `pwn.college{wxicxqMKVCx8td6j7j-eYd9XJPx.dVzNyUDLzQjN0czW}`

In this challenge, the program `/challenge/run` will run the win command via its bare name, but this command exists in the `/challenge/more_commands/` directory, which is not initially in the `PATH` variable. Therefore we need to add the path to the `PATH` variable to get our flag.

I run **`PATH=/challenge/more_commands/`** to set the path variable.

Then I run **`/challenge/run`** to get the flag.

```
Connected!
hacker@path~setting-path:~$ PATH=/challenge/more_commands/
hacker@path~setting-path:~$ /challenge/run
Invoking 'win'....
Congratulations! You properly set the flag and 'win' has launched!
pwn.college{wxicxqMKVCx8td6j7j-eYd9XJPx.dVzNyUDLzQjN0czW}
hacker@path~setting-path:~$

```

## Finding Commands 

### Solve 

THe flag : `pwn.college{gxLEKZ-UEt2xBDdXg9QillPUfg-.QX3MTM3EDLzQjN0czW}`

Use the `which` cmd to find the path of the `win` command and then cat the flag with the path we get to get the flag.

```
hacker@path~finding-commands:~$ which win
/challenge/paths/2194/win
hacker@path~finding-commands:~$ cat /challenge/paths/2194/flag
pwn.college{gxLEKZ-UEt2xBDdXg9QillPUfg-.QX3MTM3EDLzQjN0czW}
hacker@path~finding-commands:~$
```

## Adding Commands

### Solve

The flag : `pwn.college{YVVrN_1ml0uGiAQ2ODsITTlLdaM.dZzNyUDLzQjN0czW}`

In this challenge, we need to trick `/challenge/run` into printing the flag by modifying the `win` file. 

I used [nano](https://www.nano-editor.org/) to create a file named `win` in the home directory and added the commands.

> [!NOTE]
> Since we are modifying the `PATH` variable, the system can't find comamnds like `cat`. Therefore we have to use alternative methods to print out the flag.
>
> One such method is the `read` command which reads the contents of a file into a variable. We can then print out the variable using `echo`
>

I made it executabe for all users by running **`chmod o+x win`**

Then I modify the PATH variable - `PATH=~/`

Finally I run **`/challenge/run`** to get the flag.

```
Connected!
hacker@path~adding-commands:~$ nano win
hacker@path~adding-commands:~$ chmod u+x win
hacker@path~adding-commands:~$ PATH=~/
hacker@path~adding-commands:~$ /challenge/run
Invoking 'win'....
pwn.college{YVVrN_1ml0uGiAQ2ODsITTlLdaM.dZzNyUDLzQjN0czW}
hacker@path~adding-commands:~$
```




## Hijacking Commands

### Solve 


The flag : `pwn.college{8tcAuRDf722huAyNiyiBlkAfEgB.ddzNyUDLzQjN0czW}`

In this challenge, we need to trick `/challenge/run` into printing the flag by changing the `rm` comamnd.

> [!NOTE]
> To get the flag, we could create a file named rm that would display the flag. Subsequently, we could manipulate the PATH environment variable to prioritize our custom rm command, thereby deceiving /challenge/run into executing it and revealing the flag.

I used [nano](https://www.nano-editor.org/) to create a file named `rm` in the home directory:

```
read FLAG < /flag
echo $FLAG
```
I made it executabe for all users by running **`chmod o+x rm`**

Then I modify the PATH variable - `PATH=~/`

Finally I run `/challenge/run` to get the flag.


```

Connected!
hacker@path~hijacking-commands:~$ nano rm
hacker@path~hijacking-commands:~$ chmod o+x rm
hacker@path~hijacking-commands:~$ PATH=~/
hacker@path~hijacking-commands:~$ /challenge/run
Trying to remove /flag...
pwn.college{8tcAuRDf722huAyNiyiBlkAfEgB.ddzNyUDLzQjN0czW}
hacker@path~hijacking-commands:~$

```
# END


