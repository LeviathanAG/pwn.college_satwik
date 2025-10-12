# Torrent analyze (medium )

Its a pcap file so i open it in wireshark to analyse.

- i already have the all torrent filter enabled in the analyse header.

- i now how to understand how the packet protocols work to get the file name.

- ik how the minecraft client side and serverside packet protocols work so I used the link in references to understand the same for p2p torrent packets 

- after analysis the traffic and the documentation, we understand that when someone uses a magnet torrent link to download something, we become a `peer` and when we reach a certain amount of download we ourselves start `seeding` with a checksum which determines the integrity of the files.


when we just eye the pcap file we can see that one address `192.168.73.132` occurs in both the sections source and destination.

after some reading i understood that all p2p packets are binary encoded.


also wehenever i open up the special ip to anaylyse when its a soruce ip i see that it has 8 additional nodes and these are the `leechers` who dont seed much i think. i learned this after reading : http://bittorrent.org/beps/bep_0005.html


now to solve our challenge, we either have to carve out the enitre files sent thru p2p or get the metadata of the torrent file and not the file downloaded somehow : 

idk how i would carve out entire files or if its even possible so lets try metadat first since i found some website where it talks abt this :http://bittorrent.org/beps/bep_0003.html

it talks about how `info_hash which is a 20 byte SHA-1 hash binary encoded.`

`contains the metadata info.`



now we can easily filter out these hashes using tshark or python or whatevr.




```bash
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ tshark -r torrent.pcap -Y 'frame contains "info_hash"'
   79 4.864344025 5.189.157.90 → 192.168.73.132 BT-DHT 139 Get_peers Info_hash=17d62de1495d4404f6fb385bdfd7ead5c897ea22
  332 7.681928837 95.146.167.87 → 192.168.73.132 BT-DHT 265 Announce_peer Info_hash=17c1e42e811a83f12c697c21bed9c72b5cb3000d
  429 8.605862029 186.105.1.103 → 192.168.73.132 BT-DHT 146 Get_peers Info_hash=d59b1ce3bf41f1d282c1923544629062948afadd
  436 8.771325275 191.37.246.111 → 192.168.73.132 BT-DHT 146 Get_peers Info_hash=078e18df4efe53eb39d3425e91d1e9f4777d85ac
 1587 13.891232052 212.96.69.84 → 192.168.73.132 BT-DHT 146 Get_peers Info_hash=7af6be54c2ed4dcb8d17bf599516b97bb66c0bfd
 3999 15.367739447 114.35.63.17 → 192.168.73.132 BT-DHT 157 Get_peers Info_hash=17c0c2c3b7825ba4fbe2f8c8055e000421def12c
36047 18.777347266 5.189.157.90 → 192.168.73.132 BT-DHT 139 Get_peers Info_hash=17c02f9957ea8604bc5a04ad3b56766a092b5556
51080 20.689763723 192.168.73.132 → 107.181.231.146 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51081 20.689807803 192.168.73.132 → 159.89.144.30 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51082 20.689828638 192.168.73.132 → 18.190.61.127 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51179 20.748056557 192.168.73.132 → 77.183.44.118 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51212 20.776335262 192.168.73.132 → 181.114.168.101 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51464 20.883349377 192.168.73.132 → 37.187.123.154 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51519 20.909443842 192.168.73.132 → 5.167.155.85 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51679 20.971791283 192.168.73.132 → 92.30.74.80  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51883 21.067610254 192.168.73.132 → 141.98.252.166 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
51886 21.068618951 192.168.73.132 → 178.45.34.11 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52103 21.164086531 192.168.73.132 → 5.53.229.134 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52298 21.238385537 192.168.73.132 → 185.137.175.94 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52443 21.318654412 192.168.73.132 → 79.6.179.56  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52497 21.354794488 192.168.73.132 → 75.81.99.69  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52728 21.448765976 192.168.73.132 → 73.141.191.74 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
52750 21.457673439 192.168.73.132 → 185.21.216.144 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53000 21.558744338 192.168.73.132 → 185.21.216.144 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53004 21.559485284 192.168.73.132 → 93.183.220.117 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53121 21.606834813 192.168.73.132 → 203.63.191.254 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53293 21.661333748 192.168.73.132 → 83.251.164.175 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53443 21.708851452 192.168.73.132 → 222.117.54.145 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53682 21.801628138 192.168.73.132 → 61.147.59.154 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
53929 21.857749151 192.168.73.132 → 87.74.225.9  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
54076 21.921602048 192.168.73.132 → 157.45.224.155 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
54266 21.968537279 192.168.73.132 → 39.50.21.72  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
54647 22.163300442 192.168.73.132 → 139.210.21.72 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
56120 22.753261489 192.168.73.132 → 179.198.206.25 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
56914 22.997661846 192.168.73.132 → 153.225.15.139 BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
57448 23.188867642 192.168.73.132 → 177.51.65.1  BT-DHT 139 Get_peers Info_hash=e2467cbf021192c241367b892230dc1e05c0580e
```
lets further reduce our output
```bash

tshark -r torrent.pcap -Y 'frame contains info_hash' -T fields -e bt-dht.bencoded.string | sort | uniq > data.txt
```
output : 

