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
A lelkes szolgálattevők számos beosztásban tevékenykedhetnek, ezek közül egyik a váltókezelő. Zsoltika kíváncsi rá, hogy volt-e olyan, hogy három egymást követő szolgálatban is váltókezelő volt.

### Például
Zsoltika szolgálatai: Rendelkező, Pénztáros, Váltókezelő, Váltókezelő, Váltókezelő, Naplózó → **volt**  
Zsoltika szolgálatai: Rendelkező, Pénztáros, Jegyvizsgáló, Váltókezelő, Váltókezelő, Naplózó → **nem volt**  
Zsoltika szolgálatai: Váltókezelő, Pénztáros, Jegyvizsgáló, Váltókezelő, Váltókezelő, Naplózó → **nem volt**

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)

## 2. Feladat - Pénzmozgás

### Lore
Széchenyihegy a vasút egyik végállomása. Forgalmasabb nyári napokon a két 10-14 éves pénztáros kezeit összesen akár több millió forint is megjárhatja. Lacika szeretné kideríteni, hogy hány olyan nap volt, amikor az egy pénztárosra jutó tiszta bevétel elérte az 500.000 Forintot

### Például
|Össz bevétel|Pénztárosok száma|
|-|-|
|2|780.000|
|2|1.105.000|
|1|510.000|
|1|400.000|
|1|560.000|
|2|1.200.000|
**→ 4**

|Össz bevétel|Pénztárosok száma|
|-|-|
|2|780.000|
|2|890.000|
|1|370.000|
|1|210.000|
|1|480.000|
|1|190.000|
**→ 0**

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)  
Használhatsz két tömböt, vagy struktúrát is.

## 3. Feladat - Késő bánat

### Lore
A naplózó azért felel, hogy egy adott állomásra beérkező vonatokat fogadja, menessze, és ezeket naplózza, s a naplóba felviszi a késéseket is. Petrácska ez utóbbit elfelejtette megtenni, de gyorsan összehasonlítja a menetrendet az érkezésekkel. Melyik vonat késett a legtöbbet, és mennyit?

### Például
|Vonat száma|Menetrend|Érkezés|
|-|-|-|
|117|9:27|9:27|
|357|9:53|9:54|
|112|10:26|10:32|
|217|10:27|10:28|
|212|11:26|11:31|
|115|11:27|11:28|
|352|11:46|11:59|
|114|12:25|12:28|
|215|12:27|12:27|
|214|13:26|13:26|
|113|13:27|13:27|
|353|14:05|14:07|
|116|14:26|14:29|
|213|14:27|14:27|
|216|15:26|15:30|
|111|15:27|15:27|
|356|15:55|16:20|
|118|16:26|16:35|
|211|16:27|16:27|
|218|17:26|17:28|
**→ 356, 0:25**

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
A típuson értelmezett a kivonás (-) művelet, ami szintén *T* idő típust ad eredményül, valamint mind a négy féle rendezés (<, <=, >, >=), melyek logikai értéket adnak eredményül.

Pl.:  
t1.óra = 15  
t1.perc = 25  
t2.óra = 16  
t2.perc = 10  
t2 > t1 igaz


### Pluszpont
Oldd meg a feladatot úgy, hogy a *T* típuson nem értelmezettek a rendezések (de a természetes számokon IN továbbra is igen).  

Pl.:  
t2 > t1 nem értelmezhető  
t2.óra > t1.óra igaz  
t2.perc > t1.perc hamis