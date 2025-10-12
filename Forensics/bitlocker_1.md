# Bitlocker 1

lets get the image :`https://challenge-files.picoctf.net/c_verbal_sleep/9e934e4d78276b12e27224dac16e50e6bbeae810367732eee4d5e38e6b2bb868/bitlocker-1.dd`

we just have to extract the user hash and run hashcat on it using a wordlist. i learnt this from a portswigger doc : https://portswigger.net/daily-swig/bitcracker-password-cracking-software-designed-to-break-windows-nbsp-bitlocker


lets clone into : https://github.com/openwall/john.git
 
 
 and 
 
 run bitlocker2john using this : https://www.networkdatapedia.com/post/decrypting-bitlocker-with-hashcat-a-beginner-friendly-guide-casey-mullis

then we run this to get our user hash : 

```
ss@Satwik:~/john/run$ python3 bitlocker2john.py bitlocker-1.dd
[+] BitLocker signature found: -FVE-FS-
[+] Identified volume GUID: 4967D63B-2E29-4AD8-8399-F6A339E3D001 = BitLocker
[+] FVE metadata info found at offsets ['0x2195000', '0x2c1d000', '0x373a000']

Parsing FVE metadata header...
Metadata size: 834
Volume GUID: FCC70221-16CC-47AB-8E8B-D70A33C22A2F
Encryption method: 0x8002

Parsing FVE block...

Parsing FVE metadata entry...
Entry size: 82
Entry type: 0x7 = Computer description
Value type: 0x2 = UTF-16 string

Parsing description...
Info: DESKTOP-EKVR84B New Volume 7/15/2024

Parsing FVE metadata entry...
Entry size: 316
Entry type: 0x2 = VMK
Value type: 0x8 = VMK

Parsing VMK...
GUID: 7263B387-3CC3-4A01-B60C-4723BD06D8C0
Protection type: 0x800 = VMK protected with recovery password

Parsing FVE metadata entry...
Entry size: 172
Entry type: 0x0 = None
Value type: 0x3 = Stretch key

Parsing stretch key...
Encryption method: 0x1000
Salt: 2b71884a0ef66f0b9de049a82a39d15b

Parsing FVE metadata entry...
Entry size: 64
Entry type: 0x12 = None
Value type: 0x5 = AES-CCM encrypted key
Parsing AES CCM key...

Parsing FVEK...
Mac: 5a3cd0e4fe343c100105f0eac986b512
Nonce: 00be8a46ead6da0104000000
Encrypted data: cfecb78697bb3aee1816500594584cc969556916386ac81f6e3810f7

Parsing FVE metadata entry...
Entry size: 80
Entry type: 0x0 = None
Value type: 0x5 = AES-CCM encrypted key
Parsing AES CCM key...

Parsing FVEK...
Mac: a28f1a60db3e3fe4049a821c3aea5e4b
Nonce: 00be8a46ead6da0106000000
Encrypted data: a1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58

Found hash!
$bitlocker$2$16$2b71884a0ef66f0b9de049a82a39d15b$1048576$12$00be8a46ead6da0106000000$60$a28f1a60db3e3fe4049a821c3aea5e4ba1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58
$bitlocker$3$16$2b71884a0ef66f0b9de049a82a39d15b$1048576$12$00be8a46ead6da0106000000$60$a28f1a60db3e3fe4049a821c3aea5e4ba1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58

Parsing FVE metadata entry...
Entry size: 64
Entry type: 0x3 = FVEK
Value type: 0x5 = AES-CCM encrypted key
Parsing AES CCM key...

Parsing FVEK...
Mac: 96375935233514e1b46b4ac397d6ea49
Nonce: 00be8a46ead6da0107000000
Encrypted data: 438c0a582a958b976fc57a1055e1a5fed80adcec513c24a4c2f6bca7

Parsing FVE metadata entry...
Entry size: 224
Entry type: 0x2 = VMK
Value type: 0x8 = VMK

Parsing VMK...
GUID: F05A6658-4C8D-48F0-A542-CBE925B9A7FB
Protection type: 0x2000 = VMK protected with password

Parsing FVE metadata entry...
Entry size: 108
Entry type: 0x0 = None
Value type: 0x3 = Stretch key

Parsing stretch key...
Encryption method: 0x1001
Salt: cb4809fe9628471a411f8380e0f668db

Parsing FVE metadata entry...
Entry size: 80
Entry type: 0x0 = None
Value type: 0x5 = AES-CCM encrypted key
Parsing AES CCM key...

Parsing FVEK...
Mac: 3c27ac21925fbdce4b03a895730cba51
Nonce: d04d9c58eed6da0109000000
Encrypted data: 0642da926bf677539618e9b21523a04c78b987c92a7332843638985d58254e651c496e639083da79a95bd8a3

Parsing FVE metadata entry...
Entry size: 80
Entry type: 0x0 = None
Value type: 0x5 = AES-CCM encrypted key
Parsing AES CCM key...

Parsing FVEK...
Mac: 68156e51e53f0a01c076a32ba2b2999a
Nonce: d04d9c58eed6da010a000000
Encrypted data: fffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d

Found hash!
$bitlocker$0$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d
$bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d

Parsing FVE metadata entry...
Entry size: 100
Entry type: 0xf = Volume header block
Value type: 0xf = Offset and size

Parsing volume header block...
Block offset: 0x21a5000
Block size: 8192

The following hashes were found:
$bitlocker$2$16$2b71884a0ef66f0b9de049a82a39d15b$1048576$12$00be8a46ead6da0106000000$60$a28f1a60db3e3fe4049a821c3aea5e4ba1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58
$bitlocker$3$16$2b71884a0ef66f0b9de049a82a39d15b$1048576$12$00be8a46ead6da0106000000$60$a28f1a60db3e3fe4049a821c3aea5e4ba1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58
$bitlocker$0$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d
$bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d
```

