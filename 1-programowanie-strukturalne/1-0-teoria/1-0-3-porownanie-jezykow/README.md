# Programming-course-cpp

`Jakub Piskorowski on 21/08/2023 wersja: 1.0`

## Temat: Porównanie języków programowania. C++, Java oraz Python.

Porównanie trzech języków programowania występujących na egzamienie maturalnym. C++, Java oraz Python.

&#x1F4D2; Poziom 1

Powrót do [Teoria programowania](1-programowanie-strukturalne/1-0-teoria/README.md)

## Objaśnienie

### C++

C++ jest językiem programowania ogólnego przeznaczenia wspierającym paradygmat imperatywny i obiektowy oraz programowanie generyczne.

Język C++ łączy w sobie niskopoziomowe programowanie dostosowane do konkretnych architektur komputerowych z programowaniem wysokopoziomowym, które może być zupełnie niezależne od specyfikacji urządzenia, na którym program jest uruchamiany.

C++ wywodzi się z imperatywnego języka C, a główną cechą odróżniającą go od swojego poprzednika jest wsparcie dla programowania obiektowego. Cecha ta sprawia, że C++ jest językiem wieloparadygmatowym. Istnieje wiele języków obiektowych, jednak C++ wyróżnia się na ich tle wydajnością - jest kompilowany do niskopoziomowego kodu, który możne być uruchamiany bezpośrednio przez procesor komputera.

