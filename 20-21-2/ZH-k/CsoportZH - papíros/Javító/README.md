# Állatkert

## Információk 
A feladatok nem épülnek egymásra, bármilyen sorrendben megoldhatod őket!  

Beadás:  
- pdf, kép, docx, gyakorlatilag bármilyen formátum 

Ha több részfeladatban is ugyanaz a bemenet/előfeltétel, elég egyszer leírni, és a későbbi feladatban jelezni, hogy ugyanaz, mint az x. számú feladatnál. 

## Alap feladat
A Nyíregyházi Állatpark képviselőtestülete szeretne segíteni a nemzetközi csereállatoknak. A legnagyobb probléma az Antarktiszról érkező pingvinek társadalombiztosításának lepapírozása, így Rutit, a borneói orángutánkölyköt bízzák meg, hogy vegye kezébe az ügyet.

A pingvinekről számon tartjuk, hogy mi a nevük (stirng), mikor érkeztek be aznap azt (idő), és hány regisztrált bűncselekményt követtek már el életükben.

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


A Pingvin típus/rekord nem adott, neked kell specifikálni, ha használni szeretnéd. Ekkor nem kell kikötni, hogy létezik értékadás operátor (:=), de ez esetben ezen kívül semmi más operátort ne használj a Pingvin típuson (de természetes számokon, stringeken, időn stb továbbra is értelmezettek a megszokott és megadott operátorok)!

Tudjuk, hogy nincs két azonos nevű pingvin. **Ezt neked kell kikötni a specifikációban!**

## 0. Feladat - Időkeret (1/10 pont)

Tudjuk, hogy az érkezések időpontjaiban (bemenetben) az órák értéke mindig a [0;23] intervallumba esik. Ezt nem kell kikötnöd minden előfeltételben, azonban ha egyszer leírod, egy pontot ér!

## 1. Feladat - Bűnös pingvinek (4/10 pont)

### Lore
Ha volt 5-nél több bűncselekménnyel regisztrált pingvin, ki volt az?

### Például
|Név|Időpont|Bűncselekmények|
|-|-|-|
|Mumble     |5:19   |0|
|Gloria     |5:19   |0|
|Ramon      |8:05   |2|
|Rico       |11:57  |37|
|Private    |11:59  |3|
|Kowalsky   |12:01  |4|
|Skipper    |12:03  |15|
→ **volt, Rico**  

|Név|Időpont|Bűncselekmények|
|-|-|-|
|Mumble     |5:19   |0|
|Gloria     |5:19   |0|
|Ramon      |8:05   |2|
|Private    |11:59  |3|
|Kowalsky   |12:01  |4|
→ **nem volt**

### Feladat
Készíts specifikációt a programhoz, ami megoldja a feladatot!
- Be+Ki: 0.5 pont
- Ef: 0.5 pont
- Uf: 1.5 pont
- Algoritmus: 1.5 pont

## 2. Feladat - Délutáni adminisztráció (5/10 pont)

### Lore
Ki követte el a legtöbb bűncselekményt a délután (12:00 után) érkezők közül? Ha nem volt ilyen, elég egy hamis logikai értéket megadni, nem kell feltétlen szöveg (de lehet úgy is csinálni).

### Például
|Név|Időpont|Bűncselekmények|
|-|-|-|
|Mumble     |5:19   |0|
|Gloria     |5:19   |0|
|Ramon      |8:05   |2|
|Rico       |11:57  |37|
|Private    |11:59  |3|
|Kowalsky   |12:01  |4|
|Skipper    |12:03  |15|
→ **Skipper**  

|Név|Időpont|Bűncselekmények|
|-|-|-|
|Mumble     |5:19   |0|
|Gloria     |5:19   |0|
|Ramon      |8:05   |2|
|Rico       |11:57  |37|
|Private    |11:58  |3|
|Kowalsky   |11:58  |4|
|Skipper    |11:59  |15|
→ **nem volt**

### Feladat
Készíts specifikációt a programhoz, ami megoldja a feladatot!
- Be+Ki: 0.5 pont
- Ef: 0.5 pont
- Uf: 2 pont
- Algoritmus: 2 pont

## +1. Feladat - Esti adminisztráció (+2 pont)
**Ezt csak akkor oldd meg, ha úgy érzed, kész az előző feladat!**  
Az előző feladat utófeltételét (1 pont) és algoritmusát (1 pont) módosítsd úgy, hogy az érkezések kifejezetten csak délután legyen, este ne, tehát az intervallum 12 óra 0 perctől 17 óra 30 percig tartson.