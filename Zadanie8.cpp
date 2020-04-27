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
