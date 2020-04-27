Zadanie p1  
 
1. Wczytać z klawiatury n (n – wczytana przez użytkownika) kolejnych danych o roślinach (wiek, gatunek, cena) i utworzyć z nich listę jednokierunkową w kolejności zgodnej z wczytywaniem. 2. Wydrukować utworzoną listę, korzystając z funkcji drukującej listę zaczynającą się pod jakimś adresem.  3. Usunąć z listy zaczynającej się pod jakimś adresem co trzecią roślinę o wieku większym od wartości podanej przez użytkownika po czym wyświetlić liczbę usuniętych elementów. 4. Ponownie wydrukować listę  5. Skasować utworzoną listę korzystając z funkcji kasującej listę zaczynającą się pod jakimś adresem.  Uwaga 1: Słowo "jakiś" oznacza parametr funkcji.  Uwaga 2: Wykonując różne działania na liście (pkt 2-6) należy założyć, że nie znamy ilości elementów listy, więc trzeba uważać, aby nie odwoływać się do pola next elementu, który nie istnieje (czyli ma adres NULL); w szczególności należy sprawdzać, czy lista nie jest pusta (adres głowy ==NULL) i czy ma ona dosyć elementów (aby nie wykonywać operacji niemożliwych do wykonania). 
 
----------------------------------------------------------------------------------------------------------------------------------------

Zadanie p2 
 
1. Tworzy listę z danych jak w zadaniu p1, wczytywanych z pliku o nazwie podanej przez użytkownika - korzystając z funkcji dołączania jednej rośliny o jakichś danych na końcu listy zaczynającej się pod jakimś adresem (parametrem funkcji dołączania jest tylko adres początku listy oraz gatunek, cena i wiek dołączanej rośliny)  2. Do listy wstawia nową roślinę przed co drugi element o wieku mniejszym od przedostatniej rośliny na liście oraz przed co czwarty element o wieku większym od średniego wieku wszystkich roślin na liście. Nowa roślina posiada dane wczytane przez użytkownika. 
 
Wykorzystać odpowiednie funkcje.  
 
3. Skasować wszystkie rośliny z listy znajdujące się za pierwszą rośliną o cenie większej od podanej przez użytkownika wartości oraz w ich miejsce wstawić jedną roślinę zawierającą gatunek wczytany przez użytkownika, natomiast wiek oraz cenę policzyć jako średnia arytmetyczną z odpowiednich wartości elementów skasowanych. 4. Na końcu usuwa listę z pamięci.  5. Drukuje listę po każdej operacji korzystając z odpowiedniej funkcji drukowania listy.  
 
 
Uwaga: Słowo "jakiś" oznacza parametr funkcji.  
 
