# Programming-course-cpp

`Jakub Piskorowski on 05/01/2022 wersja: 1.0`

## Temat: Instrukcja warunkowa if

Przedstawienie instrukcji warunkowej if

Kod źródłowy: [instrukcja-if.cpp](instrukcja-if.cpp)

&#x1F4D2; Poziom 1 

Powrót do [Instrukcje sterujace](/1-programowanie-strukturalne/1-2-instrukcje-sterujace/README.md)

---

## Objaśnienie

**Instrukcja warunkowa** (ang. conditional statement) pozwala wykonywać pewne instrukcje przy spełnionym bądź nie spełnionym warunku (ang. condition) - dzięki niej program nie musi zawsze biegnąć tą samą ścieżką, lecz w zależności od zastanej sytuacji może on wybierać właściwą drogę. Bez instrukcji warunkowej komputery byłyby niczym więcej niż kalkulatorami. Dzięki niej mogą rozwiązywać dowolnie skomplikowane problemy. Instrukcja warunkowa posiada w języku C++ następującą składnię:

```text
if(warunek) instrukcja1; else instrukcja2;
```

**warunek jest wyrażeniem logicznym**, które może przyjmować wartość `false` albo `true`. W zależności od jego wartości wykonywana jest jedna z instrukcji:

- warunek = `true` - wykonywana jest instrukcja1, a instrukcja2 zostaje pominięta
- warunek = `false` - pominięta zostanie instrukcja1, a wykonana instrukcja2.

Jeśli warunkowo wykonujemy tylko jedną instrukcję, to człon z else można pominąć:

```text
if(warunek) instrukcja;
```

W warunkach można stosować operatory porównań - wynikiem działania takiego operatora jest true, jeśli relacja jest spełniona i false w przypadku jej niespełnienia. Mamy następujące operatory porównań **(a i b to wyrażenia arytmetyczne, niekoniecznie zmienne!):**

| Operator  | Przykład |
| --------- | -------- |
| ==        | a == b  |
| !=    | a != b    |
| <     | a < b     |
| <=    | a <= b    |
| >     | a > b     |
| >=    | a >= b    |

:exclamation: Należy uważać z operatorem równości ==, gdyż pominięcie jednego znaku = robi z niego instrukcję przypisania.

---

### Przykłady uzycia

```cpp
// Znajdowanie większej z dwóch liczb

int a,b;

cin >> a >> b;
if(a > b) cout << a;
else cout << b;
cout << endl;    

```

```cpp
// Badanie znaku liczby

int a;

cin >> a;
if(a > 0) cout << "Dodatnia\n";
else if (a == 0) cout << "Zero\n";
else cout << "Ujemna\n";

```

---

### Funkcje logiczne

W języku C++ nad wyrażeniami możemy przeprowadzać operacje logiczne. Mamy trzy podstawowe funkcje logiczne:

- OR
- AND
- NOT

Operacja logicznego `OR` ma stan wysoki (`1` lub `true`), jeśli jedno lub oba wejścia do bramki mają stan wysoki (`1` lub `true`). Jeśli żadne z wejść nie jest wysokie, wynik jest niski (`0` lub `false`).

|  | OR | |
| --- | --- | --- |
| a | b | a \|\| b |
| false | false | false |
| false | true |true |
| true | false | true |
| true | true | true |

W bramce `AND`, jeśli jedno z wejść jest niskie (`0` lub `false`), to wyjście jest również niskie. Jeśli wszystkie wejścia są wysokie (`1` lub `true`), to wyjście również będzie wysokie.

|  | AND| |
| --- | --- | --- |
| a | b | a && b |
| false | false | false |
| false | true | false |
| true | false | false |
| true |true | true |

Bramka `NOT` ma zawsze stan wysoki (`1` lub `true`), gdy jej wejście jest niskie (`0` lub `false`). Odwrotnie, logiczna bramka `NOT` zawsze ma niski poziom (`0` lub `false`), gdy wejście jest wysokie (`1` lub `true`).

| NOT | |
| --- | --- |
| a | !a |
|false |true |
| true | false |

---

### Porownanie liczb zmiennoprzecinkowych

Przy pracy z typem double musimy zdawać sobie sprawę, że liczba zmiennoprzecinkowa jest liczbą przybliżoną (posiada precyzję 15 cyfr znaczących). Zatem rachunki wykorzystujące ten typ danych są rachunkami przybliżonymi i zwykle obarczone zostają pewnym (bardzo małym, ale zawsze) błędem.

```cpp
double x;

x = 0.1;
if(x * 10 == 1) cout << "Sa rowne \n";
else cout << "Nie sa rowne \n";
```

Wartość ``1/10``, która w systemie dwójkowym `tworzy ułamek nieskończony` - tak jak np. w systemie dziesiętnym ułamek `1/3` jest nieskończony - `0,33333...` taką przybliżoną wartość ułamka pomnożymy przez 10, to wynik będzie równy około 1, ale ``NIE DOKŁADNIE 1``.

:exclamation: Wynika stąd bardzo ważny wniosek na przyszłość - **liczb zmiennoprzecinkowych NIE WOLNO przyrównywać** do siebie, gdyż z powodu błędów zaokrągleń równość może nigdy nie wystąpić. Zamiast sprawdzania równości będziemy sprawdzali, czy różnica tych liczb jest dostatecznie mała. Jeśli tak, to przyjmiemy, że są równe. Jeśli nie, to przyjmiemy, że się różnią.

Źródło: [eduinf.waw.pl](https://eduinf.waw.pl/inf/utils/010_2010/0509.php)