nvm we get two hashes without knowing which is user hash lets just try both instead :

```
$bitlocker$2$16$2b71884a0ef66f0b9de049a82a39d15b$1048576$12$00be8a46ead6da0106000000$60$a28f1a60db3e3fe4049a821c3aea5e4ba1957baea68cd29488c0f3f6efcd4689e43f8ba3120a33048b2ef2c9702e298e4c260743126ec8bd29bc6d58

$bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d
```


now lets download rockyou.txt using : wget https://weakpass.com/download/90/rockyou.txt.gz

and unzip it.

now lets run the hash cat bruteforce :

```
ss@Satwik:~$ cat hash.txt
6048576208156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d
ss@Satwik:~$ ls
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  hash.txt  john  key  key.pub  pwndbg  rockyou.txt.gz  snap  splitmind  sunshineCtf
ss@Satwik:~$ cat hash.txt
$bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66dss@Satwik:~$ gunzip rockyou.txt.gz
ss@Satwik:~$ ls
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  hash.txt  john  key  key.pub  pwndbg  rockyou.txt  snap  splitmind  sunshineCtf
ss@Satwik:~$ hashcat -m 22100 -a 0 hash.txt rockyou.txt -w 3
hashcat (v6.2.6) starting

OpenCL API (OpenCL 3.0 PoCL 5.0+debian  Linux, None+Asserts, RELOC, SPIR, LLVM 16.0.6, SLEEF, DISTRO, POCL_DEBUG) - Platform #1 [The pocl project]
==================================================================================================================================================
* Device #1: cpu-skylake-avx512-AMD Ryzen 7 7840HS w/ Radeon 780M Graphics, 2711/5486 MB (1024 MB allocatable), 16MCU

Minimum password length supported by kernel: 4
Maximum password length supported by kernel: 256

Hashes: 1 digests; 1 unique digests, 1 unique salts
Bitmaps: 16 bits, 65536 entries, 0x0000ffff mask, 262144 bytes, 5/13 rotates
Rules: 1

Optimizers applied:
* Single-Hash
* Single-Salt
* Slow-Hash-SIMD-LOOP

Watchdog: Hardware monitoring interface not found on your system.
Watchdog: Temperature abort trigger disabled.

Initializing backend runtime for device #1. Please be patient...
```


