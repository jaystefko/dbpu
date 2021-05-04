# DBPU — 2021L (studia dzienne)

## Laboratorium 5 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l5) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l5.tb2 numer_indeksu-dbpu-l5) i przesłać do prowadzącego (temat e-maila DBPU L5 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Wprowadzenie

W przypadku pisania polityk bezpieczeństwa konieczna jest znajomość dokładnych wymagań aplikacji. Jakie usługi, biblioteki, funkcjonalności systemu, etc. będą jej niezbędne, jakie są tylko opcjonalne (np. możliwość zapisu plików tymczasowych, czy inne zależne od konfiguracji), a jakie zupełnie zbędne lub niebezpieczne (możliwość wywołania shella z edytora vim). Uwaga: wybrana do poniższych zadań aplikacja musi być „nietrywialna”, tzn. nie może to być zlinkowane statycznie „Hello World!”.

## Zadanie 1

Wypisz minimalne, zalecane i zalecane dla wersji setUID wymagania do następujących aplikacji: vim, nslookup, gcc, passwd, nc, ping (narzędzia dowolne, w przypadku Linuksa można np. użyć polecenia strace).

## Zadanie 2

Napisz dla wybranej przez siebie aplikacji plik polityki AppArmor. Można korzystać z dowolnych zasobów, ale plik należy opatrzyć komentarzem i nie może on włączać plików zewnętrznych (bądź należy załączyć i „okomentować” wszystkie włączone pliki).

## Zadanie 3

Napisz dla wybranej przez siebie aplikacji plik polityki SELinux. Można korzystać z dowolnych zasobów, ale plik należy opatrzyć komentarzem i nie może on włączać plików zewnętrznych (bądź należy załączyć i „okomentować” wszystkie włączone pliki).

## Zadanie 4

Napisz dla wybranej przez siebie aplikacji plik polityki Grsecurity. Można korzystać z dowolnych zasobów, ale plik należy opatrzyć komentarzem i nie może on włączać plików zewnętrznych (bądź należy załączyć i „okomentować” wszystkie włączone pliki).

## Zadanie 5

Porównaj powyższe narzędzia pod względem możliwości, wydajności (na podstawie ogólnodostępnych porównań, nie jest konieczne wykonywanie własnych testów) i łatwości konfiguracji.
