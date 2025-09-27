# Processes and Jobs

- [Processes and Jobs](#processes-and-jobs)
  - [Listing Processes](#listing-processes)
    - [solve](#solve)
    - [new learning](#new-learning)
  - [Killing Processes](#killing-processes)
    - [solve](#solve-1)
  - [Interupting Processes](#interupting-processes)
    - [solve](#solve-2)
  - [Killing Misbheving Processes](#killing-misbheving-processes)
    - [solve](#solve-3)
  - [Suspending Processes](#suspending-processes)
  - [Resuming Processes](#resuming-processes)
    - [Solve](#solve-4)
  - [Backgrounding Processes](#backgrounding-processes)
    - [Solve](#solve-5)
  - [Foregrounding Processes](#foregrounding-processes)
  - [Starting Backgrounded Processes](#starting-backgrounded-processes)
    - [Solve](#solve-6)
  - [Process Exit Codes](#process-exit-codes)
    - [solve](#solve-7)
- [END](#end)
  

## Listing Processes

### solve

flag : `pwn.college{geelkf4gd-s1sWRj8zJERHpv4YV.dhzM4QDLzQjN0czW}`

In this challenge, `/challenge/run` has been renamed to a random filename and we must use the process snapshot to find it and hence get our flag.

I run `ps aux` which displays:
```
Connected!
hacker@processes~listing-processes:~$ pas aux
bash: pas: command not found
hacker@processes~listing-processes:~$ ps
    PID TTY          TIME CMD
    137 pts/0    00:00:00 ssh-entrypoint
    143 pts/0    00:00:00 bash
    158 pts/0    00:00:00 ps
hacker@processes~listing-processes:~$ client_loop: send disconnect: Broken pipe
ss@Satwik:~$ ssh -i key hacker@dojo.pwn.college
Connected!
hacker@processes~listing-processes:~$ ps -ef
UID          PID    PPID  C STIME TTY          TIME CMD
root           1       0  0 20:36 ?        00:00:00 /sbin/docker-init -- /nix/var/nix/profiles/dojo-
root           7       1  0 20:36 ?        00:00:00 /run/dojo/bin/sleep 6h
root         132       1  0 20:36 ?        00:00:00 /challenge/27545-run-11167
root         135     132  0 20:36 ?        00:00:00 sleep 6h
hacker       137       0  0 20:36 pts/0    00:00:00 /nix/store/0nxvi9r5ymdlr2p24rjj9qzyms72zld1-bash
hacker       143     137  0 20:36 pts/0    00:00:00 /run/dojo/bin/bash --login
hacker       159       0  1 20:44 pts/1    00:00:00 /nix/store/0nxvi9r5ymdlr2p24rjj9qzyms72zld1-bash
hacker       165     159  0 20:44 pts/1    00:00:00 /run/dojo/bin/bash --login
hacker       179     165  0 20:44 pts/1    00:00:00 ps -ef
hacker@processes~listing-processes:~$ cat /challenge/27545-run-11167
#!/opt/pwn.college/bash

if [ -z "$DOIT" ]
then
        export DOIT=yes
        exec -a $0 bash < $0
fi

echo "Yahaha, you found me! Here is your flag:"
cat /flag
echo "Now I will sleep for a while (so that you could find me with 'ps')."
sleep 6h
hacker@processes~listing-processes:~$ /challenge/27545-run-11167
Yahaha, you found me! Here is your flag:
pwn.college{geelkf4gd-s1sWRj8zJERHpv4YV.dhzM4QDLzQjN0czW}
Now I will sleep for a while (so that you could find me with 'ps').

```
Then I ran `/challenge/27545-run-11167` to get the flag.

### new learning 

learnt legacy ps -ef





## Killing Processes

### solve


The flag : `pwn.college{I4bVoqkNbb2D6mtyc_safDRyWgd.dJDN4QDLzQjN0czW}`

In this challenge, `/challenge/run` will refuse to run while `/challenge/dont_run` is running therefore we must kill the `/challenge/dont_run` process and run `/challenge/run` to get our flag. 

I use `ps aux | grep dont_run` which displays:
```
ss@Satwik:~$ ssh -i key hacker@dojo.pwn.college
Connected!
hacker@processes~killing-processes:~$ ps aux | grep dont_run
hacker       136  0.0  0.0 231576  3520 ?        Ss   12:19   0:00 /challenge/dont_run
hacker       160  0.0  0.0 230696  2560 pts/0    S+   12:19   0:00 grep --color=auto dont_run
hacker@processes~killing-processes:~$ kill 126
bash: kill: (126) - No such process
hacker@processes~killing-processes:~$ kill 136
hacker@processes~killing-processes:~$ /challenge/run
Great job! Here is your payment:
pwn.college{I4bVoqkNbb2D6mtyc_safDRyWgd.dJDN4QDLzQjN0czW}
hacker@processes~killing-processes:~$

```
The pid of the process is `136` so i kill it using `kill 136`and then i ran `/challenge/run` to get the flag :

```
ss@Satwik:~$ ssh -i key hacker@dojo.pwn.college
Connected!
hacker@processes~killing-processes:~$ ps aux | grep dont_run
hacker       136  0.0  0.0 231576  3520 ?        Ss   12:19   0:00 /challenge/dont_run
hacker       160  0.0  0.0 230696  2560 pts/0    S+   12:19   0:00 grep --color=auto dont_run
hacker@processes~killing-processes:~$ kill 126
bash: kill: (126) - No such process
hacker@processes~killing-processes:~$ kill 136
hacker@processes~killing-processes:~$ /challenge/run
Great job! Here is your payment:
pwn.college{I4bVoqkNbb2D6mtyc_safDRyWgd.dJDN4QDLzQjN0czW}
hacker@processes~killing-processes:~$
```


## Interupting Processes

### solve 
The flag : `pwn.college{k_1ZAUlLylL0nPanowg8wjBSpeL.dNDN4QDLzQjN0czW}`

In this challenge, we must "interrupt" the process `/challenge/run` to get our flag.

I run `/challenge/run` to start the process and then hotkey `Ctrl+C` to interrupt the process to get the flag :

```
Connected!
hacker@processes~interrupting-processes:~$ /challenge/run
I could give you the flag... but I won't, until this process exits. Remember,
you can force me to exit with Ctrl-C. Try it now!
^C
Good job! You have used Ctrl-C to interrupt this process! Here is your flag:
pwn.college{k_1ZAUlLylL0nPanowg8wjBSpeL.dNDN4QDLzQjN0czW}
hacker@processes~interrupting-processes:~$
```

## Killing Misbheving Processes

### solve 

The Flag : `pwn.college{Il0varcevWkQO8w4dSDwRI5hbS5.QX0MzM4EDLzQjN0czW}`
this was a little confusing in the sense that the explanation was not clear on what was going on but i managed to figure it out. basically : `/challenge/run` stdouts the real flag but `/tmp/flag_fifo` is being hogged by decoy process rn so if i cat the fifo file it will show the decoys so i terminate it then stdout `/challenge/run` into `fifo_flag` whcihs starts the fifo pipeline and then cat to get the flag
```
hacker@processes~killing-misbehaving-processes:~$ ps aux | grep decoy
root         139  0.0  0.0   5204  3520 ?        S    12:34   0:00 su -c exec /challenge/decoy > /tmp/flag_fifo hacker
hacker       142  0.2  0.0  13516  9280 ?        Ss   12:34   0:00 /usr/bin/python /challenge/decoy
hacker       165  0.0  0.0 230696  2560 pts/0    S+   12:34   0:00 grep --color=auto decoy
hacker@processes~killing-misbehaving-processes:~$ kill 139
bash: kill: (139) - Operation not permitted
hacker@processes~killing-misbehaving-processes:~$ kill 142
hacker@processes~killing-misbehaving-processes:~$ /challenge/run
Sending the flag to /tmp/flag_fifo!
^C
hacker@processes~killing-misbehaving-processes:~$ cat /tmp/flag_fifo
pwn.college{5IsmM.N3KBQhMnnZ7OXOfkOniWyTqMHZvjQCkZo1VUizvW}
pwn.college{TF.Kebiwk1blOg9Flxu-Kw1hhGsv3ggdTDr.7xKAWdUeuB}
pwn.college{qJ8fcW2Iws0RVGcj4.HqX2MSMjKESYCLS1-ci.eP497zQr}
pwn.college{HHStmPCrwU50-HvBiJHF97QazL1ruiHxWDMT0NxvLI1l7k}
pwn.college{RzF9f-bGAclxrAqLw9gJHkPJQlfH-YchPGGoj.BSmKJBSa}
pwn.college{QbratsmJI4x11acjr0NCV0KPYEralCybexLQmmmmcXN1Ku}
pwn.college{wIV5NjwfGjjHIrRXPlYaicaeT4LapOe6PVRJ0q0PdiOLR-}
pwn.college{8gMZh9KX7Ff1CDm695Mc-JAvvrRVUrKsIMFT2Z1c8o5l1j}
pwn.college{g0SV2BD7f.r8r-W3Rg8IZroBtAmqVvCe2XmpJUZCd9ZvrC}
pwn.college{cw8S.u.NuxfBQydX4kwPi9Ca6CsTobMGBoVcondBSc5DLV}
pwn.college{7M4HAfBYZ1bJHBHAIhBHg6kdLbAJITkMs4kVuzG1BobHiQ}
pwn.college{36KI2S-Ddf17fFRc4YlcO7OwSRbzlSxLVv90JkU2x1kCQw}
pwn.college{z7kGozMTzMpvT8llPUV4Auv8rLmmkRgZqbv1qL04Zn-ld.}
pwn.college{LpbsZiz-Z7iF.m5PS9pbBwzLSxCR2e9ImSRO5aEjASRwTz}
pwn.college{1w8IEpY2JwFvOVAZnOC9UG-jdJQojPxcCdDGXmonkkGppy}
pwn.college{qG4aAuGCGiD.QzIkSNzgmiXEPhHAS209.UjVAREucIYK98}
pwn.college{r3F2eDlRk44TVSVQ5bcA3jjgNtE9dKPJRhfDHW8qzkImEf}
pwn.college{FbgTkZSH7R-ORTXOeEVkmLxoSQKUDKyRAPDQ30uNVEmWOE}
pwn.college{2UCa6DOOjr8T7Aqf7LOTi.lDBhZjxw8yc5pXpZcnk004g-}
pwn.college{U-C4tthorw-9LRaTTM-mMMcDIG3pgNQCDhWab-dHzU18Kd}
pwn.college{zGC01-TJSZiS1sQyGICCH.0kI-gQTpA-2i1BiL7y67b4hR}
pwn.college{hf9UtYBI.Ky3fzwrMAY4MQFh8hCjU5LFdyBfyNKglfsXrO}
pwn.college{GDXILqAf0jr-m7emJxHCJYC.Pwqcxj98VXxKHaUlxJ85Mr}
pwn.college{dYrj8H4a543YzIxi.hbuOEt19iGRGJTgmY-UAJoJSp7MjP}
pwn.college{y8a56eE6AFErFMQyCZQCvl6kjgkjh8ydPAkcIcuMNbCE2b}
pwn.college{jHxetWN7kEeM9Qc1KM8KNX7UYntTe8vZ0mIb8Hsb4bpq83}
pwn.college{I-IjMpgGNvEIaPNTXLRg3nrt60ZmbAh3ZbYQ2pDXY52R9y}
pwn.college{Kayb986o650ascrVPjlxsWeyXSVumWBjV2LAXNV.0r.l2v}
pwn.college{hRyFKnALp-9wAougoRB1iyvC0qjVg8a4iDwontKk-ZXcg4}
pwn.college{w2yPkaYr8rTblTTo47yvkdIjVFo7fRJN5n4.PU4s-30l6Z}
pwn.college{sEGmcfdZoAjnriS8noXWUKIz33nb7okS0BXSkYDL9VIfj8}
pwn.college{uJCKR5QzUol55OUwoKvh2SyWuGvx1kf7ar37Lxjt16wtr.}
pwn.college{NHlLSCan34aTpESyfM21b4KSJ-jF9s-P-CCHLce5A2ulmI}
pwn.college{rLzMCrHzjlqDeAPtT.Jv83M2tNnj4PtRQz4z14G0l7GPNz}
pwn.college{mYDHqs2mnDq-io6VW-ViuyOZcP872jDzcMFrd5sJ.OwjRn}
pwn.college{nopikBH82CzBDPFQ8jhtHUm7xuTVLP5dxS-dg3zAT9Kb.J}
pwn.college{IONTUeiLkkpAOeDC14ZRI.B.hBkWF9Q6F1.xfhzxrnajPe}
pwn.college{DaycxBLVoFLa15adb0tFEL0t2m66bQbQjOhof17VntWl4n}
pwn.college{HFt8WhlcP3DfDbs4KOZ.rRxMiQgUPJOFuKQ6IE8-3usGFT}
pwn.college{eBsDhlF3pGjLoTQ5J23aWsslraR0agWNPUwHkrir5JlKSV}
pwn.college{vNLM.LPT9DJ7dLwtD.2ufyQ9sPEoxc7EEiYFDwMx4r.3sL}
pwn.college{GJHeMV.vrgHOIWNyu7unWhCjynO970zpEWfItZLykUJnp0}
pwn.college{Bu-GD4uhTraajuQ13kAtnao0E4kvddJbCgLjsq12wmgx1e}
pwn.college{aF9ZBEnnjrHEwsQaRDvk9.EbQoOyc-Zelbu9o1LIvUGrXj}
pwn.college{vQkW2mXAQeN4.5IQYfLmVVEkzMEvhed61z4wIaqs-hFbts}
pwn.college{1YovgqqifqA1.XCKRc46okPnnkteEP6qPefv-0I7vPiIiY}
pwn.college{sVVQY1uVlUsMA24dnoXVyLyV86bhkZjxmCeKx1V4DmOZRr}
pwn.college{WEs3cCXOAly0okcw16atbxoeTWeEttinujRc58qYK8JN3m}
pwn.college{h1iEUEnxWyKzgjHLyTjVBIyjwXguSRKYqA6J9Q4wdqE4mN}
pwn.college{-WAGe7lZN5WKt09YBjH.gB.mVA.8VdokU675bscOHqlzT5}
pwn.college{PvHE6h.6PAWbBLzUFfCOQUg1QeqsmlxQGjR0w9EHPR64aX}
pwn.college{6I3ADkyX-LwxetWgB4ZpVFO6XYS2VYFehrQn2-YQ47IayG}
pwn.college{o8aZrMfbhXVUbTRsyXRe-73Xc7hzAe8gVGT.vBw9M1SXtq}
pwn.college{6CZszBe3mLkjsHXBZ3-HuR4j40r64qTodEB7agYOdgCTkO}
pwn.college{fK6ZWF1.oaOvoXCfyTRmXjkOU2LohIk012Deo3t-t01shH}
pwn.college{YGO0puZIBk0.t6ARCDibAEU-9qk586aa3E.ud5xSSRTgbA}
pwn.college{tJ9MSbI2tWIqid-R6Z0xvQFQ8oMgL4zvgnJHch0JEyew3D}
pwn.college{N1dMDFgTVxUGfY.E4-5Pa2b4voFK3i3jMzNR.UIzYmtQ.M}
pwn.college{XPZHIjEbV31xoAlHh7dq04pera5wbwGncyEu6vocCDWlVd}
pwn.college{mnSMTmOLeNukz83dk3prPgUdZlqttpqqkKREl1yulMpyMX}
pwn.college{wP0epT.aF6TpyYwqsr3nkgRc9CPQcCel4LlruUz9NV5JsD}
pwn.college{F0dQw2C82HdSpoUv-bWkCHTk4NJ7LHoha.T-g6HEAGXDni}
pwn.college{O1nJx6sIU5I4-ojw-Bk6wg-63axYsyaUgHW7SCjHHWjdvk}
pwn.college{DxDE8oFEuUmwlMgc7Ly.IWptQFzDyn.xb0ouk50MCkNwYZ}
pwn.college{crF03El1WHx7rBf74BGatHKywbHNkhi19PSYX4oovGan3N}
pwn.college{5L3LATUiCSqN0rijCywyk3Q-Q0RjAxaViwWF5BZvZu.e7g}
pwn.college{4SE-KLDKhFnmf8zNJM2N1o4IQwpaNCqC6bQPmYvOoGzuTQ}
pwn.college{iIylqczFs9igAdK8kkKv6cG6xxdr1W6bcIs8x2c2cZe1zw}
pwn.college{Hz4Hek1gr3yZL3VjRO4BLrA2oD91YmoR1Gt.aBi--p8PWO}
pwn.college{CY5abf8eb3gF6N8w9JR4GBnamV77uhkjd478jkSN5QNR8N}
pwn.college{F3GTc3w85GAxtIME3wFo4WdlRtMGRCydD1vAwlMYrfXFkn}
pwn.college{RrugcjQC9E.ruMPqzUr3nRaSS4hp1.XqcrV.de-77mm9e2}
pwn.college{HgaCRGi.yMT48Oe0SQ2Xy7pcSZ1dMtRPO8d-hwDbOIBU9I}
pwn.college{6qAGR1nbOp1uh7dDR5weF2WEMOz3qEweS6dSHR3PbgJ2gA}
pwn.college{UXDePLcqZH7BFlrY8DtIki-cecq1u.eSncyrMybCWBmoov}
pwn.college{O5E37oWaAC7UsKf.2rcEyssvWaftm4RbkxeZNTbv.CO2xr}
pwn.college{Dru1nynmrSfZTfvIsjD.ox0IjPVrapXQsc7qHZb75odeWX}
pwn.college{1gWPz3dPVXKsQYy-kkhoDuPKs9DYaUr8E.Z8JemWQomRnx}
pwn.college{QHJBn8Alzr.6-RBHlVt9qXqv3xNdC8Vjo.57s89LtXxYa7}
pwn.college{FxKrPsErgdxA9SgDqQPFUxpqi8JKgGBjNPqgKp5kgM1XND}
pwn.college{IKw2wcrSQJJPXQxCqYsSEQiQiGnwAqbEnRXWHWi9jIPMyn}
pwn.college{66qG4-5GlIiGt1YDExhgdR67AXikFYP9d9SmnuEsnhXyLn}
pwn.college{aRywil0HVeTa2o6oRlu-Gjkvrc9T-CZ7SwK1mngMgkjokg}
pwn.college{.wCs3DM.A3p753YG4H4.4i49ZAQhEFMotcJh9T6AcX9nGe}
pwn.college{kor4Epc.Ry2fIxv9asAFioUVPGkRkzM7Gtu0bKDExZZgld}
pwn.college{va0bOPV.D7DjfcDyfXmHoG-DG50Mgy9AhrbgDjosEIjdlB}
pwn.college{fblkoILCkMO4ZMVff3uj9EqNwJKzGBDw5gJrLGsVS5tZGG}
pwn.college{yUA2C4J8x3UVZ9aymB50YXs6LbOnWw2I.-C.LoiZUtHQC0}
pwn.college{6Uml7Bg5UCKIvTBs2BNkLgt5EVUBNTe0nXEc3X.fHFeXde}
pwn.college{LuQIM5uiOBYv0-qfBlsDcPYlLJIe.4GMz8DuELE4szKeOC}
pwn.college{LM9i8knNlrq2WF8TQJvWeF8f4V97CSPxeH1Wyq6GhG4jrk}
pwn.college{.FH01.O3GVzV.X7W4nJbLBxn.UX4fLa2nVuM0Z3-MCEClj}
pwn.college{4scfpNbC8HHth4z7vjBZsunguGKEgD-2nAF1SaY7yO1GTI}
pwn.college{lvvJ3ZVHUEwncOUm5dUvtzZRv74UPx7SRT5MeAvfHuGkYT}
pwn.college{bLHsJLi5x7degHpGNJ3-QvPXPxSPw809Pi9s2ShQIHkr4y}
pwn.college{BU2wiQaMSfw5aBdVNnJYQYvQvk5BRHfP4QmnMDHxBOowTc}
pwn.college{l20.wjL2H71pVXc.bnj1Rhhs02F2AsFQYoBSmNQ4gXHdU-}
pwn.college{fTtNaLhPuLYSYxYZJmlh5XGfRTiUA20gjQo5xWhoJBVpkw}
pwn.college{cxS-gIU-Zf59IXF.glr1CsXUFTXRDpJKVsqX90rXkZWja5}
pwn.college{iJwR55LJzmkO-NvKpNGwaH51FRSB95otk8nZtye-tx5C1O}
pwn.college{.uC0abgLPB0wcidxQBNDjasrhijBCcXErO3vTcLu9i0w4l}
pwn.college{SBjke3ayyVHl9dO-KeNPKWEwL5oGlqG2.8SDi9S3Jk9sgM}
pwn.college{EsKwqoIZcyzsfaE.XlDPms9GG-g2TsaSJ.C.FZBdQXU5Re}
pwn.college{20rw5j7Nlg-EQGF8mgR3S.wtrgUREPKkavB3qCZP1.OgrF}
pwn.college{hgCpTm25DWMyr-t8XC7FgpTg.PJZkE4yb-LMtYL3ea6eVG}
pwn.college{ubu-YG535tF5yjxxqZAJoQCwwW2Peeyt3-NYRrYR.hKK-P}
pwn.college{m2Uq2okwFLR1oTyOMfTUaa1KkVefVQm9.QI767LrgLjlbg}
pwn.college{MGE9IT.QbQYazCW5hKrW1oZUaqBB804jfLZ4Zfc1IlkcCS}
pwn.college{UQJjdvkq3MV-ytaJ9pnFXvJIO58KIYM0FdlrW0Xt089eRc}
pwn.college{oDi752OXd9dDVc5ulzBjUM3c3r5yhWwgHpeS88BAcn71JC}
pwn.college{3elew2k78CEmSqplUGkratI1oPhPd2OsBoRUjd3IzMkxMt}
pwn.college{kkdzEdsQ6Wg-sE93Zi6ORnk7RbV.ZMw0z7rgdsp1QgOhAe}
pwn.college{SYZ4w.pVjLBO6tLeVYb9hcEFel1gQe3S6ouwV6XAWpRYfn}
pwn.college{VriXEm3fcxIf0fIcueFJ5.Luoylul.DeaySBBqjA-NX91f}
pwn.college{-Ev8EgKzvw0t71GuweyzwS9ZC.VuVcr13wXmo7nl9m3K7w}
pwn.college{.N6DjrLEW.toUj1jrVVabGQQ6taEum0AvI4BmQjskKc2i1}
pwn.college{dTkaMLyQBK.QIvItvO61796PRc2laVJrswBW85ryWeUTyq}
pwn.college{uC0yKsFLLO8l0DM-YPg.jO5.7PykSa.2j9sxQsrJVYE70U}
pwn.college{vBzvvR7DnGJKXBhLsX-l--Dmg.ygFehcd.X68pY2nh37de}
pwn.college{8HQQ0xyEUWIQ-NA.Kf1iuxE0riT8jhi2WPurc1fNdbsc2f}
pwn.college{PEk1ndo3s4KXnTymyNFylY4FdmlcFF.qskCVOUpAYH.Ffb}
pwn.college{humX2.ORgZtj6HN4lFrFqep.JbFS1yQRPSpKccq097WHet}
pwn.college{8u4wEbHl7fksucWFz9X2Tc8eEE0My3zxKfufy6USQ6m0hn}
pwn.college{ZzKPLjhBjEXaKjfT-nz-1sAegkZ8dU0ma4-qs.YOLgeTSp}
pwn.college{pD9an9fxHTATZPNAg7Z-g-uBCI4tKpTNAy8RqVL1BDhE5Z}
pwn.college{AmZTg2AteEN38LFKLsAjKzL6LcJT6KCxHiQgMKGdcGuTgc}
pwn.college{0O9c0CJbc1ExAi0E9ePe4ictNdlLnZ44gjyRNgYxN4Cs27}
pwn.college{-GtK2We7LxVTHm1EvuzcVb3P7H1lyXUlY2vsXY1SL2bg.k}
pwn.college{ROHMsc0gQNC-XI-0wf5sDUN-sFAR3idcPXrUk6no00iX0W}
pwn.college{RlCAG9rdPJVsDP6z6.kDIesDGeETNwD-5qT8kcZhuJf5Sf}
pwn.college{m8r9tCRxu43D19n2vYiqfhSWz9AnEOL9br6CknlVe-8FWn}
pwn.college{MmxPwvzDcdrXdSc5gkDkCsEKv-SjuEpFRkAWohqVTNH6W1}
pwn.college{WySgKnOYizAQ9wIMGAtYuco-AAmi2V7S.Y0UOh25ZSALmo}
pwn.college{6LWcbm7IkPFq1fgYbsii4n6kYIwms6v-D2pFODi-pzt56j}
pwn.college{gMypawR4cfdvvW7qOatuRY8RhBYrIKs2rL1fBji91Icly3}
pwn.college{MxudNuRGvTBp1QenIUziYXsXDqdWywfcFYfETa6AgiZ-7K}
^C
hacker@processes~killing-misbehaving-processes:~$ ps aux | grep decoy
hacker       172  0.0  0.0 230696  2560 pts/0    S+   12:36   0:00 grep --color=auto decoy
hacker@processes~killing-misbehaving-processes:~$ /challenge/run > /tmp/flag_fifo
You're successfully redirecting /challenge/run to a FIFO at /tmp/flag_fifo!
Bash will now try to open the FIFO for writing, to pass it as the stdout of
/challenge/run. Recall that operations on FIFOs will *block* until both the
read side and the write side is open, so /challenge/run will not actually be
launched until you start reading from the FIFO!
hacker@processes~killing-misbehaving-processes:~$ cat /tmp/flag_fifo
Sending the flag to /tmp/flag_fifo!
pwn.college{Il0varcevWkQO8w4dSDwRI5hbS5.QX0MzM4EDLzQjN0czW}
```
## Suspending Processes

In this challenge, we must suspend the process `/challenge/run` as it requires another copy of it running in the terminal to print out the flag.

I run `/challenge/run` to start the process and then hotkey `Ctrl+Z` to suspend the process. 

Then I run `/challenge/run` again which gives me the flag :
`pwn.college{MzQfWsc84EKANMuEmvrhNz9OqMT.dVDN4QDLzQjN0czW}`

```

Connected!
hacker@processes~suspending-processes:~$ /challenge/run
I'll only give you the flag if there's already another copy of me running in
this terminal... Let's check!

UID          PID    PPID  C STIME TTY          TIME CMD
root          81      64  0 12:58 pts/0    00:00:00 bash /challenge/run
root          83      81  0 12:58 pts/0    00:00:00 ps -f

I don't see a second me!

To pass this level, you need to suspend me and launch me again! You can
background me with Ctrl-Z or, if you're not ready to do that for whatever
reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~suspending-processes:~$ /challenge/run
I'll only give you the flag if there's already another copy of me running in
this terminal... Let's check!

UID          PID    PPID  C STIME TTY          TIME CMD
root          81      64  0 12:58 pts/0    00:00:00 bash /challenge/run
root          88      64  0 12:59 pts/0    00:00:00 bash /challenge/run
root          90      88  0 12:59 pts/0    00:00:00 ps -f

Yay, I found another version of me! Here is the flag:
pwn.college{MzQfWsc84EKANMuEmvrhNz9OqMT.dVDN4QDLzQjN0czW}
hacker@processes~suspending-processes:~$

```


## Resuming Processes 

### Solve

the flag :
`pwn.college{0VT9lHDRfv-iRZMtxEicUAubfX8.dZDN4QDLzQjN0czW}`

In this challenge, we must suspend the process `/challenge/run` and resume it in order to get our flag.

I run `/challenge/run` to start the process and then hotkey `Ctrl+Z` to suspend the process. 

Then I run `fg` to resume the process which gives me the flag.

```
Connected!
hacker@processes~resuming-processes:~$ /challenge/run
Let's practice resuming processes! Suspend me with Ctrl-Z, then resume me with
the 'fg' command! Or just press Enter to quit me!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~resuming-processes:~$ fg
/challenge/run
I'm back! Here's your flag:
pwn.college{0VT9lHDRfv-iRZMtxEicUAubfX8.dZDN4QDLzQjN0czW}
Don't forget to press Enter to quit me!





```
## Backgrounding Processes
### Solve 

 The Flag  :`pwn.college{MCpZUH5fUpjaesl-ZcWTy2mEZ4C.ddDN4QDLzQjN0czW}`

In this challenge, we must run a process of `/challenge/run` in the background and run another process of `/challenge/run` in order to get our flag.

I run `/challenge/run` and hotkey `Ctrl+Z` to suspend the process. Then I run `bg` to make it run in the background.

Finally I run another process of `/challenge/run` which gives me the flag

```
Connected!
hacker@processes~backgrounding-processes:~$ /challenge/run
I'll only give you the flag if there's already another copy of me running *and
not suspended* in this terminal... Let's check!

UID          PID STAT CMD
root          83 S+   bash /challenge/run
root          85 R+   ps -o user=UID,pid,stat,cmd

I don't see a second me!

To pass this level, you need to suspend me, resume the suspended process in the
background, and then launch a new version of me! You can background me with
Ctrl-Z (and resume me in the background with 'bg') or, if you're not ready to
do that for whatever reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~backgrounding-processes:~$ bg
[1]+ /challenge/run &



hacker@processes~backgrounding-processes:~$ Yay, I'm now running the background! Because of that, this text will probably
overlap weirdly with the shell prompt. Don't panic; just hit Enter a few times
to scroll this text out.
/challenge/run
I'll only give you the flag if there's already another copy of me running *and
not suspended* in this terminal... Let's check!

UID          PID STAT CMD
root          83 S    bash /challenge/run
root          93 S    sleep 6h
root          94 S+   bash /challenge/run
root          96 R+   ps -o user=UID,pid,stat,cmd

Yay, I found another version of me running in the background! Here is the flag:
pwn.college{MCpZUH5fUpjaesl-ZcWTy2mEZ4C.ddDN4QDLzQjN0czW}
hacker@processes~backgrounding-processes:~$
```

## Foregrounding Processes

the flag  : 
`pwn.college{oDk4xlMfm92aIbLFxYrPcA6_qZg.dhDN4QDLzQjN0czW}`
In this challenge, we must foreground a process of `/challenge/run` running in the background to get our flag.

I run `/challenge/run` and hotkey `Ctrl+Z` to suspend the process. Then I run `bg` to make it run in the background.

Finally I run `fg` to foreground the process. Following the instructions of the program gives me the flag.

```
Connected!
hacker@processes~foregrounding-processes:~$ /challenge/run
To pass this level, you need to suspend me, resume the suspended process in the
background, and *then* foreground it without re-suspending it! You can
background me with Ctrl-Z (and resume me in the background with 'bg') or, if
you're not ready to do that for whatever reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~foregrounding-processes:~$ bg
[1]+ /challenge/run &



Yay, I'm now running the background! Because of that, this text will probably
overlap weirdly with the shell prompt. Don't panic; just hit Enter a few times
to scroll this text out. After that, resume me into the foreground with 'fg';
I'll wait.
hacker@processes~foregrounding-processes:~$ fg
/challenge/run
YES! Great job! I'm now running in the foreground. Hit Enter for your flag!

pwn.college{oDk4xlMfm92aIbLFxYrPcA6_qZg.dhDN4QDLzQjN0czW}
hacker@processes~foregrounding-processes:~$
```

## Starting Backgrounded Processes
### Solve 
 the flag : 
`pwn.college{Uz4GBOfL3EtHLCqfcquS6u1lSkR.dlDN4QDLzQjN0czW}`


In this challenge, we must run `/challenge/run` backgrounded in order to get our flag.


* We can add `&` at the end of a command to run it in the background.

I run `/challenge/run &` to get the flag.

```
Connected!
hacker@processes~starting-backgrounded-processes:~$ /challenge/run &
[1] 144
hacker@processes~starting-backgrounded-processes:~$


Yay, you started me in the background! Because of that, this text will probably
overlap weirdly with the shell prompt, but you're used to that by now...

Anyways! Here is your flag!
pwn.college{Uz4GBOfL3EtHLCqfcquS6u1lSkR.dlDN4QDLzQjN0czW}




```
## Process Exit Codes

### solve



flag : `pwn.college{gU9LloDt8RGHnzBZ_IciTEHyVK_.dljN4UDLzQjN0czW}`


In this challenge, we must get the exit code of the process `/challenge/get-code` and pass in the exit code as an argument to `/challenge/submit-code` to get our flag.

I run `/challenge/get-code` and then run `echo $?` to get the exit code of the process. The exit code is `53`.

Lastly I run `/challenge/submit-code 53` which gives me the flag.


```
hacker@processes~process-exit-codes:~$ /challenge/get-code
Exiting with an error code!
hacker@processes~process-exit-codes:~$ echo $?
53
hacker@processes~process-exit-codes:~$ /challenge/submit-code 53
CORRECT! Here is your flag:
pwn.college{gU9LloDt8RGHnzBZ_IciTEHyVK_.dljN4UDLzQjN0czW}
hacker@processes~process-exit-codes:~$


```

# END
