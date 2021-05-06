# Programozási tételek

Ez a file önmagában nem biztosít elégséges tudást a tárgy teljesítéséhez! **Nem helyettesíti az előadást, csak az ott elhangzottakból egy kivonatot ad!** Mindenképpen az órai anyagokkal együtt értelmezendő, de ha azok mennek, akkor segít összefoglalni kicsit.

Egyre kevesebbet írok pluszba az egyes tételekről, nyilván sok elméleti lépés átvihető egyikről a másikra.

Figyelj rá végig, hogy itt 1-től N-ig indexelünk, nem 0-tól (N-1)-ig! Sok helyen emiatt i <= N helyett 0-tól indexelő nyelvben i < N kell, és i := 1 helyett i := 0.

Nem deklarálgatok N-eket meg i-ket, ha magától értetődő.

## Egyszerű tételek (4. előadás)

### Összegzés

```
1   Összeg: ℕ
2   Értékek: Tömb[1..N | ℕ]
    ------------------------
3   Összeg := 0
4   Ciklus i=1..N:
5       Összeg := Összeg + Értékek[i]
6   Ciklus vége
```
Az `Összeg` egyébként **bármilyen** típus lehet (1. sor), amire értelmezett valamilyen művelet, amit összegzés jelleggel akarunk elvégezni. Ekkor arra kell figyelni, hogy a 2. sorban az `Értékek` tömb elemeinek típusát is erre javítsuk, a 3. sorban az összeg értéke a művelet nulleleme legyen és az 5. sorban a műveletet írjuk át a megfelelőre. Például, ha szövegeket akarunk összefűzni, akkor az `Összeg` típusa string, az `Értékek` típusa Tömb[1..N | string], a 3 sorban a kezdőérték az üres string ('') az 5. sorban a művelet pedig string összefűzés (ami jelölhető plusz jellel is). Összegzéssel lehet pl. valós számokat összeszorozni is, ekkor a típus a valós számok, a tömbelemek is valósak, az összeg 1-ről indul, a művelet pedig a szorzás. Fontos, hogy a művelet zárt legyen a típusra! Kivonás művelettel nem tudunk összegezni természetes számokon, csak egészeken!

### Megszámolás

```
1   Db: ℕ
2   Értékek: Tömb[1..N | ℝ]
3   Feltétel: ℝ → L
    ------------------------
4   Db := 0
5   Ciklus i=1..N:
6       Ha Feltétel(Értékek[i]):
7           Db := Db + 1
8       Elágazás vége
9   Ciklus vége
```
Megint csak, a tömbértékek típusa változhat, de ez esetben a `Feltétel` függvény értelmezési tartományát is megfelelően változtatni kell. A függvény értékkészlete mindig logikai (igaz vagy hamis), hiszen egy elágazás feltételébe írjuk bele.

### Maximum-kiválasztás

#### Indexes megoldás
```
 1   MaxIndex : ℕ
 2   Értékek: Tömb[1..N | ℝ]
     ------------------------
 3   MaxIndex := 1
 4   Ciklus i=2..N:
 5       Ha Értékek[i] > Értékek[MaxIndex]:
 6           MaxIndex := i
 7       Elágazás vége
 8   Ciklus vége  
```
Ha más típussal akarunk dolgozni, csak az `Értékek` tömb elemeinek típusát kell változtatni, illetve arra figyelni, hogy a feltételben adott reláció értelmezve legyen. Ez a reláció bármilyen rendezés lehet, tehát kereshetünk többek közt minimumot is vele.

#### Maxértékes megoldás
```
 1   MaxÉrték : ℝ
 2   Értékek: Tömb[1..N | ℝ]
     ------------------------
 3   MaxÉrték := Értékek[1]
 4   Ciklus i=2..N:
 5       Ha Értékek[i] > MaxÉrték:
 6           MaxÉrték := Értékek[i]
 7       Elágazás vége
 8   Ciklus vége  
```
Itt változtatni kell a `MaxÉrték` típusát is, ha más típussal dolgozunk.

### Eldöntés

#### Alap eset
Van olyan elem, amire teljesül a feltétel?
```
 1   Van: L
 2   Értékek: Tömb[1..N | ℝ]
 3   Feltétel: ℝ → L
     ------------------------
 4   Van := hamis
 5   i := 1
 6   Ciklus amíg i <= N és !Van:
 7       Van := Feltétel(Értékek[i])
 8       i := i + 1
 9   Ciklus vége 
```
A `Feltétel` az `Értékek` elemeinek típusából rendel logikaiba. Ez bármilyen típus lehet, nem feltétlen kell valós számnak lennie, de egyezzen meg a kettő!

