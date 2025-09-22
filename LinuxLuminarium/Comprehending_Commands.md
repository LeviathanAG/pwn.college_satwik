# COMPREHENDING COMMANDS

## cat: Not the pet, but the command

### Solve : 

I ran the `cat flag` command in the `~` home directory to get the flag.

**Flag:** `pwn.college{kL7G5s8n5WUjuI1hyOwM7BYY7UJ.dFzN1QDLzQjN0czW}`

```
hacker@commands~cat-not-the-pet-but-the-command:~$ cat flag
pwn.college{kL7G5s8n5WUjuI1hyOwM7BYY7UJ.dFzN1QDLzQjN0czW}
hacker@commands~cat-not-the-pet-but-the-command:~$
```

### New Learnings

In this module, we learn about useful linux commands annd their usecases.

One of the most critical Linux commands is cat. cat is most often used for reading out files.

cat will concatenate (hence the name) multiple files if provided multiple arguments.

If you give no arguments at all, cat will read from the terminal input and output it.

In this challenge, the flag was in the flag file in the `~` home directory basically.

---

## Catting absolute paths

### Solve : 

I read it by specifying the absolute path in the argument i.e `cat /flag` to get the flag.

**Flag:** `pwn.college{kcb11gRNs7WW__0X6FVLtkdz56q.dlTM5QDLzQjN0czW}`

```
hacker@commands~catting-absolute-paths:~$ cat /flag
pwn.college{kcb11gRNs7WW__0X6FVLtkdz56q.dlTM5QDLzQjN0czW}
hacker@commands~catting-absolute-paths:~$
```


### New Learnings

In this challenge, the file to be read wasn't in the home folder.

---

## More catting Practice

### Solve : 

I typed the command `cat /lib/maxima-sage/flag` to read and retrieve the flag.

**Flag:** `pwn.college{M9ZKYPYK1erGcdajAEykqdvYQGs.dBjM5QDLzQjN0czW}`

```
hacker@commands~more-catting-practice:~$ cat /lib/maxima-sage/flag
pwn.college{M9ZKYPYK1erGcdajAEykqdvYQGs.dBjM5QDLzQjN0czW}
```

### New Learnings

In this challenge, I had to give absolute paths as arguments to the `cat` command and `cd` was disabled.

---

## grepping For A Needle In A Haystack

### Solve : 

I used the command `grep pwn.college /challenge/data.txt` to retrieve the flag.

**Flag:** `pwn.college{EeZ_crwai4zHh6Oeo991aRyTC9w.ddTM4QDLzQjN0czW}`

```
hacker@commands~grepping-for-a-needle-in-a-haystack:~$ grep pwn.college /challenge/data.txt
pwn.college{EeZ_crwai4zHh6Oeo991aRyTC9w.ddTM4QDLzQjN0czW}
hacker@commands~grepping-for-a-needle-in-a-haystack:~$
```


### New Learnings

When the files we `cat` are too big to read, we can use `grep`.

In this challenge, we had to implement `grep` to get the flag.  
The given path was `/challenge/data.txt`.  
They also gave us the search_string arguement as pwn.college.

---

## Companring Files : 

### solve : 
used diff on the two files and got the flagg.

Flag : `pwn.college{YHoo_byI99MrLdI9X0SDvcvkp8o.QXzAzM4EDLzQjN0czW}` 

```
hacker@commands~comparing-files:~$ diff /challenge/decoys_only.txt /challenge/decoys_and_real.txt
56a57
> pwn.college{YHoo_byI99MrLdI9X0SDvcvkp8o.QXzAzM4EDLzQjN0czW}
hacker@commands~comparing-files:~$

```

### new Learnings : 

can use diff to implement my own git implementation to check the difference between /origin branch and local branch.



## Listing files

### Solve : 

I had to list the files in the /challenge directory using `ls /challenge` which gave me two files.  
I ran the command `/challenge/26577-renamed-run-31762` which gave me the flag:

**Flag:** `pwn.college{csrftNXhjjijOLLo0oAcogZeKvc.dhjM4QDLzQjN0czW}`

```
hacker@commands~listing-files:~$ ls /challenge
26577-renamed-run-31762  DESCRIPTION.md
hacker@commands~listing-files:~$ /challenge/26577-renamed-run-31762
Yahaha, you found me! Here is your flag:
pwn.college{csrftNXhjjijOLLo0oAcogZeKvc.dhjM4QDLzQjN0czW}
hacker@commands~listing-files:~$
```

### New Learnings :

In this challenge, we learn the `ls` command to list the files in a directory.  
`ls` will list files in all the directories provided to it as arguments, and in the current directory if no arguments are provided.

---

## touching files

### Solve : 

**Flag:** `pwn.college{YLf4OXDMwOedM96oZfWFE_uCBSu.dBzM4QDLzQjN0czW}`


I used the command `cd /tmp` and then `touch pwn` and `touch college` to create new files in `/tmp` and ran the command `/challenge/run` to get the flag.

```
hacker@commands~touching-files:~$ cd /tmp
hacker@commands~touching-files:/tmp$ touch pwn & touch college
[1] 158
[1]+  Done                    touch pwn
hacker@commands~touching-files:/tmp$ ls
bin  college  hsperfdata_root  pwn  tmp.TpSOPGOVKK
hacker@commands~touching-files:/tmp$ /challenge/run
Success! Here is your flag:
pwn.college{YLf4OXDMwOedM96oZfWFE_uCBSu.dBzM4QDLzQjN0czW}
hacker@commands~touching-files:/tmp$

```

