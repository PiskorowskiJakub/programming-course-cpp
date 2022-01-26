# Programming-course-cpp

`Jakub Piskorowski on 10/01/2022 wersja: 1.0`

## Temat: Struktury danych w zadaniach

Przedstawienie czym są struktury danych oraz jak ich używać.

![#fd646e](https://via.placeholder.com/15/fd646e/000000?text=+) `Poziom 3`

Powrót do [Struktury danych](/1-programowanie-strukturalne/1-3-struktury-danych/README.md)

---

## Dział 136 - Struktury danych

[Struktury](/1-programowanie-strukturalne/1-3-struktury-danych/1-3-6-struktury/README.md) (powrót) \
Zadanie 1 - [Baza danych zwierząt](#zadanie-1---baza-danych-zwierzat) \
Zadanie 2 - [Baza księgarni](#zadanie-2---baza-ksiegarni)

---

### Zadanie 1 - Baza danych zwierzat

Farmer zwrócił się do Ciebie z prośbą byś napisał program, który będzie przechowywał informacje o rodzajach zwierząt jakie posiada. Zwierzęta to krowa, koza, kura, pies i świnia. Cechy tych zwierząt to nazwa, waga, wiek(podany w tygodniach). Program ma prosić o wprowadzenie danych wszystkich zwierząt oraz wyświetleniu ich w czytelny sposób.

Do wprowadzania danych użyj tablicy struktur.

Wynik działania programu:

```text
Wprowadz dane zwierzat:
Nazwa: Krowa
Waga (gram): 10
Wiek (tygodnie): 20
Nazwa: Koza
Waga (gram): 10.6
Wiek (tygodnie): 15
Nazwa: Kura
Waga (gram): 2.8 
Wiek (tygodnie): 4
Nazwa: Pies
Waga (gram): 13.4
Wiek (tygodnie): 34
Nazwa: Swinia
Waga (gram): 12.75
Wiek (tygodnie): 8

Wprowadzone zwierzeta:
Zwierze nr 1    Nazwa: Krowa    Waga: 10        Wiek: 20
Zwierze nr 2    Nazwa: Koza     Waga: 10.6      Wiek: 15
Zwierze nr 3    Nazwa: Kura     Waga: 2.8       Wiek: 4
Zwierze nr 4    Nazwa: Pies     Waga: 13.4      Wiek: 34
Zwierze nr 5    Nazwa: Swinia   Waga: 12.75     Wiek: 8
```

Rozwiązanie zadania: [zad1-baza-farmera.cpp](zad1-baza-farmera.cpp)

### Zadanie 2 - Baza ksiegarni

Jedna z lokkalnych księgarnii, posiada małą bazę danych książek przedstawioną poniżej:

```cpp
Ksiegarnia ksiazki[ 7 ] =
{
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};
```

Sprzedawca chcia by udostępnić program dla klientów aby ci mogli by wyszukać sobie książki po kilku kategoriach:

- wydane po roku, który poda klient,
- powyżej ceny którą poda,
- lub jak wpisze konkretne wydawnictwo.

Menu wyboru dla użytkownika powinno wyglądac następująco:

```text
Witaj w ksiegarnii
Po jakiej kategorii chcial bys wyszukac ksiazke:
1. Rok wydania
2. Cena
3. Wydawnictwo
```

Po wybraniu **opcji 1** i podaniu roku np. **1928** powinny pokazać się następujące pozycje książek:

```text
Witaj w ksiegarnii
Po jakiej kategorii chcial bys wyszukac ksiazke:
1. Rok wydania
2. Cena
3. Wydawnictwo
1
Podaj od jakiego roku chcesz zobaczyc ksiazki: 1928
Znalezione ksiazki:
Tytul:Tytul4    Autor:autor2    Rok:1928        Wydawnictwo:Helion1     Cena:26.54
Tytul:Tytul6    Autor:autor2    Rok:1930        Wydawnictwo:Helion3     Cena:28.54
Tytul:Tytul7    Autor:autor1    Rok:1931        Wydawnictwo:Helion1     Cena:29.54
```

:exclamation: **Ważne.** Przeszukiwanie książek oraz wyświetlenie znalezionych pozycji powinno być zrealizowane w funkcji a wartość wprowadzona przez użytkownika przekazana do funkcji jako wskaźnik.

Rozwiązanie zadania: [zad2-baza-farmera.cpp](zad2-baza-farmera.cpp)
