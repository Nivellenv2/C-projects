/*Zadanie 3
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
Wskazówki
1. Napisy należy wczytywać - jako zmienne typu string - instrukcją cin (do pierwszego
niewidocznego znaku, np. spacji lub Entera)
2. Jeśli napis jest zmienną typu string, to jego długość (liczba znaków) jest równa
n= napis.size( ), zaś ostatni znak to napis[n-1].
3. Duże litery to znaki zawarte między ‘A’ i ‘Z’ , cyfry jako znaki zawarte są między ‘0’ i ‘9’. 
*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    int N{};
    cout << "Witaj! Podaj liczbe calkowita, ktora jest dodatnia i mniejsza od 10: " << endl;
    do {
    cin >> N;
    }while (N < 0 || N > 10);
        
    string napis;
    int n = napis.size();
    int licznik1{}, licznik2{};
    cout << "Dobrze! Teraz podaj " << N << " napisow." << endl;
    for (int i = 0; i < N; i++) {
        cin >> napis;
        
        if ((napis[0] >= 'A' && napis[0] <= 'Z') && (napis[n-1] >= 'A' && napis[n-1] <= 'Z')) {
            licznik1++;
        }

        if ((napis[0] >= 0 && napis[0] <= 9) && (napis[n-1] >= 0 && napis[n-1] <= 9)) {
            licznik2++;
        }
    }
   cout << "Swietnie! Teraz podaj jeszcze kilka napisow. Program zakonczy sie, gdy wpiszesz napis END." << endl;
   while(napis != "END") {
       cin >> napis;
       if (napis == "END") {
           break;
       }
       if ((napis[0] >= 'A' && napis[0] <= 'Z') && (napis[n-1] >= 'A' && napis[n-1] <= 'Z')) {
            licznik1++;
        }

        if ((napis[0] >= 0 && napis[0] <= 9) && (napis[n-1] >= 0 && napis[n-1] <= 9)) {
            licznik2++;
        }
   }
   cout << "Pora na kolejny etap! Teraz program wydrukuje ile lacznie bylo wyrazow w ktorych\n pierwszy i ostatni znak sa duzymi literami oraz ile takich, w ktorych pierwszy i ostatni znak to cyfry: " << endl;
   cout << "Przypadki z duzymi literami: " << licznik1 << endl;
   cout << "Przypadki z cyframi: " << licznik2 << endl;
    return 0;
}
