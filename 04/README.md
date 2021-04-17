# DBPU — 2021L (studia dzienne)

## Laboratorium 4 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l4) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l4.tb2 numer_indeksu-dbpu-l4) i przesłać do prowadzącego (temat e-maila DBPU L4 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Wprowadzenie

Jak pokazuje praktyka, nawet program działający bezbłędnie (z punktu widzenia poprawności wyników i odporności na dowolne, czasami niepoprawne, wejście), może stanowić źródło zagrożenia. Czasami są to „tylko” zagrożenia typu exposure, jednak zwykle, ze względu na brak ograniczenia liczby prób, ataki takie mogą być zdecydowanie bardziej poważne.

## Zadanie 1

Jednym z „historycznych” ataków była metoda sprawdzania, czy dany użytkownik istnieje, na podstawie (wizualnej!) obserwacji czasu logowania. Gdy użytkownik istniał i podczas logowania podane zostało hasło, to wykonywana była funkcja crypt(), żeby sprawdzić jego poprawność (porównać z zapisanym wzorcem), jeżeli jednak w systemie nie było takiego użytkownika, to system natychmiast wyświetlał komunikat o nieudanym logowaniu. Różnica w czasie wynosiła ponad sekundę i można ją było łatwo zaobserwować. Poszukaj (i wpisz do raportu) jak obecnie sprawdzane są hasła i jaka byłaby różnica w czasie działania w analogicznej sytuacji (można podać w czasie lub w cyklach procesora).

## Zadanie 2

Jak się zabezpieczyć przed tego typu atakiem?

## Zadanie 3-4

Napisz program (można korzystać z przykładów z wykładu), który w kilku wątkach inkrementuje jedną zmienną (long) 10000000 razy. Jaka jest różnica w wyniku i czasie działania pomiędzy wersją z blokadami i bez blokad? Czy wykonanie powyższej operacji w jednym wątku trwałoby krócej, czy dłużej (zakładamy, że procesor ma co najmniej dwa rdzenie lub system ma co najmniej dwa procesory)? Uwaga: przykład ten nie jest reprezentatywny, gdyż program zwykle robi coś poza inkrementacją licznika operacji.

## Zadanie 5

Sprawdź wszystkie wersje programu z zadania 3 za pomocą Helgrinda (valgrind --tool=helgrind ./program_testowany).
Zadanie dodatkowe (1 pkt)
Wymień (najlepiej podaj też źródło i datę wykrycia) kilka przykładów timing attack. Jakie oprogramowanie jest najbardziej narażone?
