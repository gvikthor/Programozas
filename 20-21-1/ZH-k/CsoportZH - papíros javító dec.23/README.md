# Rajta csak rajta, vasutasok fel!

## Információk 
A feladatok nem épülnek egymásra, bármilyen sorrendben megoldhatod őket!  

Beadás:  
- pdf, kép, docx, gyakorlatilag bármilyen formátum 
- E-mail cím: mohmas@inf.elte.hu
- Tárgy:  [ PROG ] - ZH *Saját Neved* (pl.: [ PROG ] - ZH Vasutas Zsolt )

A Széchenyi-hegyi Gyermekvasút 11.2km hosszan kanyarog a Budai-hegységben, ezzel a világ leghosszabb gyerekek által üzemeltetett vasútvonala, és egyben Budapest egyik legnagyobb látványossága is.

## 1. Feladat - Ismétlés

### Lore
A lelkes szolgálattevők számos beosztásban tevékenykedhetnek. Igaz, hogy Zsoltika **nem** volt kétszer egymás után ugyanabban a beosztásban?

### Például
Zsoltika szolgálatai: Váltókezelő, Pénztáros, Váltókezelő, Rendelkező, Váltókezelő, Naplózó → **igen**  
Zsoltika szolgálatai: Váltókezelő, Pénztáros, Pénztáros, Rendelkező, Naplózó, Váltókezelő → **nem**  
Zsoltika szolgálatai: Váltókezelő, Váltókezelő, Váltókezelő, Váltókezelő, Váltókezelő, Váltókezelő → **nem**  
Zsoltika szolgálatai: Pénztáros → **igen**  

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)

## 2. Feladat - Pénzmozgás

### Lore
Széchenyihegy a vasút egyik végállomása. Forgalmasabb nyári napokon a két 10-14 éves pénztáros kezeit összesen akár több millió forint is megjárhatja. Tudjuk, hogy egy nap mennyi volt az összbevétel, és hányan vettek jegyet. Lacika szeretné kideríteni, hogy melyik nap volt a legtöbb nagycsalád, vagyis **melyik nap volt a legtöbb az egy vásárlóra jutó költség**.

### Például  
**A táblázatban a *Ö/V* (össz bevétel/vásárlók) oszlop, ami az átlagos költése egy vásárlónak, csak szemléltetés miatt van ott, ez nem adott az adatokban!!**
|Vásárlók|Össz bevétel|*Ö/V*|
|-|-|-|
|1.300|780.000|600|
|720|505.000|701,3|
|1.275|510.000|400|
|800|400.000|500|
|800|560.000|700|
|1.200|1.200.000|1000|
|1.100|1.700.000|1545.5|
|**→ 7. nap**|

### Feladat (2/10 pont)
Készíts specifikációt a programhoz, ami megoldja a feladatot! (Be, Ki, Ef, Uf)  
Használhatsz két tömböt, vagy struktúrát is.  
*Ki kell kötni, hogy minden nap volt forgalom!*

## 3. Feladat - Késő bánat

### Lore
A naplózó azért felel, hogy egy adott állomásra beérkező vonatokat fogadja, menessze, és ezeket naplózza, s a naplóba felviszi a késéseket is. Petrácska ez utóbbit elfelejtette megtenni, de gyorsan összehasonlítja a menetrendet az érkezésekkel. Hány vonat érkezett pontosan (legfeljebb 1 perccel később/korábban)?

### Például
**A táblázatban a *Pontos* oszlop csak szemléltetés miatt van ott, ez nem adott az adatokban!!**
|Vonat száma|Menetrend|Érkezés|*Pontos*|
|-|-|-|-|
|117|9:27|9:27|igen|
|357|9:53|9:54|igen|
|112|10:26|10:32|nem|
|217|10:27|10:28|igen|
|212|11:26|11:31|nem|
|115|11:27|11:26|igen|
|352|11:46|11:59|nem|
|114|12:25|12:28|nem|
|215|12:27|12:27|igen|
|214|13:26|13:26|igen|
|113|13:27|13:27|igen|
|353|14:05|14:00|nem|
|116|14:26|14:29|nem|
|213|14:27|14:27|igen|
|216|15:26|15:30|nem|
|111|15:27|15:27|igen|
|356|15:55|16:20|nem|
|118|16:26|16:35|nem|
|211|16:27|16:27|igen|
|218|17:26|17:28|nem|
**→ 10 db**

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
A típuson értelmezett az kivonás (-) művelet, ami szintén *T* idő típust ad eredményül.

Pl.:  
t1.óra = 7  
t1.perc = 40  
t2.óra = 5  
t2.perc = 35  
t3 = t1 - t2  
t3.óra = 2  
t3.perc = 5  


### Pluszpont
Oldd meg a feladatot úgy, hogy a *T* típuson nem értelmezett a kivonás (de a természetes számokon IN továbbra is igen)! 