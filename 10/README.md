# DBPU — 2021L (studia dzienne)

## Laboratorium 10 — zadania

Po zakończeniu pracy należy zachować wszystkie stworzone pliki w oddzielnym podkatalogu (np. numer_indeksu-dbpu-l10) wraz z raportem wykonanej pracy (numer indeksu/numery indeksów autora/autorów, krótki opis każdego pliku, w przypadku plików źródłowych instrukcja wykorzystania). Jeżeli nie zostanie podane inaczej, to zadania należy wykonywać samodzielnie lub w parach, przy czym w przypadku par obydwie osoby powinny rozumieć prezentowane rozwiązanie (i mieć dostęp do wspomnianych plików)!  
Uwaga: zadania z ćwiczeń należy spakować (np. tar cjf numer_indeksu-l10.tb2 numer_indeksu-dbpu-l10) i przesłać do prowadzącego (temat e-maila DBPU L10 numer indeksu - Imię Nazwisko, w przypadku prac wspólnych numery i nazwiska oddzielać przecinkiem).

## Zadanie 1 (2 pkt)

Systemy operacyjne utrzymują często własne „pule entropii” (np. /dev/random). Sprawdź ile danych można odczytać z takiej puli (uwaga: po odczytaniu wszystkich danych pula może być przez jakiś czas pusta). Należy podać metodę pomiaru (źródło programu/skrypt). Od czego zależy liczba odczytanych bajtów (inaczej: co zrobić, by było ich więcej/mniej dostępnych).

## Zadanie 2

Dla niecierpliwych, acz mniej wymagających użytkowników dostępne są inne metody, np. odczyt pliku /dev/urandom. Ile danych można odczytać z takiego źródła w ciągu minuty? W odpowiedzi podać typ i prędkość procesora. Odczytanych danych lepiej nigdzie nie zapisywać, bo to kosztuje dodatkowy czas.

## Zadanie 3-5 (2 pkt)

Znajdź informacje o sprzętowych generatorach liczb losowych. Porównaj koszt i czas wygenerowania losowej liczby 1024-bitowej oraz jakość uzyskanej losowości. Jeżeli producent podaje takie informacje, to opisz stosowany sposób whiteningu.
