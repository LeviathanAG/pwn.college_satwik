# flag{key1+key2}

# Flag

`flag{key1 + JKLq59U137 }`

# Recon

- name of the flag suggests that the flag is split up into two

and running strings on the file gives me this part : 


```
$Info: This file is packed with the UPX executable packer http://upx.sf.net $
$Id: UPX 3.91 Copyright (C) 1996-2013 the UPX Team. All Rights Reserved. $
PROT_EXEC|PROT_WRITE failed.
```

also `file flag*` gave me this :

```
flag{key1+key2}: ELF 32-bit LSB executable, Intel 80386, version 1 (GNU/Linux), statically linked, no section header
```
next i unpacked the binary using upx which increased the file size by a lot and on decompilation i Found 3 main functions.

and then i objdumped the new binary and here are the 3 main functions : 

```
08061f7c <main__main>:
 8061f7c:	55                   	push   ebp
 8061f7d:	89 e5                	mov    ebp,esp
 8061f7f:	83 ec 28             	sub    esp,0x28
 8061f82:	c7 45 d8 17 00 00 00 	mov    DWORD PTR [ebp-0x28],0x17
 8061f89:	c7 45 dc 8c 09 00 00 	mov    DWORD PTR [ebp-0x24],0x98c
 8061f90:	83 7d d8 2d          	cmp    DWORD PTR [ebp-0x28],0x2d
 8061f94:	75 07                	jne    8061f9d <main__main+0x21>
 8061f96:	e8 64 00 00 00       	call   8061fff <main__one>
 8061f9b:	eb 29                	jmp    8061fc6 <main__main+0x4a>
 8061f9d:	c7 45 e0 04 a0 06 08 	mov    DWORD PTR [ebp-0x20],0x806a004
 8061fa4:	c7 45 e4 0f 00 00 00 	mov    DWORD PTR [ebp-0x1c],0xf
 8061fab:	c7 45 e8 01 00 00 00 	mov    DWORD PTR [ebp-0x18],0x1
 8061fb2:	83 ec 04             	sub    esp,0x4
 8061fb5:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
 8061fb8:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
 8061fbb:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
 8061fbe:	e8 43 59 ff ff       	call   8057906 <println>
 8061fc3:	83 c4 10             	add    esp,0x10
 8061fc6:	83 7d dc 4c          	cmp    DWORD PTR [ebp-0x24],0x4c
 8061fca:	75 07                	jne    8061fd3 <main__main+0x57>
 8061fcc:	e8 60 01 00 00       	call   8062131 <main__two>
 8061fd1:	eb 29                	jmp    8061ffc <main__main+0x80>
 8061fd3:	c7 45 ec 04 a0 06 08 	mov    DWORD PTR [ebp-0x14],0x806a004
 8061fda:	c7 45 f0 0f 00 00 00 	mov    DWORD PTR [ebp-0x10],0xf
 8061fe1:	c7 45 f4 01 00 00 00 	mov    DWORD PTR [ebp-0xc],0x1
 8061fe8:	83 ec 04             	sub    esp,0x4
 8061feb:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
 8061fee:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
 8061ff1:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
 8061ff4:	e8 0d 59 ff ff       	call   8057906 <println>
 8061ff9:	83 c4 10             	add    esp,0x10
 8061ffc:	90                   	nop
 8061ffd:	c9                   	leave
 8061ffe:	c3                   	ret

08061fff <main__one>:
 8061fff:	55                   	push   ebp
 8062000:	89 e5                	mov    ebp,esp
 8062002:	83 ec 68             	sub    esp,0x68
 8062005:	65 a1 14 00 00 00    	mov    eax,gs:0x14
 806200b:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 806200e:	31 c0                	xor    eax,eax
 8062010:	c7 45 e8 fe ff ff ff 	mov    DWORD PTR [ebp-0x18],0xfffffffe
 8062017:	8d 45 b8             	lea    eax,[ebp-0x48]
 806201a:	83 ec 0c             	sub    esp,0xc
 806201d:	8d 55 e8             	lea    edx,[ebp-0x18]
 8062020:	52                   	push   edx
 8062021:	6a 04                	push   0x4
 8062023:	6a 00                	push   0x0
 8062025:	6a 06                	push   0x6
 8062027:	50                   	push   eax
 8062028:	e8 3c 3a ff ff       	call   8055a69 <__new_array_with_default>
 806202d:	83 c4 1c             	add    esp,0x1c
 8062030:	c7 45 a8 2d 00 00 00 	mov    DWORD PTR [ebp-0x58],0x2d
 8062037:	83 7d a8 1f          	cmp    DWORD PTR [ebp-0x58],0x1f
 806203b:	0f 8f 93 00 00 00    	jg     80620d4 <main__one+0xd5>
 8062041:	8d 45 c8             	lea    eax,[ebp-0x38]
 8062044:	83 ec 0c             	sub    esp,0xc
 8062047:	6a 00                	push   0x0
 8062049:	6a 04                	push   0x4
 806204b:	6a 0a                	push   0xa
 806204d:	6a 00                	push   0x0
 806204f:	50                   	push   eax
 8062050:	e8 14 3a ff ff       	call   8055a69 <__new_array_with_default>
 8062055:	83 c4 1c             	add    esp,0x1c
 8062058:	c7 45 a4 02 00 00 00 	mov    DWORD PTR [ebp-0x5c],0x2
 806205f:	eb 1d                	jmp    806207e <main__one+0x7f>
 8062061:	8b 45 a4             	mov    eax,DWORD PTR [ebp-0x5c]
 8062064:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
 8062067:	83 ec 08             	sub    esp,0x8
 806206a:	8d 45 ec             	lea    eax,[ebp-0x14]
 806206d:	50                   	push   eax
 806206e:	8d 45 c8             	lea    eax,[ebp-0x38]
 8062071:	50                   	push   eax
 8062072:	e8 43 49 ff ff       	call   80569ba <array_push>
 8062077:	83 c4 10             	add    esp,0x10
 806207a:	83 45 a4 01          	add    DWORD PTR [ebp-0x5c],0x1
 806207e:	83 7d a4 0b          	cmp    DWORD PTR [ebp-0x5c],0xb
 8062082:	7e dd                	jle    8062061 <main__one+0x62>
 8062084:	8d 45 d8             	lea    eax,[ebp-0x28]
 8062087:	83 ec 04             	sub    esp,0x4
 806208a:	6a 08                	push   0x8
 806208c:	6a 02                	push   0x2
 806208e:	ff 75 d4             	push   DWORD PTR [ebp-0x2c]
 8062091:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
 8062094:	ff 75 cc             	push   DWORD PTR [ebp-0x34]
 8062097:	ff 75 c8             	push   DWORD PTR [ebp-0x38]
 806209a:	50                   	push   eax
 806209b:	e8 d0 43 ff ff       	call   8056470 <array_slice>
 80620a0:	83 c4 1c             	add    esp,0x1c
 80620a3:	8d 45 ac             	lea    eax,[ebp-0x54]
 80620a6:	83 ec 0c             	sub    esp,0xc
 80620a9:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
 80620ac:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
 80620af:	ff 75 dc             	push   DWORD PTR [ebp-0x24]
 80620b2:	ff 75 d8             	push   DWORD PTR [ebp-0x28]
 80620b5:	50                   	push   eax
 80620b6:	e8 fe 70 fe ff       	call   80491b9 <array_int_str>
 80620bb:	83 c4 1c             	add    esp,0x1c
 80620be:	83 ec 04             	sub    esp,0x4
 80620c1:	ff 75 b4             	push   DWORD PTR [ebp-0x4c]
 80620c4:	ff 75 b0             	push   DWORD PTR [ebp-0x50]
 80620c7:	ff 75 ac             	push   DWORD PTR [ebp-0x54]
 80620ca:	e8 37 58 ff ff       	call   8057906 <println>
 80620cf:	83 c4 10             	add    esp,0x10
 80620d2:	eb 49                	jmp    806211d <main__one+0x11e>
 80620d4:	c7 45 f0 fd ff ff ff 	mov    DWORD PTR [ebp-0x10],0xfffffffd
 80620db:	8d 45 d8             	lea    eax,[ebp-0x28]
 80620de:	83 ec 0c             	sub    esp,0xc
 80620e1:	8d 55 f0             	lea    edx,[ebp-0x10]
 80620e4:	52                   	push   edx
 80620e5:	6a 04                	push   0x4
 80620e7:	6a 00                	push   0x0
 80620e9:	6a 06                	push   0x6
 80620eb:	50                   	push   eax
 80620ec:	e8 78 39 ff ff       	call   8055a69 <__new_array_with_default>
 80620f1:	83 c4 1c             	add    esp,0x1c
 80620f4:	c7 45 c8 14 a0 06 08 	mov    DWORD PTR [ebp-0x38],0x806a014
 80620fb:	c7 45 cc 28 00 00 00 	mov    DWORD PTR [ebp-0x34],0x28
 8062102:	c7 45 d0 01 00 00 00 	mov    DWORD PTR [ebp-0x30],0x1
 8062109:	83 ec 04             	sub    esp,0x4
 806210c:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
 806210f:	ff 75 cc             	push   DWORD PTR [ebp-0x34]
 8062112:	ff 75 c8             	push   DWORD PTR [ebp-0x38]
 8062115:	e8 ec 57 ff ff       	call   8057906 <println>
 806211a:	83 c4 10             	add    esp,0x10
 806211d:	90                   	nop
 806211e:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 8062121:	65 33 05 14 00 00 00 	xor    eax,DWORD PTR gs:0x14
 8062128:	74 05                	je     806212f <main__one+0x130>
 806212a:	e8 f1 66 fe ff       	call   8048820 <__stack_chk_fail@plt>
 806212f:	c9                   	leave
 8062130:	c3                   	ret

08062131 <main__two>:
 8062131:	55                   	push   ebp
 8062132:	89 e5                	mov    ebp,esp
 8062134:	81 ec e8 00 00 00    	sub    esp,0xe8
 806213a:	65 a1 14 00 00 00    	mov    eax,gs:0x14
 8062140:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 8062143:	31 c0                	xor    eax,eax
 8062145:	c7 85 6c ff ff ff f9 	mov    DWORD PTR [ebp-0x94],0xfffffff9
 806214c:	ff ff ff 
 806214f:	8d 85 2c ff ff ff    	lea    eax,[ebp-0xd4]
 8062155:	83 ec 0c             	sub    esp,0xc
 8062158:	8d 95 6c ff ff ff    	lea    edx,[ebp-0x94]
 806215e:	52                   	push   edx
 806215f:	6a 04                	push   0x4
 8062161:	6a 00                	push   0x0
 8062163:	6a 07                	push   0x7
 8062165:	50                   	push   eax
 8062166:	e8 fe 38 ff ff       	call   8055a69 <__new_array_with_default>
 806216b:	83 c4 1c             	add    esp,0x1c
 806216e:	c7 85 18 ff ff ff 5a 	mov    DWORD PTR [ebp-0xe8],0x5a
 8062175:	00 00 00 
 8062178:	83 bd 18 ff ff ff 2c 	cmp    DWORD PTR [ebp-0xe8],0x2c
 806217f:	0f 8f 03 02 00 00    	jg     8062388 <main__two+0x257>
 8062185:	8d 85 3c ff ff ff    	lea    eax,[ebp-0xc4]
 806218b:	83 ec 0c             	sub    esp,0xc
 806218e:	6a 00                	push   0x0
 8062190:	6a 0c                	push   0xc
 8062192:	6a 0a                	push   0xa
 8062194:	6a 00                	push   0x0
 8062196:	50                   	push   eax
 8062197:	e8 cd 38 ff ff       	call   8055a69 <__new_array_with_default>
 806219c:	83 c4 1c             	add    esp,0x1c
 806219f:	c7 85 70 ff ff ff 3d 	mov    DWORD PTR [ebp-0x90],0x806a03d
 80621a6:	a0 06 08 
 80621a9:	c7 85 74 ff ff ff 01 	mov    DWORD PTR [ebp-0x8c],0x1
 80621b0:	00 00 00 
 80621b3:	c7 85 78 ff ff ff 01 	mov    DWORD PTR [ebp-0x88],0x1
 80621ba:	00 00 00 
 80621bd:	c7 85 7c ff ff ff 3f 	mov    DWORD PTR [ebp-0x84],0x806a03f
 80621c4:	a0 06 08 
 80621c7:	c7 45 80 01 00 00 00 	mov    DWORD PTR [ebp-0x80],0x1
 80621ce:	c7 45 84 01 00 00 00 	mov    DWORD PTR [ebp-0x7c],0x1
 80621d5:	c7 45 88 41 a0 06 08 	mov    DWORD PTR [ebp-0x78],0x806a041
 80621dc:	c7 45 8c 01 00 00 00 	mov    DWORD PTR [ebp-0x74],0x1
 80621e3:	c7 45 90 01 00 00 00 	mov    DWORD PTR [ebp-0x70],0x1
 80621ea:	c7 45 94 43 a0 06 08 	mov    DWORD PTR [ebp-0x6c],0x806a043
 80621f1:	c7 45 98 01 00 00 00 	mov    DWORD PTR [ebp-0x68],0x1
 80621f8:	c7 45 9c 01 00 00 00 	mov    DWORD PTR [ebp-0x64],0x1
 80621ff:	c7 45 a0 45 a0 06 08 	mov    DWORD PTR [ebp-0x60],0x806a045
 8062206:	c7 45 a4 01 00 00 00 	mov    DWORD PTR [ebp-0x5c],0x1
 806220d:	c7 45 a8 01 00 00 00 	mov    DWORD PTR [ebp-0x58],0x1
 8062214:	8d 85 4c ff ff ff    	lea    eax,[ebp-0xb4]
 806221a:	83 ec 0c             	sub    esp,0xc
 806221d:	8d 95 70 ff ff ff    	lea    edx,[ebp-0x90]
 8062223:	52                   	push   edx
 8062224:	6a 0c                	push   0xc
 8062226:	6a 05                	push   0x5
 8062228:	6a 05                	push   0x5
 806222a:	50                   	push   eax
 806222b:	e8 a9 39 ff ff       	call   8055bd9 <new_array_from_c_array>
 8062230:	83 c4 1c             	add    esp,0x1c
 8062233:	c7 85 1c ff ff ff 4d 	mov    DWORD PTR [ebp-0xe4],0x4d
 806223a:	00 00 00 
 806223d:	83 bd 1c ff ff ff 4b 	cmp    DWORD PTR [ebp-0xe4],0x4b
 8062244:	0f 8f 03 01 00 00    	jg     806234d <main__two+0x21c>
 806224a:	c7 45 ac 47 a0 06 08 	mov    DWORD PTR [ebp-0x54],0x806a047
 8062251:	c7 45 b0 01 00 00 00 	mov    DWORD PTR [ebp-0x50],0x1
 8062258:	c7 45 b4 01 00 00 00 	mov    DWORD PTR [ebp-0x4c],0x1
 806225f:	c7 45 b8 49 a0 06 08 	mov    DWORD PTR [ebp-0x48],0x806a049
 8062266:	c7 45 bc 01 00 00 00 	mov    DWORD PTR [ebp-0x44],0x1
 806226d:	c7 45 c0 01 00 00 00 	mov    DWORD PTR [ebp-0x40],0x1
 8062274:	c7 45 c4 4b a0 06 08 	mov    DWORD PTR [ebp-0x3c],0x806a04b
 806227b:	c7 45 c8 01 00 00 00 	mov    DWORD PTR [ebp-0x38],0x1
 8062282:	c7 45 cc 01 00 00 00 	mov    DWORD PTR [ebp-0x34],0x1
 8062289:	c7 45 d0 4d a0 06 08 	mov    DWORD PTR [ebp-0x30],0x806a04d
 8062290:	c7 45 d4 01 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x1
 8062297:	c7 45 d8 01 00 00 00 	mov    DWORD PTR [ebp-0x28],0x1
 806229e:	c7 45 dc 4d a0 06 08 	mov    DWORD PTR [ebp-0x24],0x806a04d
 80622a5:	c7 45 e0 01 00 00 00 	mov    DWORD PTR [ebp-0x20],0x1
 80622ac:	c7 45 e4 01 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x1
 80622b3:	c7 45 e8 4f a0 06 08 	mov    DWORD PTR [ebp-0x18],0x806a04f
 80622ba:	c7 45 ec 01 00 00 00 	mov    DWORD PTR [ebp-0x14],0x1
 80622c1:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
 80622c8:	8d 85 5c ff ff ff    	lea    eax,[ebp-0xa4]
 80622ce:	83 ec 0c             	sub    esp,0xc
 80622d1:	8d 55 ac             	lea    edx,[ebp-0x54]
 80622d4:	52                   	push   edx
 80622d5:	6a 0c                	push   0xc
 80622d7:	6a 06                	push   0x6
 80622d9:	6a 06                	push   0x6
 80622db:	50                   	push   eax
 80622dc:	e8 f8 38 ff ff       	call   8055bd9 <new_array_from_c_array>
 80622e1:	83 c4 1c             	add    esp,0x1c
 80622e4:	8b 95 64 ff ff ff    	mov    edx,DWORD PTR [ebp-0x9c]
 80622ea:	8b 85 60 ff ff ff    	mov    eax,DWORD PTR [ebp-0xa0]
 80622f0:	83 ec 04             	sub    esp,0x4
 80622f3:	52                   	push   edx
 80622f4:	50                   	push   eax
 80622f5:	8d 85 4c ff ff ff    	lea    eax,[ebp-0xb4]
 80622fb:	50                   	push   eax
 80622fc:	e8 1a 47 ff ff       	call   8056a1b <array_push_many>
 8062301:	83 c4 10             	add    esp,0x10
 8062304:	8d 85 5c ff ff ff    	lea    eax,[ebp-0xa4]
 806230a:	83 ec 0c             	sub    esp,0xc
 806230d:	ff b5 58 ff ff ff    	push   DWORD PTR [ebp-0xa8]
 8062313:	ff b5 54 ff ff ff    	push   DWORD PTR [ebp-0xac]
 8062319:	ff b5 50 ff ff ff    	push   DWORD PTR [ebp-0xb0]
 806231f:	ff b5 4c ff ff ff    	push   DWORD PTR [ebp-0xb4]
 8062325:	50                   	push   eax
 8062326:	e8 4c 4a ff ff       	call   8056d77 <array_string_str>
 806232b:	83 c4 1c             	add    esp,0x1c
 806232e:	83 ec 04             	sub    esp,0x4
 8062331:	ff b5 64 ff ff ff    	push   DWORD PTR [ebp-0x9c]
 8062337:	ff b5 60 ff ff ff    	push   DWORD PTR [ebp-0xa0]
 806233d:	ff b5 5c ff ff ff    	push   DWORD PTR [ebp-0xa4]
 8062343:	e8 be 55 ff ff       	call   8057906 <println>
 8062348:	83 c4 10             	add    esp,0x10
 806234b:	eb 3b                	jmp    8062388 <main__two+0x257>
 806234d:	c7 85 20 ff ff ff 54 	mov    DWORD PTR [ebp-0xe0],0x806a054
 8062354:	a0 06 08 
 8062357:	c7 85 24 ff ff ff 27 	mov    DWORD PTR [ebp-0xdc],0x27
 806235e:	00 00 00 
 8062361:	c7 85 28 ff ff ff 01 	mov    DWORD PTR [ebp-0xd8],0x1
 8062368:	00 00 00 
 806236b:	83 ec 04             	sub    esp,0x4
 806236e:	ff b5 28 ff ff ff    	push   DWORD PTR [ebp-0xd8]
 8062374:	ff b5 24 ff ff ff    	push   DWORD PTR [ebp-0xdc]
 806237a:	ff b5 20 ff ff ff    	push   DWORD PTR [ebp-0xe0]
 8062380:	e8 81 55 ff ff       	call   8057906 <println>
 8062385:	83 c4 10             	add    esp,0x10
 8062388:	90                   	nop
 8062389:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 806238c:	65 33 05 14 00 00 00 	xor    eax,DWORD PTR gs:0x14
 8062393:	74 05                	je     806239a <main__two+0x269>
 8062395:	e8 86 64 fe ff       	call   8048820 <__stack_chk_fail@plt>
 806239a:	c9                   	leave
 806239b:	c3                   	ret
```