#### Fordított eset
Minden elemre teljesül a feltétel?
```
 1   Mind: L
 2   Értékek: Tömb[1..N | ℝ]
 3   Feltétel: ℝ → L
     ------------------------
 4   Mind := igaz
 5   i := 1
 6   Ciklus amíg i <= N és Mind:
 7       Mind := Feltétel(Értékek[i])
 8       i := i + 1
 9   Ciklus vége 
```

### Kiválasztás
Adjunk meg egy olyan elemet, amire teljesül a feltétel. **BIZTOSAN VAN ILYEN ELEM** -> ezért is hívjuk a korábbi tételt maximum kiválasztásnak, mert biztosan van maximum.

```
 1   Elem: ℝ
 2   Értékek: Tömb[1..N | ℝ]
 3   Feltétel: ℝ → L
     ------------------------  
 4   i := 0
 5   Ciklus amíg nem Feltétel(Értékek[i])
 6       i := i + 1
 7   Ciklus vége
 8   Elem := Értékek[i] 
```
`Elem`, `Értékek` elemei és `Feltétel` értelmezési tartománya azonos típus.


### Keresés
Van olyan elem, amire teljesül a feltétel? Ha igen, melyik az? Nem követelmény, hogy legyen ilyen elem -> ezért is hívjuk a majdani összetett algoritmust feltételes maximumkeresésnek, mert nem biztos, hogy van olyan elem, amire teljesül a feltétel, így nem is biztos, hogy van maximum.

#### Van-os megoldás
```
 1   Elem: ℝ
 2   Van: L
 3   Értékek: Tömb[1..N | ℝ]
 4   Feltétel: ℝ → L
     ------------------------  
 5   i := 1
 6   Ciklus amíg i <= N és nem Van
 7       Van := Feltétel(Értékek[i])
 8       i := i + 1
 9   Ciklus vége
10   Ha Van:
11       Elem := Értékek[i-1] 
12   Elágazás vége
```
`Elem`, `Értékek` elemei és `Feltétel` értelmezési tartománya azonos típus.

#### Indexes megoldás
```
 1   Elem: ℝ
 2   Értékek: Tömb[1..N | ℝ]
 3   Feltétel: ℝ → L
     ------------------------  
 4   i := 1
 5   Ciklus amíg i <= N és nem Feltétel(Értékek[i])
 6       i := i + 1
 7   Ciklus vége
 8   Ha i <= N:
10       Elem := Értékek[i] 
11   Elágazás vége
```

## Összetett tételek (5. előadás)
Innentől *X* és *Y* típusokat fognak jelölni, bármi behelyettesíthető a helyükre (ℕ, ℝ, L, Ember, Képviselő, Tömb stb.), csak felesleges lenne mindenhol kifejteni, hogy mi cserélhető, mi azonos stb.

Természetes mindegyik megoldható dinamikus tömbökkel (vektor és push_back), ekkor nem kell előre megadni az eredmény tömböknek méretet.

### Másolás (függvényszámítás)

```
 1   Értékek: Tömb[1..N | X]
 2   Eredmények: Tömb[1..N | Y]
 3   Függvény: X → Y
     ------------------------
 4   Ciklus i=1..N:
 5       Eredmények[i] := Függvény(Értékek[i])
 6   Ciklus vége
```
A `Függvény` lehet az identitás is, ekkor sima másolás.

### Kiválogatás

```
 1   Értékek: Tömb[1..N | X]
 2   Eredmények: Tömb[1..N | X]
 3   Db: ℕ
 4   Feltétel: X → L
     ------------------------
 5   Db := 0
 6   Ciklus i=1..N:
 7       Ha Feltétel(Értékek[i]):
 8           Db := Db + 1
 9           Eredmények[Db] := Értékek[i]
10       Elágazás vége
11   Ciklus vége
```
Ha nullától indexelnénk, `Db` továbbra is 0-ról indulna, csak megcserélnénk a 8. és 9. sorokat.

### Szétválogatás
Itt a legáltalánosabbat írom le, vannak specifikusabb megoldások az előadásban.