THUS we get our password as `jacqueline`

```
Host memory required for this attack: 0 MB

Dictionary cache built:
* Filename..: rockyou.txt
* Passwords.: 14344391
* Bytes.....: 139921497
* Keyspace..: 14344384
* Runtime...: 1 sec

$bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$1048576$12$d04d9c58eed6da010a000000$60$68156e51e53f0a01c076a32ba2b2999afffce8530fbe5d84b4c19ac71f6c79375b87d40c2d871ed2b7b5559d71ba31b6779c6f41412fd6869442d66d:jacqueline

Session..........: hashcat
Status...........: Cracked
Hash.Mode........: 22100 (BitLocker)
Hash.Target......: $bitlocker$1$16$cb4809fe9628471a411f8380e0f668db$10...42d66d
Time.Started.....: Sun Oct 12 15:32:34 2025 (8 secs)
Time.Estimated...: Sun Oct 12 15:32:42 2025 (0 secs)
Kernel.Feature...: Pure Kernel
Guess.Base.......: File (rockyou.txt)
Guess.Queue......: 1/1 (100.00%)
Speed.#1.........:      242 H/s (6.88ms) @ Accel:512 Loops:4096 Thr:1 Vec:16
Recovered........: 1/1 (100.00%) Digests (total), 1/1 (100.00%) Digests (new)
Progress.........: 2048/14344384 (0.01%)
Rejected.........: 0/2048 (0.00%)
Restore.Point....: 1536/14344384 (0.01%)
Restore.Sub.#1...: Salt:0 Amplifier:0-1 Iteration:1044480-1048576
Candidate.Engine.: Device Generator
Candidates.#1....: clover -> lovers1

Started: Sun Oct 12 15:32:01 2025
Stopped: Sun Oct 12 15:32:44 2025
ss@Satwik:~$
```

now we need to get into the image using dislocker.

