# DBPU — 2021L (studia dzienne)

## Laboratorium 14 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l14) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l14.tb2 numer_indeksu-dbpu-l14) i przesłać do prowadzącego (temat e-maila DBPU L14 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Zadanie 1

Załóżmy, że w bieżącym katalogu znajduje się katalog kat, którego nie jesteśmy właścicielem i nie należymy do grupy właścicieli. Prawa do kat to drwxrwx-wx. W katalogu tym znajduje się plik plik.txt (również nie jesteśmy jego właścicielami i nie należymy do grupy właścicieli). Prawa do plik.txt to -rw-rw----. Umieść w raporcie odpowiedzi oraz ich krótkie uzasadnienia (odniesienie do konkretnych uprawnień) na następujące pytania:

- Czy możemy sprawdzić jakie są prawa dostępu do plik.txt za pomocą ls -l?
- Czy możemy zmienić zawartość pliku plik.txt?
- Czy możemy usunąć plik plik.txt?
- Czy możemy usunąć katalog kat?

## Zadanie 2

Podaj co najmniej cztery problemy związane z bezpieczeństwem (przykłady), które mogą wystąpić przy parsingu UTF-8 (wskazówka).

## Zadanie 3

Dlaczego skrypty shellowe nie powinny mieć podwyższanych uprawnień (np. mechanizm setuid w Linuksie).

## Zadanie 4

Co to "Secure Attention Key (SAK)"? Dlaczego przed logowaniem do Windows zaleca się naciśnięcie kombinacji Ctrl-Alt-Del (od czasu Windows NT)?

## Zadanie 5

W przypadku monitorów CRT można było relatywnie łatwo „podsłuchać” obraz (plamka przebiegała cały obraz około 60 razy na sekundę, ale można było obliczyć, w którym miejscu była w danym momencie i z sygnału odtworzyć obraz). Jakie podobne problemy mogą wystąpić współcześnie (jak szpieg mógłby zmodyfikować program, by można było przekazywać dane nie wzbudzając podejrzeń)?

## Zadanie dodatkowe (3 pkt)

Wypisz wartości bajtów i zinterpretuj kody UTF8 poniższego ciągu (uwaga: zadanie jest podchwytliwe, w zależności od przeglądarki może być konieczne zerknięcie do źródeł, bądź otwarcie pliku w edytorze hex):  
of ​​user
