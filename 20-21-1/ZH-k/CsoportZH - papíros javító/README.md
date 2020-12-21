# Rajta csak rajta, vasutasok fel!

## Információk 
A feladatok nem épülnek egymásra, bármilyen sorrendben megoldhatod őket!  

Beadás:  
- pdf, kép, docx, gyakorlatilag bármilyen formátum 
- E-mail cím: mohmas@inf.elte.hu
- Tárgy:  [ PROG ] - ZH *Saját Neved* (pl.: [ PROG ] - ZH Vasutas Zsolt )

A Széchenyi-hegyi Gyermekvasút 11.2km hosszan kanyarog a Budai-hegységben, ezzel a világ leghosszabb gyerekek által üzemeltetett vasútvonala, és egyben Budapest egyik legnagyobb látványossága is.

## 1. Feladat - Váltogatás

### Lore
A lelkes szolgálattevők számos beosztásban tevékenykedhetnek. Igaz, hogy ugyanaz Zsoltika első két szolgálata, mint az utolsó?

### Például
Zsoltika szolgálatai: Váltókezelő, Pénztáros, Váltókezelő, Rendelkező, Váltókezelő, Naplózó → **nem**  
Zsoltika szolgálatai: Váltókezelő, Pénztáros, Váltókezelő, Rendelkező, Naplózó, Váltókezelő → **nem**  
Zsoltika szolgálatai: Váltókezelő, Váltókezelő, Pénztáros, Rendelkező, Váltókezelő, Naplózó → **nem**  
Zsoltika szolgálatai: Pénztáros, Pénztáros, Naplózó, Jegyvizsgáló, Váltókezelő, Váltókezelő, Naplózó, Pénztáros → **igen**  
Zsoltika szolgálatai: Váltókezelő, Váltókezelő, Pénztáros, Naplózó, Váltókezelő, Jegyvizsgáló, Váltókezelő → **igen**  
Zsoltika szolgálatai: Jegyvizsgáló, Jegyvizsgáló → **igen**  
Zsoltika szolgálatai: Naplózó → **nem értelmezhető a feladat, nem lehet ilyen bemenet**

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)

## 2. Feladat - Pénzmozgás

### Lore
Széchenyihegy a vasút egyik végállomása. Forgalmasabb nyári napokon a két 10-14 éves pénztáros kezeit összesen akár több millió forint is megjárhatja. Lacika szeretné kideríteni, hogy az elmúlt 7 napban melyik **hétköznap** volt a legmagasabb bevétel.

### Például  
|Nap|Össz bevétel|
|-|-|
|Hétfő|780.000|
|Kedd|505.000|
|Szerda|510.000|
|Csütörtök|400.000|
|Péntek|560.000|
|Szombat|1.200.000|
|Vasárnap|1.700.000|
|**→ Hétfő**|

|Nap|Össz bevétel|
|-|-|
|Csütörtök|300.000|
|Péntek|960.000|
|Szombat|1.500.000|
|Vasárnap|1.950.000|
|Hétfő|680.000|
|Kedd|490.000|
|Szerda|480.000|
|**→ Péntek**|

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)  
Használhatsz két tömböt, vagy struktúrát is.

## 3. Feladat - Késő bánat

### Lore
A naplózó azért felel, hogy egy adott állomásra beérkező vonatokat fogadja, menessze, és ezeket naplózza, s a naplóba felviszi a késéseket is. Petrácska ez utóbbit elfelejtette megtenni, de gyorsan összehasonlítja a menetrendet az érkezésekkel. Mennyi az össz késése a hegyről lefele közlekedő vonatoknak? A hegyről lefele közlekedő vonatok száma páros, a felfele haladóké páratlan.

### Például
**A táblázatban a *Késés* oszlop csak szemléltetés miatt van ott, ez nem adott az adatokban!!**
|Vonat száma|Menetrend|Érkezés|*Késés*|
|-|-|-|-|
|117|9:27|9:27||
|357|9:53|9:54||
|112|10:26|10:32|6 perc|
|217|10:27|10:28||
|212|11:26|11:31|5 perc|
|115|11:27|11:28||
|352|11:46|11:59|18 perc|
|114|12:25|12:28|3 perc|
|215|12:27|12:27||
|214|13:26|13:26|0 perc|
|113|13:27|13:27||
|353|14:05|14:07||
|116|14:26|14:29|3 perc|
|213|14:27|14:27||
|216|15:26|15:30|4 perc|
|111|15:27|15:27||
|356|15:55|16:20|25 perc|
|118|16:26|16:35|9 perc|
|211|16:27|16:27||
|218|17:26|17:28|2 perc|
**→ 1 óra 15 perc**

### Feladat (6/10 pont)
Készíts specifikációt (Be, Ki, Ef, Uf) **és struktogramot** a programhoz, ami megoldja a feladatot! Figyelj arra, hogy a vonatszámok legyenek egyediek!  
Használhatsz három tömböt, vagy struktúrát is.  


Tegyük fel, hogy létezik *T* idő típus.
````
T = Rekord(
    óra: IN,
    perc: IN
)
````
A típuson értelmezett az összeadás (+) művelet, ami szintén *T* idő típust ad eredményül.

Pl.:  
t1.óra = 7  
t1.perc = 40  
t2.óra = 5  
t2.perc = 35  
t3 = t1 + t2  
t3.óra = 13  
t3.perc = 15  


### Pluszpont
Oldd meg a feladatot úgy, hogy a *T* típuson nem értelmezett az összeadás (de a természetes számokon IN továbbra is igen)! 