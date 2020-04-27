/*
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
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <ctime>
using namespace std;
 
template<size_t rows, size_t cols>
void fillWithRandom(double (&array)[rows][cols], int a, int b) {
 
    srand(time(0));
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            //wyrazenie "a+(b-a)*rand( )/double(RAND_MAX)" z tresci zadania nie generuje liczb poprawnie
 
            array[i][j] =  a + (rand() % (b - a + 1));
        }
    }
 
}
 
template<size_t rows, size_t cols>
void printWithPrecision(double (&array)[rows][cols], int precision) {
    for (size_t i = 0; i < rows; i++) {
        for (size_t j = 0; j < cols; j++) {
            cout << fixed << setprecision(precision) << setw(8) << array[i][j];
        }
        cout << endl;
    }
}
 
template<size_t rows, size_t cols>
int swapElements(double (&array)[rows][cols], int n) {
    int swappedRows {};
    for (size_t i = 0; i < rows; i++) {
        if (array[i][0] < n) {
        reverse(begin(array[i]), end(array[i]));
        swappedRows++;
        }
    }
    return swappedRows;
 
}
 
int main() {
    const int X{10}, D{6}, G{16}, w{5}, k{6};
    double A[w][k];
    double B[w][k];
 
    fillWithRandom(A, -X, X);
    fillWithRandom(B, D, G);
    printWithPrecision(A, 1);
    cout << endl;
    printWithPrecision(B, 2);
 
    int swappedInA;
    int swappedInB;
    swappedInA = swapElements(A, 0);
    cout << "Wczytaj liczbe konieczna do przemian w tablicy B: ";
    int n{};
    cin >> n;
    cout << endl;
    swappedInB = swapElements(B, n);
    printWithPrecision(A, 1);
    cout << endl;
    printWithPrecision(B, 2);
 
    if (swappedInA == swappedInB) {
        cout << "W obu tablicach odwrocono tyle samo wierszy";
    } else {
        cout << "Wiecej wierszy obrocono w tablicy ";
        (swappedInA > swappedInB) ? cout << "A" : cout << "B";
    }
 
    return 0;
}
