#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    const int n{6}, D{2}, G{9}, M{2};
    int A[n][n];
    
    srand(time(0));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        // Losuję liczby z przedziału <D,G>
        A[i][j] = rand() % (G - D) + D;
        }
    }
    
    // drukuję tablicę wierszami ze stałą szerokością 5 miejsc, ustawioną za pomocą setw
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
    
    //Dla każdej kolumny wydrukować (pod tą kolumną), ile jest w niej liczb podzielnych przez M
    int podzielne[n];
    for (int j = 0; j < n; j++) {
        podzielne[j] = 0;
        for (int i = 0; i < n; i++) {
            if (A[i][j] % M == 0) {
                podzielne[j] += 1;
            }
        }
    }
    cout << "----------------------------" << endl;
    for (int j = 0; j < n; j++) {
        cout << setw(5) << podzielne[j];
    }
    cout << endl;
    cout << endl;
    
        //Zamienić miejscami największy element głównej przekątnej z najmniejszym elementem z
    //trzech ostatnich wierszy tablicy.
    
    //Szukam największego elementu głównej przekątnej;
    int maxDiagonal = A[0][0];
    int maxDiagonalPosition = 0;
    
    for (int i = 0; i < n; i++) {
        if (A[i][i] > maxDiagonal) {
            maxDiagonal = A[i][i];
            maxDiagonalPosition = i;
        }
    }
    
    // Szukam najmniejszego elementu z trzech ostatnich wierszy tablicy
    
    int minInThreeLastRows = A[n-3][0];
    int minInThreeLastRowsI = 0;
    int minInThreeLastRowsJ = 0;
    
    for (int i = n-3; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] < minInThreeLastRows) {
                minInThreeLastRows = A[i][j];
                minInThreeLastRowsI = i;
                minInThreeLastRowsJ = j;
            }
        }
    }
    
    // Zamieniam miejscami najwiekszy element przekatnej z najmniejszym elementem 3 ostatnich wierszy
    
    A[maxDiagonalPosition][maxDiagonalPosition] = minInThreeLastRows;
    A[minInThreeLastRowsI][minInThreeLastRowsJ] = maxDiagonal;
    
    // Drukuję zmienioną tablicę
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
    return 0;
}
