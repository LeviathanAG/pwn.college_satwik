# Data Manipulation

- [Data Manipulation](#data-manipulation)
  - [Translating Characters](#translating-characters)
    - [Solve](#solve)
    - [New Learnings](#new-learnings)
  - [Deleting Characters](#deleting-characters)
    - [Solve](#solve-1)
    - [New Learnings](#new-learnings-1)
  - [Deleting Newlines](#deleting-newlines)
    - [Solve](#solve-2)
    - [New Learnings](#new-learnings-2)
  - [Extracting the First Lines with Head](#extracting-the-first-lines-with-head)
    - [Solve](#solve-3)
    - [New Learnings](#new-learnings-3)
  - [Extracting Specific Sections of Text](#extracting-specific-sections-of-text)
    - [Solve](#solve-4)
    - [New Learnings](#new-learnings-4)
  - [Sorting Data](#sorting-data)
    - [Solve](#solve-5)
    - [New Learnings](#new-learnings-5)
- [END](#end)

## Translating Characters

### Solve

**Flag:** `pwn.college{0own_No0FwEJclz7bkKt4peF55T.QXzETM3EDLzQjN0czW}`

i ran the `/challenge/run` first and then
i ran the command again but then piped it to tr with capital alphabets as 1st argument and small letters as 2nd argument

```
hacker@data~translating-characters:~$ /challenge/run
Your case-swapped flag:
PWN.COLLEGE{0OWN_nO0fWejCLZ7BKkT4PEf55t.qxZetm3edlZqJn0CZw}

hacker@data~translating-characters:~$ /challenge/run | ABCDEFGHIJKLMNOPQRTSUVWXYZ abcedfghijklmnopqrstuvwxyz
bash: ABCDEFGHIJKLMNOPQRTSUVWXYZ: command not found
hacker@data~translating-characters:~$ /challenge/run |tr  ABCDEFGHIJKLMNOPQRTSUVWXYZ abcedfghijklmnopqrstuvwxyz
your case-swapped flag:
pwn.colldgd{0own_no0fwejclz7bkks4pdf55t.qxzetm3edlzqjn0czw}

hacker@data~translating-characters:~$ /challenge/run | tr ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz abcdefghi
jklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
yOUR CASE-SWAPPED FLAG:
pwn.college{0own_No0FwEJclz7bkKt4peF55T.QXzETM3EDLzQjN0czW}

hacker@data~translating-characters:~$
```

### New Learnings

we can generate python scripts to generate huge char sets for tr and its probably useful on large datasets 

---

## Deleting Characters

### Solve

**Flag:** `pwn.college{0TJjBjZPBY4_FKoOoUD_0YhufJl.QX0ETM3EDLzQjN0czW}`

this question was quite simple all i had to do was understand the -d specifies deletion of characters.
regex.
```
hacker@data~deleting-characters:~$ /challenge/run
Your character-stuffed flag:
p%w%n%.^%c%o^l^l^%e^%g^%e^%{^0%T%J^j%B^%j^%Z%P^B^%Y%4^_^%F^%K^%o%O^o^%U^%D%_%0^%Y^%h^%u^%f^J^%l^.%Q^%X^%0^E%T^M^3%E^%D%L^z^Q^%j^%N^%0c^%zW%}^%^%
hacker@data~deleting-characters:~$ /challenge/run | tr -d %^
Your character-stuffed flag:
pwn.college{0TJjBjZPBY4_FKoOoUD_0YhufJl.QX0ETM3EDLzQjN0czW}
hacker@data~deleting-characters:~$
```

### New Learnings
i newly learnt tr doesnt accept regex / cannot translate regex expr

---

## Deleting Newlines

### Solve

**Flag:** `pwn.college{sruf9ien7mEgqcT84Tv8nqQQYsB.QX1ETM3EDLzQjN0czW}`

```
Connected!
hacker@data~deleting-newlines:~$ /challenge/run
Your line-split flag:
p
wn.
c
o
ll
eg
e{sr
u
f9ie
n7
mE
g
q
c
T
84
T
v
8
nqQ
Q
Y
sB
.Q
X1E
TM3E
D
Lz
QjN
0
c
z
W}
hacker@data~deleting-newlines:~$ /challenge/run | tr -d "\n"
Your line-split flag: pwn.college{sruf9ien7mEgqcT84Tv8nqQQYsB.QX1ETM3EDLzQjN0czW}hacker@data~deleting-newlines:~$
```

### New Learnings

nothing new its different variations of -d



---

## Extracting the First Lines with Head

### Solve

**Flag:** `pwn.college{skDz9QLGhnh4-nuXUde3D6u4u0n.QX2ETM3EDLzQjN0czW}`

```
hacker@data~extracting-the-first-lines-with-head:~$ /challenge/pwn | head -n 7 |/challenge/college
Congratulations, you piped the right codes!
pwn.college{skDz9QLGhnh4-nuXUde3D6u4u0n.QX2ETM3EDLzQjN0czW}
hacker@data~extracting-the-first-lines-with-head:~$
```

### New Learnings

have extensively used this a lot in forensics and networking (also some rev ig? idk i dont do rev that much) ctfs so nothing new here but tbh just use man to further run it through header wordlists or smth.

---

## Extracting Specific Sections of Text

### Solve

**Flag:** `pwn.college{kmSb-a6N7pIqLafqJt04-glH_O7.QX3ETM3EDLzQjN0czW}`

solution is quite simple just pipe the different commands we learned to output the flag selecting the second column and trimming the \n characters to get the flag


```
hacker@data~extracting-specific-sections-of-text:~$ /challenge/run | cut -d " " -f 2 | tr -d "\n"
pwn.college{kmSb-a6N7pIqLafqJt04-glH_O7.QX3ETM3EDLzQjN0czW}hacker@data~extracting-specific-sections-of-text:~$
```

### New Learnings
allows us to access columnar data using -d " " deleimiter that specifies 2 intra-row contents are separated by " " space and we use -f specifies which column to extrract. ig we can think of it as a 1-indexed 1d array that contains columnar indices

---

## Sorting Data

### Solve

**Flag:** `pwn.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}`

sorted by reverse it sorts rows so last row came to first and i got the flag easily.

```
hacker@data~sorting-data:~$ sort /challenge/flags.txt -r
pwn.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
pwn.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4ECLzQjN0bzW}
pwn.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXvQzM4EDLzQjN0czW}
pwn.college{EkeM7SibAExX-YljOt0K1Ew99H-.QXwQzM4ECLzQjN0czW}
pwn.college{EkeM7SibADxX-YljOt0J1Ew98H-.QXwQzM4EDKzPjN0cyW}
pwn.college{EkeM7ShbADxX-ZljOt0K1Ew99H-.PXwQzM4EDLyQjM0czW}
pwn.college{EkeM7RibAExX-ZljPt0K1Ev99H-.QWwQzM4EDLzQjN0czW}
pwn.college{EkeM7RhbAExX-ZljPt0K1Dv89H-.PXwPzM4EDKzQjN0czW}
pwn.college{EkeM6SibADxX-ZljPt0K1Ew99H-.QXwQzM4EDLzQiN0czW}
pwn.college{EkeM6RibAEwX-ZljPt0K1Ew99H-.QXwPyM3EDKzPiM0czV}
pwn.college{EkdM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0cyW}
pwn.college{EkdM7SibAEwX-ZliPs0K1Ew99H-.PXwQzM4EDLzQjN0czV}
pwn.college{EkdM7SiaAEwX-ZkiPt0K1Ew99H-.QWwPzL4EDLzQjN0czW}
pwn.college{EjdM7ShbAEwX-ZljPt0K1Ew99H-.QXwQzM4ECLzQjM0cyW}
pwn.college{DkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
pwn.college{DkeM7SibAExX-YljPs0J1Dw99G-.QXwPzM4ECLzPiN0czW}
pwn.college{DjeM7RhbAExX-ZliPt0K0Ew99H-.QXwQyL4EDLzQjN0cyW}
pwn.collegd{DkeL7SibAEwX-ZliOt0K0Ew89H-.PWwQzM4EDKyQiN0czW}
pwn.collefe{EkeM7SiaAEwX-YljPt0K1Ev99H-.QXwQzM4DDLzQjN0czW}
pwn.colldgd{EkeM7SibADxX-ZkjPs0J1Ew99H-.QXwQzM3EDLyQiN0cyW}
pwn.colldfd{EkeM7RibAExX-ZljPt0K1Ew89H-.QXwQzM4EDLzQjN0czW}
pwn.colkege{EkeM7ShbAExW-ZljPs0J1Ew99H-.QXwQyL3EDKzPjN0czV}
pwn.colkegd{EkeL7SibAExX-YljOt0K1Ew99H-.PWwPzM4ECLzQjN0czW}
pwn.coklege{EkeM7SibAEwX-ZkjPt0K1Ew99H-.QXwQzM3DCLzQjN0czW}
pwn.coklege{DkeM7SibAEwX-ZljPt0K1Ew89H-.PXwQyM4DCLzQjN0bzW}
pwn.coklegd{EkeM7ShbAEwW-ZliPt0J1Ev89G-.QWwQyM4EDLyQjM0czW}
pwn.cokldfd{EkdL7ShbADxW-YliPs0J1Ew88G-.PXwQyL4EDLzQjN0byW}
pwn.cokkege{EkeM6ShaAExX-ZkiOt0K1Ew98H-.QWwPzL4EDLzQjN0bzW}
pwn.cnllege{EkeM7RibAExX-ZljOt0K1Ew89G-.QXwQzM4EDKzPjN0czV}
pwn.cnllege{EkeM6ShbADxX-ZljPt0K1Dw99H-.QXwPzM4EDKzQiN0czV}
pwn.cnllege{EkdM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
pwn.cnllefe{EkeL6SibAEwW-ZljPt0K1Dw98H-.PWwQzM4EDLzPjM0czW}
pwn.cnllefe{DkeM7SibAExW-ZljPs0K1Ev99H-.QWwQzM4ECLzQjN0czW}
pwn.cnkkefe{EkdM7SibAExW-YljOt0K0Ew99H-.QXwQyL3DDLyQjM0czV}
pwn.bollege{EkeM7SibAExX-ZljPt0K1Ew98H-.QXwQzM4EDLyQjN0czW}
pwn.bollege{EkeM7SibAExX-ZljPt0K1Ev99H-.QXvQzM3EDLzQjN0czW}
pwn.bollege{EkeM7SibAExX-ZljPt0J1Ew99H-.QXwQzM4EDLzQjN0czW}
pwn.bollege{EkeM7SiaADxX-ZkjPs0K1Ew88G-.QXwQzL4EDLzPjN0bzW}
pwn.bollege{EkeM7RibAExX-ZljPt0K1Ew99H-.QXwQzM4DDLzQjN0cyW}
pwn.bollege{EkeM6RhbAEwX-ZljOt0K1Ew99H-.QXwQzM4EDKzQjN0czW}
pwn.bollege{DjeM7SibAExW-YliPt0J0Ew99H-.QXwQzM4DDLzQjN0czW}
pwn.bollegd{EkdM7RiaADxW-ZljPt0K1Ev99H-.QXwQzM4EDLyQjM0czW}
pwn.bolkefe{DkdL7SibAExX-ZkjPt0K1Ew99H-.PXwQyM3EDLyQiN0bzW}
pwn.boklege{EjeL7ShbAExX-ZljPt0K1Ew89G-.QXwQyM4EDLyQjM0bzW}
pwn.bnllege{EjdL6SibAEwX-YljPt0K1Dw89H-.PXvQyM4DCKzQiN0czV}
pwm.college{EkeM7SibAExW-ZkjPt0K1Ew89H-.QXwQzM4ECLzQjN0czW}
pwm.college{EkeM7ShbAExX-ZliOt0K1Ew88H-.QXwPzM4EDLzPjN0czW}
pwm.college{EkeL6SibADxX-ZkjPt0K1Ew99H-.QWwQyL4EDLzQiN0bzV}
pwm.college{EjeM7SibAExX-ZkjPt0K1Ev99H-.PXwQyM3EDLyQjN0czW}
pwm.college{DkeL7SibADwX-YljPt0K1Ew99H-.QXwQzM4EDLzPjN0czV}
pwm.collegd{EjeM7SibAExX-ZljOt0K1Ew99H-.QXwQzL4EDLzQjN0czW}
pwm.collefe{EjeM6RibADwX-ZkjPt0K1Dv99G-.QXvQzM4EDKzQjM0byV}
pwm.colkege{EkeM7SibAExX-ZkjPt0K1Ew99H-.QXwQzM4EDLzQiN0czV}
pwm.colkdge{EkeM7RibAExW-ZljPt0K1Dw99H-.QWwQyL4DDKzPjN0bzW}
pwm.colkdfe{EjdM6ShaAExX-ZkjOt0K0Ew89H-.PXwQzM4DCKzQjM0czV}
pwm.coklegd{DkdM6RiaADxW-ZljOt0J1Ew88H-.QXvQzM3EDLyPiM0czW}
pwm.cnlkege{EkeM7ShbAExW-ZliOt0J1Dw89H-.QXwPzL4EDLzQjN0czW}
pwm.cnlkefe{EkeM7RiaAExX-YkjOt0K1Ew98G-.QXwPzM4EDLyQjN0bzW}
pwm.cnlkdge{EkeM7SiaAExW-YljPt0J0Ev88H-.QWwQzM3EDKzQjN0czW}
pwm.cnlkdfe{EkdL7SibAExX-YliPs0K1Ev99G-.QXwPzM4ECLyQiM0byV}
pwm.cnklefd{EjeL7SibAExX-YkjPt0K1Ew98H-.PXwQzM4EDKzQjN0czV}
pwm.bollege{EkeM6SibAExX-ZljPs0K1Ew99H-.QXwPzM3EDLzQjN0czW}
pwm.bolldfe{EkdM7SibADxX-YliPt0K1Ew99G-.QXwPzL4DDLyPiN0byV}
pwm.bokkege{DjdL7SibAEwX-ZljOt0J1Ev98H-.QXvQzM3EDLzQjN0byW}
pvn.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLyQjN0czV}
pvn.college{EkeM7SiaAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
pvn.colkege{EjeM7RhbAExX-YkjOt0J0Dw99G-.PXvQyM4DDLyQjM0bzV}
pvn.cokkefe{EkeM6ShbAExX-ZliOt0K1Ev88H-.QXwQzM3ECLzQiN0bzW}
pvn.cnkldgd{DkeM7RibAEwW-YkiOt0K0Ev99G-.PWwPzM4DCLzPjN0bzW}
pvn.bolldfe{EkeM7RiaAExX-ZljPt0K1Ew99H-.PXwQyM4EDKzPjN0cyW}
pvn.bolkdgd{EkdM6SibAExW-YljPt0K1Ew98H-.QWwQzM3ECLzQjM0czW}
pvn.boklegd{DkeL6SibADxW-ZkiPt0K0Ev99G-.PXvPzM4EDLyQjN0byV}
pvm.college{EkeM7SibAExX-ZljPt0K1Ew98H-.QXvQzM4EDLyQiM0czW}
pvm.colldge{EjeM7ShbAEwX-YliOt0J1Ev88H-.QXvQyM3EDKyQjN0bzW}
pvm.coklefe{EkeM7SibAExW-ZkiPt0J1Dw88H-.QXvQyM3ECKyQjN0czW}
own.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
own.college{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjM0bzW}
own.college{EkeM7ShbAEwX-YliPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
own.college{EkeM6SibAExX-ZljPs0K1Ew99H-.QXwQzM4ECLzQjN0czW}
own.collegd{EkeM7SibAExX-ZljPt0K1Ew99H-.QXwQzM4EDLzQjN0czW}
own.collegd{DkeM7SibAEwX-ZljPs0K0Ew99G-.QWvQyL3EDLyQjN0czV}
own.collefe{EkeM7SibAExX-ZkjPt0K0Dw99H-.QXvQzM4EDLzQjN0bzW}
own.colkege{EkeM7SibAExX-ZkjPs0K1Ew99H-.QXvPzM4EDKzQjN0czW}
own.colkege{EkdL7SibADxX-ZljOs0K0Dw89G-.QWwPzM4EDLzPjM0czW}
own.colkdge{EkdM7ShbAExX-YljOt0J1Dw99G-.QXwQzM4ECKyQiN0cyW}
own.cnlkege{EjeM7ShaADxX-ZliPs0J0Dw98G-.QWvQzL4ECLzPiN0czW}
own.cnkldge{DkdM7RiaADxX-YljOt0K1Ev99G-.QXwQzM3EDKzQiN0cyW}
own.cnkkdgd{DkdM7ShaAEwX-YkjPt0K1Ev99H-.QXwQzM4DDLyQjN0cyW}
own.boklefd{EkeM7SiaADxW-ZljPt0K1Ev99H-.QXvPyM4EDLyPiM0czW}
own.bnklege{EkeM7SibADxX-ZkjPt0J0Ew98G-.PXwPzM3ECLzQjM0czV}
owm.college{DjeM6RhbAExX-ZliPt0K1Dw89H-.QWwQyM4DCKyPjN0cyW}
owm.colkefe{EkeM6RhbAEwX-YkjPt0J0Dw99H-.QXvQyM4EDKyPjN0czV}
owm.cokkege{EjeM7SiaAExW-YljOt0K1Dw99G-.QXwQyL3EDKzQjN0czV}
owm.cnklege{DkdM7SibAExW-ZkiPs0K0Ew89H-.QWwQzM4DDLzPiN0bzV}
owm.bolldgd{DjeL6ShbAExX-ZljOs0K1Dw99G-.PXvQyL4ECLzQiN0czW}
owm.bolkdge{EkeM6SibADxW-ZljPs0J1Ew89G-.PXwQzM3DDLyQjM0czW}
ovn.cokkdfe{EkeL7SiaAExX-YljOt0K1Ew99H-.QXwQzM4EDLyPjN0czV}
ovn.cnlldge{EjeL7SibAExW-ZliOs0K1Ew99H-.QWwPzM4EDKzQjN0bzW}
ovn.boklege{DjeM7ShaADwX-ZljPt0K1Dv99H-.PXwQyM4EDKzQiN0czW}
ovn.bnllege{DkeM7ShbADxW-ZljPs0K1Ew99H-.PXvPzM3DDKzPjM0cyW}
ovm.bolldge{EkeM7RibAExW-ZkjOt0K1Dw99H-.QXwQyL3EDLzQjM0czW}
```

### New Learnings
By default, sort orders lines alphabetically. Arguments can change this:

-r: reverse order (Z to A)
-n: numeric sort (for numbers)
-u: unique lines only (remove duplicates)
-R: random order!

useful args to the sort command

---

# END