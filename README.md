Zadanie 1

Napisać program, który:
1. wczytuje imię użytkownika (jako zmienną typu string).
2. wczytuje jeden znak (zmienną typu char) informujący, czy użytkownik jest kobietą, czy
mężczyzną (należy podać dużą lub małą literę K lub M).
3. jeśli dane o płci zostały poprawnie podane, to drukuje powitanie z użyciem imienia w
postaci: imie, witam Pania/Pana (imion nie trzeba odmieniać), np. Andrzej, witam Pana.
W przypadku danych niepoprawnych drukuje powitanie postaci Witaj, imie.
4. wczytuje dwie dowolne liczby całkowite (mogą być ujemne) do zmiennych typu int.
5. drukuje następujące informacje słowne o większej z wczytanych liczb:
– czy jest parzysta czy nieparzysta
– czy jest jednocyfrowa, czy dwucyfrowa, czy też inna.
6. drukuje wynik dzielenia pierwszej liczby przez podwojoną wartość drugiej liczby.
Wskazówka: nie wolno dopuścić do dzielenia przez zero (wydrukować odpowiedni komunikat) i do obcinania
wyniku po przecinku – wynik musi być dokładny.
Uwagi:
1. Przy wprowadzaniu danych i drukowaniu wyników nie używamy polskich znaków diakrytycznych
(tzw. ogonkowych), aby na wydrukach nie powstały „krzaczki” - natomiast dopuszczalne są
polskie znaki ogonkowe w komentarzach.
2. Ale pisanie komentarzy w programach nie jest konieczne, chyba że pomaga autorowi
w uporządkowaniu programu.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 2 - z pętlą do-while

Napisać program, który wczytuje liczby całkowite aż do powtórnego wczytania liczby takiej
jak pierwsza lub druga wczytana liczba. Wydrukować następujące informacje (biorąc pod
uwagę wszystkie wczytane liczby):
• najmniejszą liczbę tego ciągu
• największą ujemną liczbę tego ciągu
• ile razy dwie jednakowe liczby wczytano obok siebie (jedna po drugiej).
UWAGA: Program napisać bez użycia tablic. Nie należy nigdzie zapisywać całego wczytanego
ciągu.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 3

Napisać program, który:
a. wczytuje liczbę całkowitą N, wymuszając, by N było dodatnie i mniejsze od 10 (pętlą do-while)
b. następnie wczytuje N napisów (pętlą for)
c. potem jeszcze wczytuje ciąg napisów aż do wczytania napisu END (pętlą while)
d. po zakończeniu wczytywania napisów (krok b i c) drukuje obliczone wartości (końcowego napisu
END nie należy brać pod uwagę):
- ile łącznie było wczytanych napisów, w których pierwszy i ostatni znak są dużymi literami oraz
ile takich, w których pierwszy i ostatni znak są cyframi
- jaka była średnia długość napisów krótszych niż d znaków (d – stała).
Uwaga: Zadanie rozwiązać bez użycia tablic.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 4

a) Wczytać ciąg n liczb całkowitych (n - stała) - niekoniecznie dodatnich. Wydrukować liczbę
największą i najmniejszą z wczytanych oraz różnicę między każdą kolejną liczbą tego ciągu,
a średnią liczb tego ciągu.
Wskazówka: to wymaga zastosowania tablicy jednowymiarowej przechowującej wczytane
liczby.
b) Tablicę wydrukować, przesunąć cyklicznie o 1 miejsce w lewo, i wydrukować ponownie.
c) Następnie w tablicy tej zamienić miejscami sąsiednie elementy w kolejnych parach 0-1, 1-2,
... itd, jeśli pierwszy element z tej pary jest większy od drugiego.
Wskazówka: w obu powyższych krokach należy zastosować zmienną pomocniczą jako
tymczasowy schowek.
d) Wydrukować tablicę po tej zmianie.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 5

• Tablicę A[n][n] (n - stała) wypełnić liczbami losowymi całkowitymi z przedziału <D, G>
(D, G- stałe).
• Wydrukować tablicę wierszami ze stałą szerokością 5 miejsc, ustawioną za pomocą
setw.
• Dla każdej kolumny wydrukować (pod tą kolumną), ile jest w niej liczb podzielnych przez M
(M- stała).
• Zamienić miejscami największy element głównej przekątnej z najmniejszym elementem z
trzech ostatnich wierszy tablicy.
• Ponownie wydrukować tablicę.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 6

a. Z pliku o nazwie podanej przez użytkownika wczytać wierszami dane rzeczywiste
(mogą być ujemne, mogą być bez kropki) do tablicy A[w][k] (w, k - stałe). Jeśli danych w
pliku będzie za mało, wolne miejsca powinny by ć wypełnione wartością stałą X.
b. Wydrukować tablicę wierszami w formacie fixed ze stałą liczbą miejsc po kropce
(ustawioną za pomocą setprecision) i stałą szerokością kolumn (ustawioną za
pomocą setw).
c. Wydrukować kolejne elementy na obwodzie tablicy, poruszając się zgodnie ze
wskazówkami zegara, a na końcu wydrukować maksymalną wartość z tych
wszystkich elementów obwodu.
d. Wyzerować wiersze, w których suma elementów jest większa od tej wartości
maksymalnej.
e. Na koniec całą tablicę zapisać wierszami (w formacie jak w p. b) do pliku o nazwie
"nowa.txt".
Uwaga: należy sygnalizować brak pliku z danymi o podanej nazwie.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 7 – z rekordami

