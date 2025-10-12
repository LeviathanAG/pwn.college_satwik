# st3g0 (easy)

lets download the image with :

`wget https://artifacts.picoctf.net/c/216/pico.flag.png`


its a png so lets do our basic forensics protocols.

```
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ binwalk pico.flag.png

DECIMAL       HEXADECIMAL     DESCRIPTION
--------------------------------------------------------------------------------
0             0x0             PNG image, 585 x 172, 8-bit/color RGBA, non-interlaced
41            0x29            Zlib compressed data, default compression

ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ file pico.flag.png
pico.flag.png: PNG image data, 585 x 172, 8-bit/color RGBA, non-interlaced
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ exiftool pico.flag.png
ExifTool Version Number         : 12.76
File Name                       : pico.flag.png
Directory                       : .
File Size                       : 13 kB
File Modification Date/Time     : 2023:08:04 20:36:17+00:00
File Access Date/Time           : 2025:10:12 14:10:57+00:00
File Inode Change Date/Time     : 2025:10:12 14:10:49+00:00
File Permissions                : -rwxrwxrwx
File Type                       : PNG
File Type Extension             : png
MIME Type                       : image/png
Image Width                     : 585
Image Height                    : 172
Bit Depth                       : 8
Color Type                      : RGB with Alpha
Compression                     : Deflate/Inflate
Filter                          : Adaptive
Interlace                       : Noninterlaced
Image Size                      : 585x172
Megapixels                      : 0.101
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$
```

this yielded nothing but then i remmember there is `zsteg ` which only works on png so lets try that : https://github.com/zed-0xff/zsteg

my zsteg installation was failing so i went to this website : https://www.aperisolve.com/78f063c6aee93b3f52e31e59d16d1641 to do the zsteg.

and the zsteg section got me the flag :

```
b1,r,lsb,xy         .. 
b1,r,msb,xy         .. 
b1,g,lsb,xy         .. 
b1,g,msb,xy         .. 
b1,b,lsb,xy         .. 
b1,b,msb,xy         .. 
b1,a,lsb,xy         .. 
b1,a,msb,xy         .. 
b1,rgb,lsb,xy       .. text: "picoCTF{7h3r3_15_n0_5p00n_a1062667}$t3g0"

b1,rgb,msb,xy       .. 
b1,bgr,lsb,xy       .. 
b1,bgr,msb,xy       .. 
b1,rgba,lsb,xy      .. 
b1,rgba,msb,xy      .. 
b1,abgr,lsb,xy      .. text: "E2A5q4E%uSA"

b1,abgr,msb,xy      .. 
b2,r,lsb,xy         .. 
b2,r,msb,xy         .. 
b2,g,lsb,xy         .. 
b2,g,msb,xy         .. 
b2,b,lsb,xy         .. text: "AAPAAQTAAA"

b2,b,msb,xy         .. text: "HWUUUUUU"

b2,a,lsb,xy         .. 
b2,a,msb,xy         .. 
b2,rgb,lsb,xy       .. 
b2,rgb,msb,xy       .. 
b2,bgr,lsb,xy       .. 
b2,bgr,msb,xy       .. 
b2,rgba,lsb,xy      .. 
b2,rgba,msb,xy      .. 
b2,abgr,lsb,xy      .. 
b2,abgr,msb,xy      .. 
b3,r,lsb,xy         .. file: gfxboot compiled html help file

b3,r,msb,xy         .. 
b3,g,lsb,xy         .. 
b3,g,msb,xy         .. 
b3,b,lsb,xy         .. 
b3,b,msb,xy         .. 
b3,a,lsb,xy         .. 
b3,a,msb,xy         .. 
b3,rgb,lsb,xy       .. 
b3,rgb,msb,xy       .. 
b3,bgr,lsb,xy       .. 
b3,bgr,msb,xy       .. 
b3,rgba,lsb,xy      .. 
b3,rgba,msb,xy      .. 
b3,abgr,lsb,xy      .. 
b3,abgr,msb,xy      .. 
b4,r,lsb,xy         .. file: Targa image data (16-273) 65536 x 4097 x 1 +4352 +4369 - 1-bit alpha - right "\021\020\001\001\021\021\001\001\021\021\001"

b4,r,msb,xy         .. 
b4,g,lsb,xy         .. file: 0420 Alliant virtual executable not stripped

b4,g,msb,xy         .. 
b4,b,lsb,xy         .. file: Targa image data - Map 272 x 17 x 16 +257 +272 - 1-bit alpha "\020\001\021\001\021\020\020\001\020\001\020\001"

b4,b,msb,xy         .. 
b4,a,lsb,xy         .. 
b4,a,msb,xy         .. 
b4,rgb,lsb,xy       .. 
b4,rgb,msb,xy       .. 
b4,bgr,lsb,xy       .. file: Targa image data - Map 273 x 272 x 16 +1 +4113 - 1-bit alpha "\020\001\001\001"

b4,bgr,msb,xy       .. 
b4,rgba,lsb,xy      .. 
b4,rgba,msb,xy      .. file: Applesoft BASIC program data, first line number 8

b4,abgr,lsb,xy      .. 
b4,abgr,msb,xy      .. 
                    

```

# The flag :

`picoCTF{7h3r3_15_n0_5p00n_a1062667}`


## Resources : 

https://github.com/zed-0xff/zsteg

https://www.aperisolve.com

