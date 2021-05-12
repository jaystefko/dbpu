# DBPU — 2021L (studia dzienne)

## Laboratorium 9 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l9) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l9.tb2 numer_indeksu-dbpu-l9) i przesłać do prowadzącego (temat e-maila DBPU L9 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Zadanie 1-3 (3 pkt)

Podczas deszyfrowania RSA (lub podpisu na urządzeniach o ograniczonej mocy obliczeniowej) stosowana jest odmiana algorytmu oparta o CRT (chińskie twierdzenie o resztach).

- Co to daje (wyjaśnić i podać źródła)?
- Jakie są niebezpieczeństwa z tym związane?

Zaimplementować „zwykły” algorytm RSA (generowanie klucza, szyfrowanie, deszyfrowanie) i oparty o CRT (wystarczy, gdy n, p, q, e, d, etc. będą liczbami 64 bitowymi, wykładnik części publicznej jest zwykle niewielką liczbą pierwszą, np. e=3).

## Zadanie 4-5 (2 pkt)

Napisz programy (w minimalnej wersji mogą to być programy mnożące dwie macierze lub potęgujące modulo bez korzystania z wyspecjalizowanych bibliotek, wtedy sam kod programu może być praktycznie identyczny) w kilku językach programowania (np. C/C++, C#, Java, Python) i porównaj ich czasy działania (oraz odporność na różnego rodzaju błędy). Uwaga: czas uruchamiania/ładowania programu należy pominąć. Uwaga 2: wyników dotyczących implementacji C# firmy Microsoft nie wolno bez zgody tejże firmy publikować (jak dobrze pamiętam).
