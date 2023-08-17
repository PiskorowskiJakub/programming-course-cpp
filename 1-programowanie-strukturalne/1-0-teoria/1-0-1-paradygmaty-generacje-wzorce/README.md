# Programming-course-cpp

`Jakub Piskorowski on 16/08/2023 wersja: 1.0`

## Temat: Wstęp - paradygmaty, generacje i wzorce projektowe

Przedstawienie podstawowych pojęć z teorii programowania o paradygmatach, generacjach oraz wzorcach projektowych. 

Kod źródłowy: \
&#x1F4D2; Poziom 1

Powrót do [Teoria programowania](1-programowanie-strukturalne/1-0-teoria/README.md)

## Objaśnienie

### Podział języków programowania na paradygmaty

**Czym jest paradygmat programowania?**  
Kiedy programista pisze kod, który ma osiągnąć określony rezultat, stawia przed sobą problem, który może zostać rozwiązany na różne sposoby. Paradygmaty programowania są właśnie **stylami pisania programów**. Sposobami myślenia, dzięki którym programiści skutecznie piszą kod. **Paradygmat wyznacza zbiór reguł, jakich należy przestrzegać podczas tworzenia programu.**

### Programowanie imperatywne

Programowanie imperatywne polega na tworzeniu zestawów szczegółowych instrukcji, które są przekazywane komputerowi do wykonania w ściśle określonej kolejności. Nazwa "imperatywne" wynika z faktu, że jako programiści bezpośrednio i bardzo precyzyjnie określamy, jakie czynności ma wykonać komputer. **Programowanie imperatywne skupia się na opisie, jak program ma działać, krok po kroku.** 

**Przykład:**
Przykładem programowania imperatywnego może być program do obliczania sumy liczb w zadanej tablicy. Poniżej przedstawiam prosty opisowy przykład takiego programu: 
``` Text
1. Zadeklaruj zmienną "suma" i ustaw jej początkową wartość na 0. 
2. Zadeklaruj tablicę "liczby" i przypisz do niej pewien zestaw liczb. 
3. Przejdź przez każdy element tablicy "liczby" w określonej kolejności. 
4. Dla każdego elementu, dodaj jego wartość do zmiennej "suma". 
5. Po zakończeniu iteracji przez wszystkie elementy tablicy wyświetl wartość zmiennej "suma". 
```

Ten program używa imperatywnego podejścia, gdzie jasno definiujemy kolejne kroki, jakie komputer powinien podjąć, aby obliczyć sumę liczb w tablicy. Instrukcje są wykonywane w określonej kolejności, a stan programu jest modyfikowany poprzez przypisywanie wartości do zmiennych. 

### Programowanie proceduralne

Programowanie proceduralne idzie o krok dalej. Spotkamy się tu z koncepcją funkcji (również znanych jako **"procedury"** lub **"metody"**). 

W programowaniu proceduralnym **zachęca się programistów do dzielenia programu na funkcje** – ma to być sposób na poprawę modułowości i organizacji kodu. Dzięki funkcjom można grupować powtarzające się operacje w jednym miejscu i wywoływać je w różnych częściach programu, co skutkuje czystym kodem, którym łatwiej zarządzać.  

Podział programu na funkcje **umożliwia także hermetyzację, czyli ukrywanie implementacji szczegółów wewnątrz funkcji.** Pozwala to na łatwiejsze zrozumienie i korzystanie z kodu, ponieważ programiści mogą skupić się na wykorzystywaniu funkcji bez konieczności zrozumienia ich wewnętrznej logiki. 

W rezultacie programowanie proceduralne umożliwia rozbicie złożonych problemów na mniejsze, bardziej zrozumiałe części, co ułatwia rozwijanie programu i zarządzanie nim. 

Oto przykład prostego code snippetu w C# przedstawiającego podejście programowania proceduralnego: 
``` cs
using System; 
class Program 
{ 
    static void Main() 
    { 
        int number1 = 5; 
        int number2 = 10; 
        int result = AddNumbers(number1, number2); 
        Console.WriteLine("Sum of {0} and {1} is: {2}", number1, number2, result); 
    }

    static int AddNumbers(int num1, int num2) 
    { 
        return num1 + num2; 
    } 
} 
```

W tym przykładzie mamy program, który dodaje dwie liczby całkowite i wyświetla wynik. Główna funkcja **Main()** wywołuje funkcję **AddNumbers()**, przekazując do niej dwie liczby: **number1** i **number2**. Funkcja **AddNumbers()** wykonuje dodawanie tych dwóch liczb i zwraca wynik. Następnie, w funkcji **Main()**, wynik zostaje wyświetlony na ekranie. 

Ten przykład ilustruje podstawową ideę programowania proceduralnego, w którym program jest dzielony na funkcje, a logika operacji jest zawarta wewnątrz tych funkcji. Dzięki temu mamy czytelny i modularny kod, w którym funkcje wykonują konkretne zadania, a główna funkcja Main() koordynuje działanie programu. 

