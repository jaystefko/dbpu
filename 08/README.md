# DBPU — 2021L (studia dzienne)

## Laboratorium 8 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l8) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i posiadać dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l8.tb2 numer_indeksu-dbpu-l8) i przesłać do prowadzącego (temat e-maila DBPU L8 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Zadanie 1 (1 pkt)

Napisz program tworzący plik o ustawionych wyłącznie prawach do odczytu i zapisu dla właściciela. Uwaga: prawa powinny być nadane w chwili tworzenia pliku (a nie następną instrukcją, by zapobiec „wyścigowi”) i powinny być niezależne od ustawień systemu w danej chwili.

## Zadanie 2-4 (3 pkt)

Sprawdź jakie mechanizmy blokowania pliku są dostępne w systemie, na którym pracujesz. Podaj przykład kodu blokującego/sprawdzającego blokadę. Czy blokada jest typu mandatory, czy advisory i czy można zablokować część pliku, czy jedynie cały?

## Zadanie 5 (1 pkt)

W języku C napisz program, który dane podawane przez użytkownika umieszcza w tablicach znakowych, wykorzystując funkcję sprintf() (wskazówka: ustawienie precyzji w łańcuchach formatujących). Przykład: dla tekstu „abcd” podanego przez użytkownika, w zmiennej umieszczany jest napis „podano: abcd” zakończony znakiem null (jak to w C). Jak to zrobić jeszcze lepiej?