### New Learnings :

In this challenge, we had to create two files `pwn` and `college` in the tmp directory by `cd`ing into the `tmp` directory.

---

### Removing files

### Solve : 

**Flag:** `pwn.college{gpP6tp9VlcomO5OJT42o3_cz2E6.dZTOwUDLzQjN0czW}`

I had to `rm delete_me` to delete the file in the `~` or /home directory and run `/challenge/check` to retrieve the flag.

```
hacker@commands~removing-files:~$ rm delete_me
hacker@commands~removing-files:~$ /challenge/run
bash: /challenge/run: No such file or directory
hacker@commands~removing-files:~$ ls
 COLLEGE   Desktop   PWN   a   college   instructions   myfile   myflag   not-the-flag   output   pwn   rm   the-flag   win   x.sh  '~'
hacker@commands~removing-files:~$ /challenge/check
Excellent removal. Here is your reward:
pwn.college{gpP6tp9VlcomO5OJT42o3_cz2E6.dZTOwUDLzQjN0czW}
hacker@commands~removing-files:~$

```



### New Learnings

In this challenge, we learn about `rm` which removes/deletes files.

---

## Moving Files : 


### Solve :


Flag : `pwn.college{0GpwCkeEj6ll4JV9Dz5AOSjHXzq.QX5ETM3EDLzQjN0czW}`



```
Connected!
hacker@commands~moving-files:~$ mv /flag /tmp/hack-the-planet
Correct! Performing 'mv /flag /tmp/hack-the-planet'.
hacker@commands~moving-files:~$ /challenge/check
Congrats! You successfully moved the flag to /tmp/hack-the-planet! Here it is:
pwn.college{0GpwCkeEj6ll4JV9Dz5AOSjHXzq.QX5ETM3EDLzQjN0czW}

hacker@commands~moving-files:~$

```

### New Learnings : 

Used `mv` anmd learnt the params. Basically 1st param is the file u want to move and the 2nd is the file u wnat to move the 1st param into.

## Hidden files

### Solve : 


**Flag:** `pwn.college{IBXRlfd1f307JlBqGRhsV4xSati.dBTN4QDLzQjN0czW}`


I ran the command `cd /` and then ran `ls -a` to view the list of files including the hidden ones.  
I ran the command `.flag-38041226126017` to retrieve the flag.

### New Learnings

`ls` doesn't list all the files by default. Linux has a convention where files that start with a `.` don't show up by default in `ls` and in a few other contexts.  
To view them with `ls`, you need to invoke `ls` with the `-a` flag.  
To solve this challenge which was to find the hidden file, I `cd`ed to `/` and listed all files including hidden ones.

---

### An Epic Filesystem Quest

### Solve : 


**Flag:** `pwn.college{kj6fZq4LjUXjM25DMPgM-TQWa2_.dljM4QDLzQjN0czW}`

Using a combination of `cd`, `ls -a`, and `cat`, I navigated directories and read files in the following order:
```
cd /
ls -a
cat README
cd /opt/linux/linux-5.4/drivers/gpu/drm/nouveau/nvkm/engine/ce
ls -a
cat .SPOILER
cd /usr/lib/python3/dist-packages/future/moves/dbm/pycache
ls -a
cat DOSSIER
cd /usr/share/racket/pkgs/typed-racket-doc/typed-racket/scribblings/reference/compiled
ls -a
ls -a /usr/share/racket/pkgs/math-lib/math/private/compiled
cat /usr/share/racket/pkgs/math-lib/math/private/compiled/INFO_TRAPPED

```




### New Learnings

Using all the previous commands, I set out to solve this "game".  
I first `cd`ed to the `/` directory.  
Then I used the `ls` command which didn't yield me anything worthwhile, then I tried `ls -a` which gave me a `README` file and then I ran `cat README` to read the file which gave me new file locations as a clue.  
With the new clues, I navigated directories using `cd` and used `ls -a` and `cat` to follow the path until securing the flag.  
Some files were INFO-TRAPPED, requiring direct path access without `cd`.

---

### making Directories

### Solve : 

**Flag:** `pwn.college{QE0o9I_kr3UQm5Vn1IRWMyZKtPB.dFzM4QDLzQjN0czW}`

I used `cd /tmp` to `cd` into `tmp`, then `mkdir pwn` to make a directory, `cd /tmp/pwn` to enter it, `touch college` to make a file, and ran `/challenge/check` to retrieve the flag.



### New Learnings

You can make directories using the `mkdir` command.

---

### Finding files

### Solve : 

**Flag:** `pwn.college{owddE55MKhAdhFGeXWLvtOnHq7v.dJzM4QDLzQjN0czW}`

I `cd`ed into `/` and ran `find -name flag`, then used `ls -a` and `cat` suitably to get the flag.



### New Learnings

We use the `find` command to find files.  
The `find` command takes optional arguments describing the search criteria and the search location. If you don't specify a search criteria, find matches every file. If you don't specify a search location, find uses the current working directory `(.)`.

---

### Linking files

### Solve : 

I tried `/challenge/catfalg` but to no avail.  
Then I tried `ln -s /flag /home/hacker/not-the-flag` and then `/challenge/catflag` which gave me the flag:

**Flag:** `pwn.college{cs1gVEd5Ke4fukDzgEUIdSf-zru.dlTM1UDLzQjN0czW}`

### New Learnings

In this challenge, we learn about linking.  
Links come in two flavors: hard and soft (also known as symbolic) links.
