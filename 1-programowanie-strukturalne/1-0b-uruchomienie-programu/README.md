# Programming-course-cpp

`Jakub Piskorowski on 29/12/2021`

## Pobranie i uruchomienie projektu

1. [Pobranie kodu źródłowego z repozytorium GitHub](#1-pobranie-kodu-zrodlowego-z-repozytorium-github)
2. [Uruchomienie projektu w Visual Studio Code](#2-uruchomienie-projektu-w-visual-studio-code)
3. Uruchomienie projektu w Visual Studio Community

Powrót do głównego [folderu](../../README.md)

---

## 1. Pobranie kodu zrodlowego z repozytorium GitHub

### 1.1 Na stronie GitHub.com przejdź do strony głównej repozytorium

https://github.com/PiskorowskiJakub/programming-course-cpp

### 1.2 Nad listą plików kliknij **"Code"**

![Kliknij "Code"](img/download-repositiories-code.PNG)

### 1.3 Link do klonowania repozytorium

Aby sklonować repozytorium za pomocą HTTPS, kliknij w sekcję **"HTTPS"**. Aby sklonować repozytorium przy użyciu GitHub CLI, kliknij **"GitHub CLI"**. Można również pobrać repozytorium spakowane w ZIP, klikając **"Download ZIP"**.

![Klonowanie repozytorium](img/clone-repositiories.PNG)

### 1.4 Otwórz Git bash

![Git Bash app](img/git-bash-app.PNG)

### 1.5 Zmiana katalogu roboczego

Zmień bieżący katalog roboczy na lokalizację, w której chcesz sklonować katalog.
```
cd c:/Users/jakub/OneDrive/Desktop/
```

### 1.6 Wpisz **git clone**, a następnie wklej skopiowany wcześniej adres URL

``` 
git clone https://github.com/PiskorowskiJakub/programming-course-cpp.git
```

### 1.7 Po wciśnięciu **Enter** utworzy lokalne repozytorium

![Git clone repo](img/git-clone-repo.PNG)

---

## 2. Uruchomienie projektu w Visual Studio Code

### 2.1 Otwarcie kodu źródłowego

Otwórz folder skolonowanego repozytorium w programie Visual Studio Code. Kliknij "**Plik -> otwórz folder"** a następnie wybierz folder repozytorium.

![File open folder](img/vs-file-open-folder.PNG)

### 2.2 Zbudowanie programu

Teraz, gdy mamy już plik źródłowy kodu C++, nalezy go zbudować. Wybierz polecenie **Terminal** > **Uruchom zadanie kompilacji** z menu głównego.

![Run Build Task menu option](img/run-build-task.png)

Spowoduje to wyświetlenie listy rozwijanej z różnymi opcjami zadań kompilatora. Jeśli używasz zestawu narzędzi GCC, takiego jak MinGW, wybierz **C/C++: g++.exe build active file**.

![Select g++.exe task](img/gpp-build-task-msys64.png)

Spowoduje to skompilowanie `helloworld.cpp` i utworzenie pliku wykonywalnego o nazwie `helloworld.exe`, który pojawi się w Eksploratorze plików.

![helloworld.exe in the File Explorer](img/hello-world-exe.png)

### 2.3 Odpalenie programu helloworld

Z wiersza poleceń lub nowego zintegrowanego terminala VS Code możesz teraz uruchomić program, wpisując ".\helloworld".

![Run hello world in the VS Code Integrated Terminal](img/run-hello-world.png)


### 2.4 Zbudowanie oraz odpalenie programu za pomocą wiersza poleceń

Należy odpalić terminal w miejscu, gdzie znajduje się nasz plik źródłowy i użyć następującego polecenia:
``` bash
g++ -o <name-you-want> source.cpp
```
W miejscu `<name-you-want>` należy podac nazwę wynikowego pliku z rozszeżeniem `.exe`. Najlepiej podać tą samą nazwę co plik źródłowy aby wiedzieć, który plik wynikowy jest do którego pliku źródłowego.

Zostało tylko uruchomić program poleceniem:
```bash
./myprogram
```