Źródło: [inetum.pl](https://inetum.pl/programowanie-imperatywne-a-deklaratywne-paradygmaty/)

### Paradygmat funkcyjny

Paradygmat funkcyjny (functional paradigm) to styl programowania deklaratywnego, gdzie wykonanie programu traktuje się jak ewaluację wyrażeń matematycznych. Jest to przeciwne programowaniu imperatywnemu, gdzie wykonanie programu jest równoznaczne z wykonaniem pewnej sekwencji instrukcji które modyfikują stan systemu. Paradygmat funkcyjny preferuje bezstanowość (statelessness), przejrzystość referencyjną (referential transparency) i niezmienność danych (immutability).

Przykładowo, jeśli mamy listę liczb całkowitych i chcemy obliczyć ich sumę, taki program w stylu imperatywnym wygladałby następująco:

``` cs
def sum(list):
    result = 0
    for e in list:
       result += e
    return result
```
Wykonanie tego programu powoduje, że przy każdej iteracji pętli stan jest modyfikowany (wartość zmiennej result jest zmieniana na nową).  
W stylu funkcyjnym równowazny program można zapisać w ten sposób:

```cs
def sum(list):
    def plus(x, y):
        return x + y
    return reduce(plus, list)
```

Funkcja reduce zaaplikuję funkcję plus do par elementów listy i zwróci wynik. W wydaniu funkcyjnym nie istnieje stan który jest modyfikowany przy dodawaniu każdego nowego elementu.

Bezstanowość prowadzi do "bezczasowości", podmiany wywołania funkcji przez jej implementację; eliminuje efekty uboczne, wycieki pamięci.

Źródło: [cs.put.poznan.pl](http://www.cs.put.poznan.pl/ksiek/fp/basics.html)

### Generacje języków programowania

**Pierwsza generacja** - Programowanie pierwszych komputerów akceptujących zmianę  oprogramowania odbywało się bezpośrednio w kodzie binarnym, który można przedstawić jako ciągi zer i jedynek. Każdy typ komputera operował własnym kodem (językiem maszynowym). Jest to główna wada tych języków, gdyż programista każdorazowo musiał dostosowywać się do języka konkretnej maszyny.

**Druga generacja** - Ponieważ operowanie ciągami zer i jedynek nie było wygodne dla programisty, przypisano im łatwiejsze do zrozumienia znaki mnemotechniczne. Tak narodziły się języki symboliczne, zwane też asemblerami. Choć stanowią proste tłumaczenie języka maszynowego na symbole i są ściśle związane z danym modelem komputera, to ułatwiają pisanie instrukcji i czynią je bardziej czytelnymi.

**Trzecia generacja** - Kolejnym krokiem w rozwoju języków programowania było powstanie języków wysokiego poziomu. Symbole asemblera reprezentujące konkretne instrukcje zostały zastąpione kodem nie związanym z maszyną, bardziej zbliżonym do języka naturalnego lub matematycznego.

**Czwarta generacja** - Na czwartą generację języków programowania składa się szereg narzędzi, które umożliwiają budowę prostych aplikacji przez zestawianie "prefabrykowanych" modułów. Obecnie wielu specjalistów uważa, że nie są to języki  programowania w ścisłym znaczeniu, gdyż częstokroć stanowią jedynie rozszerzenie języków już istniejących. Niektórzy autorzy proponują stosować nazwę "czwarta generacja" wyłącznie w odniesieniu do programowania obiektowego.

**Piąta generacja** - Nazwę "język piątej generacji" stosuje się czasem w odniesieniu do języków używanych do tworzenia programów wykorzystujących tzw. sztuczną inteligencję (AI) lub inaczej - systemów ekspertowych.

### Wzorce projektowe 

**Czym jest wzorzec projektowy?**  
Wzorce projektowe to typowe rozwiązania problemów często napotykanych przy projektowaniu oprogramowania. Stanowią coś na kształt gotowych planów które można dostosować, aby rozwiązać powtarzający się problem w kodzie.

Nie można jednak wybrać wzorca i po prostu skopiować go do programu, jak bibliotekę czy funkcję zewnętrznego dostawcy. Wzorzec nie jest konkretnym fragmentem kodu, ale ogólną koncepcją pozwalającą rozwiązać dany problem. Postępując według wzorca możesz zaimplementować rozwiązanie które będzie pasować do realiów twojego programu.

**Klasyfikacja wzorców**  
Wzorce projektowe różnią się między sobą złożonością, poziomem szczegółowości i skalą w jakiej da się je zaimplementować w projektowanym systemie.

Najbardziej uniwersalnymi i wysokopoziomowymi wzorcami są wzorce architektoniczne. Deweloperzy mogą implementować je w niemal każdym języku. W przeciwieństwie do innych wzorców, mogą służyć zaprojektowaniu architektury całej aplikacji.

Ponadto, wszystkie wzorce można skategoryzować według ich celu, bądź przeznaczenia.
- **Wzorce kreacyjne** wprowadzają elastyczniejsze mechanizmy tworzenia obiektów i pozwalają na ponowne wykorzystanie istniejącego kodu.
- **Wzorce strukturalne** wyjaśniają jak składać obiekty i klasy w większe struktury, zachowując przy tym elastyczność i efektywność struktur.
- **Wzorce behawioralne** które zajmują się efektywną komunikacją i podziałem obowiązków pomiędzy obiektami.

Źródło: [refactoring.guru](https://refactoring.guru/pl/design-patterns)

### Podział języków programowania

Przede wszystkim języki programowania dzielą się na dwie grupy — skryptowe oraz kompilowane.

Pierwsza grupa to **języki skryptowe**. Programy napisane w ten sposób to właściwie pliki tekstowe (i tak, można je edytować nawet w notatniku), uruchamia się je za pomocą dodatkowego programu i w momencie uruchomienia tekst (kod) jest interpretowany (zamieniany na postać zrozumiałą dla komputera i wykonywany). Zaletą tego podejścia jest to, że możemy szybko zobaczyć efekty zmian (po zmianie wystarczy odświeżyć stronę czy uruchomić ponownie i od razu widzimy zmiany). Minusem jest, że o błedach w kodzie (np. w składni) dowiemy się dopiero w momencie uruchamiania tego konkretnego fragmentu kodu (najczęściej), co utrudnia szukanie błędów. Drugim minusem, który jednak nie będzie problemem w większości przypadków, jest mniejsza wydajność takich aplikacji. W ogólnym przypadku jednak w językach skryptowych pisze się szybciej, ale lepiej sprawdzają się w prostszych aplikacjach/projektach.

Druga grupa to **języki kompilowane**, do tej grupy należy m.in. Java. Różnią się one tym, że zanim uruchomimy nasz kod, musimy go skompilować, tzn. przetłumaczyć na język zrozumiały dla komputera. W przypadku języków skryptowych proces ten odbywa się w momencie uruchamiania, za każdym razem jak program jest uruchamiany. W językach kompilowanych proces ten jest wykonywany tylko raz, jeszcze przed uruchomieniem programu. Powoduje to, że wprowadzone przez nas zmiany musimy najpierw skompilować (najczęściej z całym programem) a następnie uruchomić program jeszcze raz. Wymaga to trochę innego podejścia do pisania programów (metoda prób i błedów do rozwiązania problemów nie sprawdzi się w większych projektach). Z drugiej strony programy napisane z użyciem języków kompilowanych działają szybciej, a błędy w składni są wykrywane jeszcze przed uruchomieniem programu (na etapie kompilacji). Znajomość języków z tej grupy daje też większe możliwości na rynku pracy, ponieważ większość ofert z dużych firm dotyczy właśnie tej grupy.

W tym miejscu należy podkreślić, że jedna grupa nie jest lepsza od drugiej. Są inne, nadają się do innych rzeczy.

Źródło: [kobietydokodu.pl](https://kobietydokodu.pl/ktory-jezyk-programowania-wybrac/#jezyki-skryptowe)

---

### Podstawowe pojęcia

- **Język programowania** - zbiór zasad, dzięki którym powstaje kod źródłowy programu komputerowego. Kod źródłowy musi zostać przetworzony na kod maszynowy, wykonywany przez konkretny procesor. Etap ten nosi nazwę translacji.
- **Translator** – program służący do automatycznego tłumaczenia kodu źródłowego na kod maszynowy. Istnieją dwa rodzaje translatorów: kompilatory (w tym asemblery) oraz interpretery.
- **Kompilator** – program jednorazowo tłumaczący cały kod źródłowy (napisany w języku wysokiego poziomu) na kod maszynowy i zapisujący go do pliku wykonywalnego.
- **Asembler** – program jednorazowo tłumaczący cały kod źródłowy (napisany w języku niskiego poziomu) na kod maszynowy i zapisujący go do pliku wykonywalnego.
- **Interpreter** – program tłumaczący i wykonujący kod źródłowy linia po linii. W tym przypadku nie ma pliku wykonywalnego, a każde uruchomienie wymaga ponownego przeprowadzenia etapu interpretacji (interpreter jest niezbędny do uruchomienia i wykonania programu).
- **Kod źródłowy** – zapis programu komputerowego przy pomocy określonego języka programowania, opisujący operacje jakie powinien wykonać komputer na zgromadzonych lub otrzymanych danych. Kod źródłowy zapisywany jest w plikach źródłowych.
- **Biblioteka** – plik obiektowy zawierający fragmenty kodu źródłowego (najczęściej procedury lub funkcje) realizujące określone zadania: matematyczne (np. biblioteka LAPACK, SLATEC), graficzne (np. DISLIN, OpenGL) i inne.