```bash
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ tshark -r torrent.pcap -Y 'frame contains "info_hash"' -
T fields -e bt-dht.bencoded.string | sort | uniq > data.txt
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ la
data.txt  flag2of2-final.png  pdfimg.png  torrent.pcap
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ ls
data.txt  flag2of2-final.png  pdfimg.png  torrent.pcap
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$ cat data.txt
a,id,078e187bd1d82033f572e8294f9e0453a668cbc8,info_hash,078e18df4efe53eb39d3425e91d1e9f4777d85ac,q,get_peers,t,7c56,v,4c540102,y,q
a,id,0a8c3892819b5045dacc9b1174bbf1047219c684,info_hash,17c0c2c3b7825ba4fbe2f8c8055e000421def12c,noseed,q,get_peers,t,dbb2,v,4c540100,y,q
a,id,17c1ec414b95fc775d7dddcb686693b7863ac1aa,info_hash,e2467cbf021192c241367b892230dc1e05c0580e,q,get_peers,t,6770c723,y,q
a,id,320614d6ae529049f1f1bbe9ebb3a6db3c870ce1,implied_port,info_hash,17c1e42e811a83f12c697c21bed9c72b5cb3000d,name,Zoo (2017) 720p WEB-DL x264 ESubs - MkvHub.Com,port,seed,token,cfd76f718b52c968,q,announce_peer,t,ce300000,v,5554b206,y,q
a,id,7af66b61085da78cd4ad2771f2a2a65b79fe1c06,info_hash,7af6be54c2ed4dcb8d17bf599516b97bb66c0bfd,q,get_peers,t,165d,v,4c540101,y,q
a,id,99a047b561fc2b3e22dedcc23a7a237fcbd6c47b,info_hash,17d62de1495d4404f6fb385bdfd7ead5c897ea22,q,get_peers,t,ce83d90f,y,q
a,id,c8e1fb9368b62f6c04838748c83a8ce01ced7cbb,info_hash,17c02f9957ea8604bc5a04ad3b56766a092b5556,q,get_peers,t,94f3c30f,y,q
a,id,e29d2ea7482421b50f55b44da26352f28666ce57,info_hash,d59b1ce3bf41f1d282c1923544629062948afadd,q,get_peers,t,27e1,v,4c540102,y,q
ss@Satwik:/mnt/c/Cryptonite/pwn.college_satwik/Forensics/files$
```

now i match thse hashes i got with some hash db but couldnt find anything so i just put all these hashes in google one by one

which finally got me a match hash in linuxtracker.org -
 file name : 

ubuntu-19.10-desktop-amd64.iso

this was kind of obvious itd be ubuntu since we were seeing tls handshaking to th e ubuntu website

# The flag : 
`picoCTF{ubuntu-19.10-desktop-amd64.iso}`





### REFERENCES

http://bittorrent.org/beps/bep_0005.html

https://buildmedia.readthedocs.org/media/pdf/btdht/dev/btdht.pdf

https://wiki.theory.org/BitTorrentSpecification

https://linuxtracker.org/index.php?page=torrent-details&id=e2467cbf021192c241367b892230dc1e05c0580e

