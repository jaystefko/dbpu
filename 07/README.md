# DBPU — 2021L (studia dzienne)

## Laboratorium 7 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. dbpu-l7) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l7.tb2 dbpu-l7) i przesłać do prowadzącego (temat e-maila DBPU L7 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).  
Uwaga: poniższe zadania dotyczą bezpieczeństwa systemu per se i nie są związane z konkretnym wykładem. Poszczególne elementy były (bądź będą) omawiane przy okazji innych zagadnień.

## Zadanie 1-2 (2 pkt)

W przypadku funkcji kryptograficznych istotne jest, by dane (klucze główne, klucze rundowe, tekst jawny, etc.) pozostały tajne. Problem jest bardzo złożony, ze względu na wiele mechanizmów takich, jak np.:

- możliwość zrzutu pamięci,
- plik wymiany/pamięć wirtualna,
- hibernacja systemu,
- możliwość odczytu zawartości RAM po restarcie systemu (czasami trzeba ją zamrozić),
- wykonanie programu na maszynie wirtualnej/zdalnej/w chmurze.

Dla każdego z powyższych problemów przedstaw sposób zabezpieczenia wrażliwych danych (uniemożliwienia bądź choć znaczącego ograniczenia dostępu).  
Podaj metodę szybkiego znalezienia kluczy kryptograficznych w dużym zrzucie pamięci (jak się przed tym zabezpieczyć?).

## Zadanie 3

Opisz krótko działanie funkcji: mlock, munlock, mlockall, munlockall. Jak podobną funkcjonalność uzyskać w języku Java lub C#?

## Zadanie 4-5 (2 pkt)

Napisz program (C/C++), który generuje pseudolosowy ciąg bitów (np. wypełnia nimi tablicę char preKey[16]; — jakość losowości nie ma w tym zadaniu wpływu na ocenę) w taki sposób, by żadna z używanych zmiennych nie została „przesunięta” ani do pliku wymiany, ani w inne miejsce pamięci RAM, a po zakończeniu pamięć została „wyzerowana”. Można wykorzystać funkcje z zadania 3.

## Zadanie dodatkowe

Zastanów się, w jaki sposób trwale usunąć dane z nośników danych (dysków magnetycznych, pamięci flash, ...) i jakie problemy można przy tym napotkać.