Tablicę A[n][n](n - stała) wypełnić rekordami opisującymi dane o studentach, o polach (imie,
ocena) – dane należy wczytywać z pliku o nazwie podanej przez użytkownika. Następnie:
1. wydrukować w czytelny sposób zawartość tablicy A.
2. obliczyć i wydrukować średnią ocenę spośród ocen pozytywnych (>=3.0) osób o
imionach kończących się literą ‘a’ lub ‘k’, wpisanych pod główną przekątną tablicy.
3. wydrukować informację, ile jest kolumn w tej tablicy, w których ocena średnia ze
wszystkich ocen w danej kolumnie przekracza średnią obliczoną w p. 2.
Uwaga: należy zawsze sygnalizować brak pliku o podanej nazwie (czyli brak możliwości
otwarcia pliku).

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie 8 – z funkcjami

1. Tablicę A[w][k] (w, k - stałe) wypełnić liczbami losowymi rzeczywistymi z przedziału
<-X, X>, zaś tablicę B[w][k] - z przedziału <D, G> (X, D, G – stałe).
2. Tablicę A wydrukować wierszami z dokładnością 1 miejsca po kropce, tablicę B – z
dokładnością 2 miejsc.
3. W tablicy A odwrócić kolejność elementów (czyli zamienić pierwszy z ostatnim, drugi z
przedostatnim itd.) w wierszach zaczynających się liczbą ujemną, zaś w tablicy B zrobić
to samo w wierszach zaczynających liczbą mniejszą od wczytanej.
4. Ponownie wydrukować obie tablice.
5. Wydrukować informację, w której tablicy odwrócono więcej wierszy (a może tyle samo).
W programie wykorzystać:
• funkcję, która jakąś tablicę wypełnia liczbami losowymi rzeczywistymi zawartymi między
dwiema jakimiś wartościami
• funkcję, która jakąś tablicę podanego typu drukuje wierszami z jakąś precyzją (liczbą
miejsc po kropce)
• funkcję, która dla jakiejś tablicy podanego typu odwraca kolejność elementów w tych
wierszach, które zaczynają się liczbą mniejszą od jakiejś wartości i zwraca liczbę wierszy,
w których dokonano takiego odwrócenia.
Wskazówka: Liczbę losową rzeczywistą w przedziale <a, b> losujemy za pomocą wyrażenia
a+(b-a)*rand( )/double(RAND_MAX), gdzie RAND_MAX typu int jest stałą z biblioteki cstdlib.

----------------------------------------------------------------------------------------------------------------------------------------

Zadanie p1  
 
1. Wczytać z klawiatury n (n – wczytana przez użytkownika) kolejnych danych o roślinach (wiek, gatunek, cena) i utworzyć z nich listę jednokierunkową w kolejności zgodnej z wczytywaniem. 2. Wydrukować utworzoną listę, korzystając z funkcji drukującej listę zaczynającą się pod jakimś adresem.  3. Usunąć z listy zaczynającej się pod jakimś adresem co trzecią roślinę o wieku większym od wartości podanej przez użytkownika po czym wyświetlić liczbę usuniętych elementów. 4. Ponownie wydrukować listę  5. Skasować utworzoną listę korzystając z funkcji kasującej listę zaczynającą się pod jakimś adresem.  Uwaga 1: Słowo "jakiś" oznacza parametr funkcji.  Uwaga 2: Wykonując różne działania na liście (pkt 2-6) należy założyć, że nie znamy ilości elementów listy, więc trzeba uważać, aby nie odwoływać się do pola next elementu, który nie istnieje (czyli ma adres NULL); w szczególności należy sprawdzać, czy lista nie jest pusta (adres głowy ==NULL) i czy ma ona dosyć elementów (aby nie wykonywać operacji niemożliwych do wykonania). 
 
----------------------------------------------------------------------------------------------------------------------------------------

Zadanie p2 
 
1. Tworzy listę z danych jak w zadaniu p1, wczytywanych z pliku o nazwie podanej przez użytkownika - korzystając z funkcji dołączania jednej rośliny o jakichś danych na końcu listy zaczynającej się pod jakimś adresem (parametrem funkcji dołączania jest tylko adres początku listy oraz gatunek, cena i wiek dołączanej rośliny)  2. Do listy wstawia nową roślinę przed co drugi element o wieku mniejszym od przedostatniej rośliny na liście oraz przed co czwarty element o wieku większym od średniego wieku wszystkich roślin na liście. Nowa roślina posiada dane wczytane przez użytkownika. 
 
Wykorzystać odpowiednie funkcje.  
 
3. Skasować wszystkie rośliny z listy znajdujące się za pierwszą rośliną o cenie większej od podanej przez użytkownika wartości oraz w ich miejsce wstawić jedną roślinę zawierającą gatunek wczytany przez użytkownika, natomiast wiek oraz cenę policzyć jako średnia arytmetyczną z odpowiednich wartości elementów skasowanych. 4. Na końcu usuwa listę z pamięci.  5. Drukuje listę po każdej operacji korzystając z odpowiedniej funkcji drukowania listy.  
 
 
Uwaga: Słowo "jakiś" oznacza parametr funkcji.  
