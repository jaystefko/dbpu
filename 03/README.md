# DBPU — 2021L (studia dzienne)

## Laboratorium 3 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l3) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l3.tb2 numer_indeksu-dbpu-l3) i przesłać do prowadzącego (temat e-maila DBPU L3 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Wprowadzenie

Uruchom pod kontrolą programu Valgrind kilka poleceń w terminalu (np. valgrind echo), spróbuj zrozumieć wyjście. Z przyczyn praktycznych (dla późniejszych ćwiczeń) terminal powinien mieć co najmniej 120 znaków szerokości. Jako rozgrzewkę warto spróbować uruchomić kilka programów (korzystając z różnych modułów, np. valgrind --tool=cachegrind/callgrind/memcheck/... program). Pod Windows podobną funkcjonalność do modułu Memcheck Valgrinda oferuje (wg opisu) Dr. Memory.

## Zadanie 1

Uruchom program c1-1.cpp pod kontrolą Valgrinda. Jakie problemy zostały wykryte? Zwiększ poziom szczegółowości (jak sugeruje Valgrind) i popraw program tak, by nie było żadnych problemów.

## Zadanie 2

Sprawdź za pomocą Valgrinda swoje programy z wcześniejszych ćwiczeń, jakie ciekawe problemy zostały znalezione? Sprawdź programy napisane w innych językach programowania.

## Zadanie 3

Napisz program mnożący macierze (np. dwie tablice 100 × 100 elementów). Sprawdź za pomocą Cachegrinda (valgrind --tool=cachegrind program_do_przetestowania), jaki jest miss rate Twojego programu. Jak zmieni się sytuacja, gdy zamienimy kolejność pętli? Program nie powinien mieć wycieków pamięci (memory leaks) wykrywalnych przez Valgrinda.

## Zadanie 4

Napisz program, który generuje co najmniej dwa błędy valgrind ./twoj_program (np. wyciek pamięci i dwukrotne zwolnienie tego samego bloku pamięci). Zaznacz miejsca występowania problemów w kodzie programu i podaj w komentarzu poprawioną wersję.

## Zadanie 5

Spróbuj napisać program, który „oszukuje” Valgrinda (tzn. Valgrind zwraca informację o np. wycieku pamięci, a w rzeczywistości pamięć zostaje poprawnie zwolniona. Wskazówka: Valgrind przeszukuje program, sprawdzając, czy do każdego zaalokowanego obszaru istnieje wskaźnik).