```
 1   Értékek: Tömb[1..N | X]
 2   Eredmények1: Tömb[1..N | X]
 3   Db1: ℕ
 4   Feltétel1: X → L
 5   Eredmények2: Tömb[1..N | X]
 6   Db2: ℕ
 7   Feltétel2: X → L
     ...
 8   EredményekM: Tömb[1..N | X]
 9   DbM : ℕ
10   FeltételM: X → L
     ------------------------
11   Db1, Db2 ... DbM := 0
12   Ciklus i=1..N:
13       Ha Feltétel1(Értékek[i]):
14           Db1 := Db1 + 1
15           Eredmények1[Db1] := Értékek[i]
16       Egyébként ha Feltétel2(Értékek[i]):
17           Db2 := Db2 + 1
18           Eredmények2[Db2] := Értékek[i]
         ...
19       Egyébként ha FeltételM(Értékek[i]):
20           DbM := DbM + 1
21           Eredmények[DbM] := Értékek[i]
22       Elágazás vége
23   Ciklus vége
```
`Feltétel1`, `Feltétel2`, ..., `FeltételM` kölcsönösen kizárják egymást minden kombinációban.

### Metszet

#### Inline
```
 1   Értékek1: Tömb[1..N | X]
 2   Értékek2: Tömb[1..M | X]
 3   Metszet: Tömb[1..N+M | X]
 4   Db: ℕ
 5   BenneVan: L
     ------------------------
 6   Db := 0
 7   Ciklus i=1..N:
 8      BenneVan := hamis
 9      j := 1
10      Ciklus amíg j <= M és nem BenneVan:
11          BenneVan := Értékek1[i] = Értékek2[j]
12          j := j + 1
13      Ciklus vége
14      Ha BenneVan:
15          Db := Db + 1
16          Metszet[Db] := Értékek1[i]
17      Elágazás vége
18  Ciklus vége
```
Az i-s ciklus megy végig az `Értékek1` tömbön, a j-s ciklus pedig `Értékek2`-n ellenőriz.

#### Függvénnyel
```
 1  BenneVan(Elem: Y, Tömb: [1..K | Y]):
 2      Van := hamis
 3      i := 1
 4      Amíg i <= K és nem Van:
 5          Van := Elem = Tömb[i]
 6          i := i + 1
 7      Ciklus vége
 8      Return Van
 9  BenneVan vége
         
```
```
 1   Értékek1: Tömb[1..N | X]
 2   Értékek2: Tömb[1..M | X]
 3   Metszet: Tömb[1..N+M | X]
 4   Db: ℕ
 5   BenneVan: X → L
     ------------------------
 6   Db := 0
 7   Ciklus i=1..N:
 8      Ha BenneVan(Értékek1[i], Értékek2):
 9          Db := Db + 1
10          Metszet[Db] := Értékek1[i]
11      Elágazás vége
12  Ciklus vége
```
A `BenneVan` függvény bármilyen típusra meg lehet írva, a lényeg, hogy legyen olyan is, ahol X-re értelmezett.

### Unió

#### Inline
```
 1   Értékek1: Tömb[1..N | X]
 2   Értékek2: Tömb[1..M | X]
 3   Unio: Tömb[1..N+M | X]
 4   Db: ℕ
 5   BenneVan: L
     ------------------------
 6   Db := M
 7   Unio[1..M] := Értékek2
 8   Ciklus i=1..N:
 9      BenneVan := hamis
10      j := 1
11      Ciklus amíg j <= M és nem BenneVan:
12          BenneVan := Értékek1[i] = Értékek2[j]
13          j := j + 1
14      Ciklus vége
15      Ha nem BenneVan:
16          Db := Db + 1
17          Unio[Db] := Értékek1[i]
18      Elágazás vége
19  Ciklus vége
```

#### Függvénnyel
```
 1  BenneVan(Elem: Y, Tömb: [1..K | Y]):
 2      Van := hamis
 3      i := 1
 4      Amíg i <= K és nem Van:
 5          Van := Elem = Tömb[i]
 6          i := i + 1
 7      Ciklus vége
 8      Return Van
 9  BenneVan vége
         
```
```
 1   Értékek1: Tömb[1..N | X]
 2   Értékek2: Tömb[1..M | X]
 3   Unio: Tömb[1..N+M | X]
 4   Db: ℕ
 5   BenneVan: X → L
     ------------------------
 6   Db := M
 7   Unio[1..M] := Értékek2
 8   Ciklus i=1..N:
 9      Ha nem BenneVan(Értékek1[i], Értékek2):
10          Db := Db + 1
11          Unio[Db] := Értékek[i]
12      Elágazás vége
13  Ciklus vége
```