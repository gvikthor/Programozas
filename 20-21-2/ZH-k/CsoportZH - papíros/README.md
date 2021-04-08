# Állatkert

## Információk 
A feladatok nem épülnek egymásra, bármilyen sorrendben megoldhatod őket!  

Beadás:  
- pdf, kép, docx, gyakorlatilag bármilyen formátum 

Ha több részfeladatban is ugyanaz a bemenet/előfeltétel, elég egyszer leírni, és a későbbi feladatban jelezni, hogy ugyanaz, mint az x. számú feladatnál. 

## Alap feladat
A Nyíregyházi Állatpark számtalan bentlakóval büszkélkedhet. A nagy sokaságból kitűnik pár állat, például Ruti, az ország első borneói orángután kölyke, aki nemrég lett 8 éves. A borneói orángután, a világ legnagyobb fán élő emlőse, elsősorban gyümölcsökkel táplálkozik, de leveleket, gallyakat, rügyeket és virágokat is fogyaszt. Étrendjét kisebb rovarokkal, gerincesekkel, tojással egészíti ki.

Ruti étkezéseit számon tartjuk. Mindegyikről tudjuk, hogy mi volt az étel neve (stirng), hány gramm volt (természetes szám) és mikor ette azt (idő).

Az idő típus/rekord a következőképp épül fel:
```
idő = record(
    óra  : IN,
    perc : [0;59] ⊆ IN
)
```
Az idő típuson/rekordon értelmezett a matematikai
- ekvivalencia reláció (=), melynek eredménye logikai érték
- összeadás (+), melynek eredménye szintén idő (a percek megfelelően fordulnak át órába; az óra nincs 23-ra maximalizálva, mert ha időmérésre használnánk, lehet, hogy több, mint 23 órát mértünk)
- kivonás (-), melynek eredménye szintén idő (a percek megfelelően fordulnak át órába; negatív eredmény nincs, abszolút különbséget számol)

és a programozás elméleti
- ekvivalencia reláció (=), ld. előbb
- összeadás (+), ld. előbb
- kivonás (-), ld. előbb
- értékadás (:=), mely egy idő típusú változót értékül ad egy másik idő típusú változónak

Az idő típuson/rekordon nem értelmezett (részben)rendezés (<, <=, >, >=), de természetes számokon továbbra is igen!


Az Étkezés típus/rekord nem adott, neked kell specifikálni, ha használni szeretnéd. Ekkor nem kell kikötni, hogy létezik értékadás operátor (:=), de ez esetben ezen kívül semmi más operátort ne használj az Étkezés típuson (de természetes számokon, stringeken, időn stb továbbra is értelmezettek a megszokott és megadott operátorok)!

Tudjuk, hogy Ruti nem evett kétszer ugyanolyan ételt (tehát nincs két olyan étkezés, amiben az étel neve megegyezne), de **ezt neked kell kikötni a specifikációban!**

## 0. Feladat - Időkeret (1/10 pont)

Tudjuk, hogy az étkezések időpontjaiban (bemenetben) az órák értéke mindig a [0;23] intervallumba esik. Ezt nem kell kikötnöd minden előfeltételben, azonban ha egyszer leírod, egy pontot ér!

## 1. Feladat - Laktató étkezés (4/10 pont)

### Lore
Ha volt Rutinak 150 grammos, vagy nagyobb tömegű étkezése, mi volt az?

### Például
|Név|Tömeg|Időpont|
|-|-|-|
|Hernyó|20|10:57|
|Tücsök|15|7:11|
|Alma|130|11:27|
|Narancs|150|6:31|
|Gally|10|5:19|
|BigMac|219|8:05|
→ **volt, Narancs**  

|Név|Tömeg|Időpont|
|-|-|-|
|Hernyó|20|10:57|
|Tücsök|15|8:11|
|Alma|130|11:27|
|Narancs|149|13:31|
|Gally|10|21:19|
|BigMac|149|8:05|
→ **nem volt**

### Feladat
Készíts specifikációt a programhoz, ami megoldja a feladatot!
- Be+Ki: 0.5 pont
- Ef: 0.5 pont
- Uf: 1.5 pont
- Algoritmus: 1.5 pont

## 2. Feladat - Laktató reggeli (5/10 pont)

### Lore
Összesen hány grammot fogyasztott Ruti reggelikre? A reggeli egy 8 óra előtti étkezés (0 óra 0 perctől 7 óra 59 percig).

### Például
|Név|Tömeg|Időpont|
|-|-|-|
|Hernyó|20|10:57|
|Tücsök|15|7:11|
|Alma|130|11:27|
|Narancs|150|6:31|
|Gally|10|5:19|
|BigMac|219|8:05|
→ **175**

|Név|Tömeg|Időpont|
|-|-|-|
|Hernyó|20|10:57|
|Tücsök|15|8:11|
|Alma|130|11:27|
|Narancs|150|13:31|
|Gally|10|21:19|
|BigMac|219|8:05|
→ **0**

### Feladat
Készíts specifikációt a programhoz, ami megoldja a feladatot!
- Be+Ki: 0.5 pont
- Ef: 0.5 pont
- Uf: 2 pont
- Algoritmus: 2 pont

## +1. Feladat - Reggeli és uzsonna (+2 pont)
**Ezt csak akkor oldd meg, ha úgy érzed, kész az előző feladat!**  
Az előző feladat utófeltételét (1 pont) és algoritmusát (1 pont) módosítsd úgy, hogy az étkezések intervalluma 0 óra 0 perctől 10 óra 30 percig tartson.