- analysing main two we get these characters being loaded into the array in the unreachable part of the code so this is probably key 2. : `JKLq59U137`

- for main 1 i tried using gdb to try to reach the unreachable part of code but it didnt work : 
```bash
(base) ss@Satwik:/mnt/c/Cryptonite/Revchalls-main/Revchalls-main$ gdb ./flag{key1+key2}
GNU gdb (Ubuntu 15.0.50.20240403-0ubuntu1) 15.0.50.20240403-git
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
pwndbg: loaded 211 pwndbg commands. Type pwndbg [filter] for a list.
pwndbg: created 13 GDB functions (can be used with print/break). Type help function to see them.
/home/ss/.gdbinit:3: Error in sourced command file:
Undefined command: "import".  Try "help".
Reading symbols from ./flag{key1+key2}...

This GDB supports auto-downloading debuginfo from the following URLs:
  <https://debuginfod.ubuntu.com>
Debuginfod has been disabled.
To make this setting permanent, add 'set debuginfod enabled off' to .gdbinit.
(No debugging symbols found in ./flag{key1+key2})
------- tip of the day (disable with set show-tips off) -------
Use vmmap -A|-B <number> <filter> to display <number> of maps after/before filtered ones
pwndbg> break *0x806203c
Breakpoint 2 at 0x806203c
pwndbg> r
Starting program: /mnt/c/Cryptonite/Revchalls-main/Revchalls-main/flag{key1+key2}
[Thread debugging using libthread_db enabled]
Using host libthread_db library "/lib/x86_64-linux-gnu/libthread_db.so.1".

Breakpoint 1, 0x08061f82 in main.main ()
LEGEND: STACK | HEAP | CODE | DATA | WX | RODATA
─────────────────────────────────────────────────────────────────────────────[ REGISTERS / show-flags off / show-compact-regs off ]──────────────────────────────────────────────────────────────────────────────
 EAX  0
 EBX  0xf7fa0e34 (_GLOBAL_OFFSET_TABLE_) ◂— 0x230d2c /* ',\r#' */
 ECX  0x10
 EDX  0x124
 EDI  0xf7ffcb60 (_rtld_global_ro) ◂— 0
 ESI  0x8069580 (__libc_csu_init) ◂— push ebp
 EBP  0xffffc9c8 —▸ 0xffffc9d8 ◂— 0
 ESP  0xffffc9a0 —▸ 0xf7fc7540 (__kernel_vsyscall) ◂— push ecx
 EIP  0x8061f82 (main.main+6) ◂— mov dword ptr [ebp - 0x28], 0x17
───────────────────────────────────────────────────────────────────────────────────────[ DISASM / i386 / set emulate on ]────────────────────────────────────────────────────────────────────────────────────────
 ► 0x8061f82 <main.main+6>     mov    dword ptr [ebp - 0x28], 0x17      [0xffffc9a0] <= 0x17
   0x8061f89 <main.main+13>    mov    dword ptr [ebp - 0x24], 0x98c     [0xffffc9a4] <= 0x98c
   0x8061f90 <main.main+20>    cmp    dword ptr [ebp - 0x28], 0x2d      0x17 - 0x2d     EFLAGS => 0x293 [ CF pf AF zf SF IF df of ac ]
   0x8061f94 <main.main+24>  ✔ jne    main.main+33                <main.main+33>
    ↓
   0x8061f9d <main.main+33>    mov    dword ptr [ebp - 0x20], 0x806a004     [0xffffc9a8] <= 0x806a004 ◂— dec edi /* 'Oops wrong path' */
   0x8061fa4 <main.main+40>    mov    dword ptr [ebp - 0x1c], 0xf           [0xffffc9ac] <= 0xf
   0x8061fab <main.main+47>    mov    dword ptr [ebp - 0x18], 1             [0xffffc9b0] <= 1
   0x8061fb2 <main.main+54>    sub    esp, 4                                ESP => 0xffffc99c (0xffffc9a0 - 0x4)
   0x8061fb5 <main.main+57>    push   dword ptr [ebp - 0x18]
   0x8061fb8 <main.main+60>    push   dword ptr [ebp - 0x1c]
   0x8061fbb <main.main+63>    push   dword ptr [ebp - 0x20]
────────────────────────────────────────────────────────────────────────────────────────────────────[ STACK ]────────────────────────────────────────────────────────────────────────────────────────────────────
00:0000│ esp 0xffffc9a0 —▸ 0xf7fc7540 (__kernel_vsyscall) ◂— push ecx
01:0004│-024 0xffffc9a4 —▸ 0xf7fc7000 ◂— jg 0xf7fc7047
02:0008│-020 0xffffc9a8 ◂— 0
03:000c│-01c 0xffffc9ac —▸ 0xf7fa0e34 (_GLOBAL_OFFSET_TABLE_) ◂— 0x230d2c /* ',\r#' */
04:0010│-018 0xffffc9b0 —▸ 0x8069580 (__libc_csu_init) ◂— push ebp
05:0014│-014 0xffffc9b4 —▸ 0xf7ffcb60 (_rtld_global_ro) ◂— 0
06:0018│-010 0xffffc9b8 —▸ 0xffffc9d8 ◂— 0
07:001c│-00c 0xffffc9bc —▸ 0x8068fa9 (main+32) ◂— add esp, 0x10
──────────────────────────────────────────────────────────────────────────────────────────────────[ BACKTRACE ]──────────────────────────────────────────────────────────────────────────────────────────────────
 ► 0 0x8061f82 main.main+6
   1 0x8068fb1 main+40
   2 0xf7d94cb9 __libc_start_call_main+121
   3 0xf7d94d7c __libc_start_main+140
   4 0x8048971 _start+33
─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
pwndbg> x/wx $ebp-0x28
0xffffc9a0:     0xf7fc7540
pwndbg> set {int}($ebp-0x28) = 0x2d
pwndbg> x/wx $ebp-0x28
0xffffc9a0:     0x0000002d
pwndbg> continue
Continuing.
Oops wrong path
Oops wrong path
[Inferior 1 (process 1810) exited normally]
pwndbg>
```


After this i got stuck so i wasnt able to solve this challenge :

so flag : `flag{key1 +JKLq59U137 }`