```
ss@Satwik:~$ mkdir dislocker
ss@Satwik:~$ sudo dislocker -v bitlocker-1.dd -ujacqueline dislocker
ss@Satwik:~$ cd dislocker
-bash: cd: dislocker: Permission denied
ss@Satwik:~$ ls
ls: cannot access 'dislocker': Permission denied
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  dislocker  hash.txt  john  key  key.pub  pwndbg  rockyou.txt  snap  splitmind  sunshineCtf
ss@Satwik:~$ ls -l dislocker
ls: cannot access 'dislocker': Permission denied
ss@Satwik:~$ ls -l ~/dislocker
ls: cannot access '/home/ss/dislocker': Permission denied
ss@Satwik:~$ sudo mount -o loop,ro ~/dislocker/dislocker-file /mnt/bitlocker
mount: /mnt/bitlocker: mount point does not exist.
       dmesg(1) may have more information after failed mount system call.
ss@Satwik:~$ rm dislocker
rm: cannot remove 'dislocker': Permission denied
ss@Satwik:~$ sudo rm dislocker
rm: cannot remove 'dislocker': Is a directory
ss@Satwik:~$ sudo ls dislocker
dislocker-file
ss@Satwik:~$ sudo cd dislocker
sudo: cd: command not found
sudo: "cd" is a shell built-in command, it cannot be run directly.
sudo: the -s option may be used to run a privileged shell.
sudo: the -D option may be used to run a command in a specific directory.
ss@Satwik:~$ cd dislocker
-bash: cd: dislocker: Permission denied
ss@Satwik:~$ sudo ls -l dislocker
total 0
-rw-rw-rw- 1 root root 104857600 Jan  1  1970 dislocker-file
ss@Satwik:~$ sudo mkdir -p /mnt/bitlocker
ss@Satwik:~$ sudo mount -o loop,ro dislocker/dislocker-file /mnt/bitlocker
mount: /mnt/bitlocker: unknown filesystem type 'ntfs'.
       dmesg(1) may have more information after failed mount system call.
ss@Satwik:~$ ls /mnt/bitlocker
ss@Satwik:~$ ls
ls: cannot access 'dislocker': Permission denied
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  dislocker  hash.txt  john  key  key.pub  pwndbg  rockyou.txt  snap  splitmind  sunshineCtf
ss@Satwik:~$ sudo ls /mnt/bitlocker
ss@Satwik:~$ ls
ls: cannot access 'dislocker': Permission denied
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  dislocker  hash.txt  john  key  key.pub  pwndbg  rockyou.txt  snap  splitmind  sunshineCtf
ss@Satwik:~$ sudo apt install ntfs-3g
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
The following packages were automatically installed and are no longer required:
  libdrm-nouveau2 libdrm-radeon1 libgl1-amber-dri libglapi-mesa libllvm19 libxcb-dri2-0
Use 'sudo apt autoremove' to remove them.
The following additional packages will be installed:
  libntfs-3g89t64
The following NEW packages will be installed:
  libntfs-3g89t64 ntfs-3g
0 upgraded, 2 newly installed, 0 to remove and 69 not upgraded.
Need to get 565 kB of archives.
After this operation, 1686 kB of additional disk space will be used.
Do you want to continue? [Y/n] y
Get:1 http://archive.ubuntu.com/ubuntu noble/main amd64 libntfs-3g89t64 amd64 1:2022.10.3-1.2ubuntu3 [159 kB]
Get:2 http://archive.ubuntu.com/ubuntu noble/main amd64 ntfs-3g amd64 1:2022.10.3-1.2ubuntu3 [406 kB]
Fetched 565 kB in 2s (296 kB/s)
Selecting previously unselected package libntfs-3g89t64:amd64.
(Reading database ... 88188 files and directories currently installed.)
Preparing to unpack .../libntfs-3g89t64_1%3a2022.10.3-1.2ubuntu3_amd64.deb ...
Unpacking libntfs-3g89t64:amd64 (1:2022.10.3-1.2ubuntu3) ...
Selecting previously unselected package ntfs-3g.
Preparing to unpack .../ntfs-3g_1%3a2022.10.3-1.2ubuntu3_amd64.deb ...
Unpacking ntfs-3g (1:2022.10.3-1.2ubuntu3) ...
Setting up libntfs-3g89t64:amd64 (1:2022.10.3-1.2ubuntu3) ...
Setting up ntfs-3g (1:2022.10.3-1.2ubuntu3) ...
Processing triggers for man-db (2.12.0-4build2) ...
Processing triggers for libc-bin (2.39-0ubuntu8.6) ...
ss@Satwik:~$ sudo ntfs-3g -o ro dislocker/dislocker-file /mnt/bitlocker
ss@Satwik:~$ ls /mnt/bitlocker
'$RECYCLE.BIN'  'System Volume Information'   flag.txt
ss@Satwik:~$ cat flag.txt
cat: flag.txt: No such file or directory
ss@Satwik:~$ ls
ls: cannot access 'dislocker': Permission denied
Citadel  PwnShop  RaceCon  Xplore  bitlocker-1.dd  dislocker  hash.txt  john  key  key.pub  pwndbg  rockyou.txt  snap  splitmind  sunshineCtf
ss@Satwik:~$ ls /mnt/bitlocker
'$RECYCLE.BIN'  'System Volume Information'   flag.txt
ss@Satwik:~$ cd /mnt/bitlocker
ss@Satwik:/mnt/bitlocker$ ls
'$RECYCLE.BIN'  'System Volume Information'   flag.txt
ss@Satwik:/mnt/bitlocker$ cat flag.txt
picoCTF{us3_b3tt3r_p4ssw0rd5_pl5!_3242adb1}ss@Satwik:/mnt/bitlocker$
```

`After a bunch of issues like not having dislocker and ntfs-3g not being installed and fixing them i finally mounted to the image using the password and catted the flag.`

# The Flag :

`picoCTF{us3_b3tt3r_p4ssw0rd5_pl5!_3242adb1}`