Źródło: [vavatech.pl](https://vavatech.pl/technologie/jezyki-programowania/cpp)

### Java

Java to wysokopoziomowy język programowania najczęściej wykorzystywany do tworzenia backendu aplikacji internetowych. Język ten jest łatwo przenośny, dzięki interpretowaniu przez wieloplatformową maszynę wirtualną Java Virtual Machine. Można stwierdzić, że Java jest językiem preferowanym przez korporacje i duże firmy. W Javie napisano m.in. takie aplikacje jak Gmail, OpenOffice czy Minecraft, ale także LinkedIn, Netflix czy Amazon.

Źródło: [geek.justjoin.it](https://geek.justjoin.it/wszystko-co-musicie-wiedziec-o-jezyku-java-co-to-dla-kogo-i-ile-zarobimy/)

### Python

Python jest wysokopoziomowym językiem ogólnego przeznacznenia. W przeciwieństwie do niektórych jęzków, takich jak np. PHP który jest używany głównie do tworzenia skryptów po stronie serwera WWW, możliwości Pythona są bardzo rozległe i jego konkretne zastosowanie zależy od bibliotek których się do niego użyje. Ogromna ilość i różnorodność jego bibliotek jest powszechnie uważana za jedną z głównych zalet języka. Swoją popularność zyskał on jednak dzięki zupełnie innym jego właściwościom które wyróżniają go od większości innych języków: semantyce oraz składni. Wysoka czytelność jest jadną z przewodnich idei stojących za powstaniem tego języka. Został on zaprojektowany żeby mieć nie zagracony układ wizualny często używając słów z języka angielskiego gdzie inne języki używają znaków inerpunkcji.

Źródło: [vavatech.pl](https://vavatech.pl/technologie/jezyki-programowania/Python)

### Porównanie składni i stylu programowania w C++, Pythonie i Javie.

**C++**  
- **Składnia:** C++ to język typowany statycznie, co oznacza, że zmienne muszą być zadeklarowane z określonym typem przed użyciem. Składnia C++ jest bardziej złożona i wymagająca, ze względu na potrzebę deklarowania i zarządzania pamięcią.
- **Styl programowania:** C++ jest językiem ogólnego przeznaczenia, który umożliwia programowanie proceduralne, obiektowe i generyczne. Często używane są wskaźniki i zarządzanie pamięcią. Styl programowania w C++ może być bardziej skomplikowany ze względu na konieczność ręcznego zarządzania pamięcią.

**Java:**
- **Składnia:** Java to język zorientowany obiektowo, w którym każdy element jest obiektem. Składnia Javy jest bardziej formalna niż w przypadku Pythona, ale mniej skomplikowana niż C++. Język ten jest kompilowany do kodu bajtowego, który jest wykonywany na maszynie wirtualnej Java (JVM).
- **Styl programowania:** Java promuje obiektowy styl programowania, w którym kod jest organizowany w klasach i obiektach. Ma silne mechanizmy kontroli typów, co pomaga w unikaniu wielu błędów. Java jest często używana w tworzeniu aplikacji korporacyjnych, mobilnych oraz dla platformy Android.

**Python:**
- **Składnia:** Python to język dynamicznie typowany, co oznacza, że typy zmiennych są przypisywane dynamicznie w trakcie wykonywania programu. Składnia Pythona jest prostsza i bardziej czytelna, co pozwala na szybszy rozwój oprogramowania.
- **Styl programowania:** Python promuje czytelny i zwięzły kod poprzez zastosowanie wcięć jako znaczników bloków kodu. Jest to język interpretowany, co pozwala na szybkie testowanie i eksperymentowanie. Python jest często używany do programowania skryptowego, analizy danych oraz tworzenia prototypów.

**Podsumowanie:**  
- **C++, Python i Java** różnią się znacznie pod względem składni i stylu programowania.
- **C++** jest bardziej złożony i wymaga ręcznego zarządzania pamięcią.
- **Java** jest zorientowana obiektowo i promuje silne typowanie, jest używana do tworzenia różnorodnych aplikacji.
- **Python** kładzie nacisk na czytelność i szybkość rozwoju dzięki prostszej składni i dynamicznemu typowaniu.

Wybór języka zależy od potrzeb projektu oraz preferencji programistycznych.

### Zarządzanie pamięcią

**C++**  
C++ daje programiście pełną kontrolę nad zarządzaniem pamięcią. Możliwe jest dynamiczne alokowanie i zwalnianie pamięci za pomocą operatorów new i delete, co jednak wymaga ręcznego dbania o sprzątanie (dealokację) po zakończeniu korzystania z pamięci. To pozwala na zoptymalizowanie pamięci, ale też niesie ryzyko wycieków pamięci lub błędów dostępu.

**Java**  
W Javie programista nie musi martwić się ręcznym zarządzaniem pamięcią. Java korzysta z mechanizmu automatycznego zbierania śmieci (Garbage Collection, GC). GC automatycznie identyfikuje nieużywane obiekty i zwalnia zaalokowaną dla nich pamięć. To eliminuje wiele potencjalnych błędów związanych z wyciekami pamięci, ale może wpłynąć na wydajność aplikacji, gdy zbieranie śmieci jest wykonywane.

**Python**  
Python również opiera się na mechanizmie automatycznego zbierania śmieci. Używa algorytmu zliczania referencji, aby określić, które obiekty są nieużywane i mogą zostać usunięte z pamięci. W większości przypadków programista nie musi martwić się ręcznym zarządzaniem pamięcią.

**Podsumowanie**  
- W **C++** programista ma pełną kontrolę nad pamięcią, co pozwala na optymalizację, ale niesie ryzyko błędów.
- W **Javie i Pythonie** stosowany jest automatyczny mechanizm zbierania śmieci, co upraszcza zarządzanie pamięcią, ale może wpłynąć na wydajność.
- Każdy język ma swój unikalny sposób radzenia sobie z pamięcią, zależnie od paradygmatu programowania i środowiska wykonawczego.

### Jak różnice w bibliotekach mogą wpłynąć na wybór danego języka do projektu.

**C++**  
- **Różnorodność bibliotek:** C++ posiada szeroki zakres bibliotek dostępnych w standardowej bibliotece oraz społecznościowej. Biblioteki te obejmują obszary takie jak przetwarzanie wątków, grafika komputerowa, matematyka czy sieci.
- **Wysoka wydajność:** Wiele bibliotek C++ jest zoptymalizowanych pod kątem wydajności, co sprawia, że jest atrakcyjny do tworzenia aplikacji wymagających dużej prędkości obliczeń.

**Java**
- **Obszerna standardowa biblioteka:** Java ma obszerną bibliotekę standardową, która zawiera narzędzia do obsługi wątków, tworzenia interfejsów graficznych, zarządzania siecią i wieloma innymi obszarami.
- **Bogata społeczność:** Java cieszy się wsparciem dużej społeczności, co prowadzi do dostępności wielu rozbudowanych bibliotek społecznościowych. Można znaleźć narzędzia do różnych zastosowań, od analizy danych po rozwój aplikacji mobilnych.

**Python**
- **Rozległa społeczność:** Python posiada jedną z największych społeczności programistycznych, co przekłada się na ogromny wybór bibliotek społecznościowych. Biblioteki te obejmują wiele obszarów, takich jak analiza danych, uczenie maszynowe czy tworzenie stron internetowych.
- **Szybki rozwój:** Python ma ogromny nacisk na prostotę kodowania i szybki rozwój oprogramowania. Dostępność bibliotek społecznościowych pomaga w szybkim prototypowaniu i wdrażaniu projektów.

**Podsumowanie**
- Różnice w bibliotekach mają kluczowe znaczenie przy wyborze języka programowania do projektu.
- **C++** może być atrakcyjny, jeśli potrzebujemy wydajnych bibliotek do przetwarzania danych, grafiki komputerowej lub niskopoziomowych operacji.
- **Java** jest przydatna w projektach, które potrzebują rozbudowanych narzędzi, takich jak interfejsy graficzne, zarządzanie siecią czy obsługa wielowątkowości.
- **Python** jest dobrym wyborem dla projektów wymagających szybkiego prototypowania, analizy danych, uczenia maszynowego lub tworzenia aplikacji webowych, dzięki rozbudowanym bibliotekom społecznościowym.

---

## Zadania


1. **Porównanie Języków C++, Java i Python poprzez Implementację Funkcji Obliczającej Średnią Arytmetyczną.** 

Twoim zadaniem jest zaimplementowanie funkcji obliczającej średnią arytmetyczną zbioru liczb w trzech różnych językach: C++, Java i Python. Następnie dla każdej implementacji omów, jak różnice w składni, stylu programowania i cechach języka wpłynęły na twój kod.

Kroki do wykonania:
- **Przygotowanie Kodu:** W każdym z języków napisz funkcję, która przyjmuje zbiór liczb jako argument i oblicza ich średnią arytmetyczną. Upewnij się, że wybierasz charakterystyczne konstrukcje dla każdego z języków.
- **Omówienie Różnic:** Dla każdej implementacji, omów, jakie konstrukcje i biblioteki zostały użyte do implementacji funkcji. Porównaj składnię, typy danych, obsługę kolekcji i ewentualne różnice w zarządzaniu pamięcią między językami.
- **Analiza Wydajności i Czasu Realizacji:** Zaimplementuj funkcję w każdym z języków i zmierz czas wykonania dla zbioru liczb o różnych rozmiarach. Porównaj, czy istnieją różnice w wydajności między językami.
- **Podsumowanie:** W podsumowaniu porównaj, jak różnice w składni, stylu programowania i charakterystycznych cechach języków wpłynęły na proces implementacji i wyniki testów wydajnościowych.


---

2. **Wybór Języka Programowania dla Konkretnych Aplikacji.**

Twoim zadaniem jest dokonanie analizy i wyboru odpowiedniego języka programowania dla trzech różnych rodzajów aplikacji. Skup się na cechach każdego języka i ich dopasowaniu do specyficznych wymagań każdej aplikacji.

Kroki do wykonania:
- **Analiza Cech Języków:** Przypomnij sobie cechy i charakterystyki języków C++, Javy i Pythona w kontekście wydajności, składni, obsługi pamięci, dostępnych bibliotek i innych aspektów.
- **Wybór Rodzajów Aplikacji:** Wybierz trzy różne rodzaje aplikacji, takie jak:  
Aplikacja graficzna z interfejsem użytkownika.  
Aplikacja mobilna na platformę Android.  
Aplikacja do analizy danych i uczenia maszynowego.
- **Ocenianie Odpowiedniości:** Dla każdej aplikacji, oceniaj, który język jest bardziej odpowiedni, bazując na cechach i charakterystykach każdego z języków.
- **Dokumentacja Wyboru:** Przygotuj prezentację, w której dla każdej aplikacji przedstawisz argumenty, dlaczego wybrany język jest bardziej odpowiedni. Opisz, jakie konkretnie cechy języka przyczyniły się do tego wyboru.
- **Podsumowanie:** W podsumowaniu, uargumentuj, dlaczego wybór języka ma znaczenie dla różnych rodzajów aplikacji i jakie korzyści można uzyskać, stosując odpowiedni język w odpowiednim kontekście.

