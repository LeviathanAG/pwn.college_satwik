# Terminal Multiplexing

This module is about terminal multiplexing.

- [Terminal Multiplexing](#terminal-multiplexing)
  - [Launching Screen](#launching-screen)
    - [Solve](#solve)
    - [new learning](#new-learning)
  - [Detaching and Attaching](#detaching-and-attaching)
    - [Solve](#solve-1)
  - [Finding Sessions](#finding-sessions)
    - [Solve](#solve-2)
  - [Switching Windows](#switching-windows)
    - [Solve](#solve-3)
  - [Detaching and Attaching (tmux)](#detaching-and-attaching-tmux)
    - [Solve](#solve-4)
  - [Switching Windows (tmux)](#switching-windows-tmux)
    - [Solve](#solve-5)
- [END](#end)

## Launching Screen

### Solve


Flag: `pwn.college{QE7-74Zs9G4Ki1_KkcSCTBysc9d.QX1gjM4EDLzQjN0czW}`

got the flag by typing `screen` in the terminal.



```
Congratulations! You're inside a screen session!
Here's your flag:
pwn.college{QE7-74Zs9G4Ki1_KkcSCTBysc9d.QX1gjM4EDLzQjN0czW}
hacker@terminal-multiplexing~launching-screen:~$ /ch
```

### new learning 

screen is a program that creates virtual terminals inside your terminal. It's somewhat like having multiple browser tabs, but for your command line

## Detaching and Attaching



### Solve

Flag: `pwn.college{c3NMXysOr3G6FeQJgFpDhumKqTk.QX2gjM4EDLzQjN0czW}`

did `screen`irst then did ctrl-a and d to detch ran `/challenge/run` and then reattached the screen using `screen -r` to read the flag.


```
hacker@terminal-multiplexing~detaching-and-attaching:~$ echo Yes! Flag is: pwn.college{c3NMXysOr3G6FeQJgFpDhumKqTk.QX2gjM4EDLzQjN0czW}
Yes! Flag is: pwn.college{c3NMXysOr3G6FeQJgFpDhumKqTk.QX2gjM4EDLzQjN0czW}
hacker@terminal-multiplexing~detaching-and-attaching:~$
```


## Finding Sessions



### Solve

Flag: ``

use `screen -ls` to fuind session abd bruteforce read them to get the flag.

```
hacker@terminal-multiplexing~finding-sessions:~$ screen -ls
There are screens on:
        155.pts-0.terminal-multiplexing~launching-screen        (Remote or dead)
        144.pts-0.terminal-multiplexing~detaching-and-attaching (Remote or dead)
        147.session_0c8ab488d2b1f4a4    (Remote or dead)
        150.session_ad784ef341677596    (Remote or dead)
        145.session_1d6b61b147bf97c9    (Detached)
        148.session_8be082c834346bcb    (Detached)
        151.session_83f34f53470d9d38    (Detached)
7 Sockets in /home/hacker/.screen.
hacker@terminal-multiplexing~finding-sessions:~$ screen -r session_1d6b61b147bf97c9
[detached from 145.session_1d6b61b147bf97c9]
hacker@terminal-multiplexing~finding-sessions:~$ screen -r 148.session_8be082c834346bcb
[detached from 148.session_8be082c834346bcb]
hacker@terminal-multiplexing~finding-sessions:~$ screen -r  151.session_83f34f53470d9d38
[detached from 151.session_83f34f53470d9d38]
hacker@terminal-multiplexing~finding-sessions:~$
```

```
hacker@terminal-multiplexing~finding-sessions:~$  echo 'Congratulations! You found the right session!'
Congratulations! You found the right session!
hacker@terminal-multiplexing~finding-sessions:~$  echo pwn.college{4Gn13ygCvsWphkBqzBzXftpku3n.QX3gjM4EDLzQjN0czW}
pwn.college{4Gn13ygCvsWphkBqzBzXftpku3n.QX3gjM4EDLzQjN0czW}
hacker@terminal-multiplexing~finding-sessions:~$
```

## Switching Windows

### Solve

Flag: `pwn.college{AbL0ERCaIXXQtpFo8cW31PGSyzd.QX4gjM4EDLzQjN0czW}`

`screen -r` into the terminal and it asks us to `ctrl-a 0` to go to window 0 to get the flag 

```
hacker@terminal-multiplexing~switching-windows:~$  cat <<MSG
> Excellent work! You found window 0!
> Here is your flag: pwn.college{AbL0ERCaIXXQtpFo8cW31PGSyzd.QX4gjM4EDLzQjN0czW}> MSG
Excellent work! You found window 0!
Here is your flag: pwn.college{AbL0ERCaIXXQtpFo8cW31PGSyzd.QX4gjM4EDLzQjN0czW}
hacker@terminal-multiplexing~switching-windows:~$
```

## Detaching and Attaching (tmux)

### Solve

Flag: `pwn.college{oHKivRSjLC5X8awb64V2hafqgMR.QX5gjM4EDLzQjN0czW}`
```
Launch tmux
Detach from it.
Run /challenge/run (this will send the flag to your detached session!)
Reattach to see your prize

```
```
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$ tmux
[detached (from session 0)]
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$ /challenge/run
Found detached tmux session: 0
Sending flag to your tmux session...

Flag sent! Now reattach to your tmux session with:
  tmux attach

You'll find the flag waiting for you there!
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$ tmux attach
[detached (from session 0)]
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$
```


```
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$  echo Congratulations, here is your flag: pwn.college{oHKivRSjLC5X8awb64V2hafqgMR.QX5gjM4EDLzQjN0czW}
Congratulations, here is your flag: pwn.college{oHKivRSjLC5X8awb64V2hafqgMR.QX5gjM4EDLzQjN0czW}
hacker@terminal-multiplexing~detaching-and-attaching-tmux:~$ 11;rgb:0c0c/0c0c/0c0c
```

## Switching Windows (tmux)

### Solve



Flag: `pwn.college{AD3vlq4kIbQpAVatRMtU7H2-2R6.QXwkjM4EDLzQjN0czW}`

same thing as previous windows switching chall but with tmux.

key combos : 

```
Ctrl-B c - Create a new window
Ctrl-B n - Next window
Ctrl-B p - Previous window
Ctrl-B 0 through Ctrl-B 9 - Jump to window 0-9
Ctrl-B w - See a nice window picker
```

```
hacker@terminal-multiplexing~switching-windows-tmux:~$  cat <<MSG
> Excellent work! You found window 0!
> Here is your flag: pwn.college{AD3vlq4kIbQpAVatRMtU7H2-2R6.QXwkjM4EDLzQjN0czW}> MSG
Excellent work! You found window 0!
Here is your flag: pwn.college{AD3vlq4kIbQpAVatRMtU7H2-2R6.QXwkjM4EDLzQjN0czW}
hacker@terminal-multiplexing~switching-windows-tmux:~$
```

```
hacker@terminal-multiplexing~switching-windows-tmux:~$ tmux attach
[detached (from session challenge_session)]
hacker@terminal-multiplexing~switching-windows-tmux:~$
```

# END
