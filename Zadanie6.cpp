/*
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
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>  
 
using namespace std;
 
const int w = 5, k = 5, X = 1;
const int precision = 2, width = 10;
double A[w][k];
 
int main() {
    
    ifstream file;
    string fileName;
 
    // Proszę o podanie nazwy pliku, otwieram i sprawdzam czy plik istnieje
    do {
      cout << "Podaj nazwe pliku: ";
      cin >> fileName;
      // Otwieram plik .txt i zezwalam na zapis / odczyt
      file.open(fileName, ios::in | ios::out);
    } while (file.good() != true); 
 
    string line;
 
    // Wypełniam array danymi z pliku
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            // jeżeli jest kolejny wiersz to pobieram z pliku
            if (getline(file, line)) {
                A[i][j] = stod(line);
            }
            // jeżeli plik się skończył uzupełniam resztę pól const X
            else {
                A[i][j] = X;
            }
        }
    }
 
    // Drukuje array z ustaloną liczbą cyfr po przecinku i szerokością
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            cout << fixed << setprecision(precision) << setw(width) << A[i][j];
        }
        cout << endl;
    }
 
    cout << endl;
 
 
    // Drukuje wartości z obwodu array'a sprawdzając przy okazji liczbę max
    // Górny bok (bez ostatniego)
    double max = A[0][0];
 
    for (int i = 0; i < k - 1; i++) {
        if (max < A[0][i])
            max = A[0][i];
 
        cout << fixed << setprecision(precision) << setw(width) << A[0][i];
    }
    // Prawy bok (bez ostatniego)
    for (int i = 0; i < w - 1; i++) {
        if (max < A[i][k-1])
            max = A[i][k-1];
 
        cout << fixed << setprecision(precision) << setw(width) << A[i][k-1];
    }
    // Dolny bok (bez ostatniego)
    for (int i = k - 1; i > 0; i--) {
        if (max < A[k-1][i])
            max = A[k-1][i];
 
        cout << fixed << setprecision(precision) << setw(width) << A[k-1][i];
    }
    // Lewy bok (bez ostatniego)
    for (int i = w - 1; i > 0; i--) {
        if (max < A[i][0])
            max = A[i][0];
 
        cout << fixed << setprecision(precision) << setw(width) << A[i][0];
    }
 
    cout << endl << endl << "Maksymalna liczba z obwodu tablicy: " << max << endl;
 
    // Sprawdzam czy suma wiersza jest większa od liczby max
    int sum = 0;
   
    for (int i = 0; i < w; i++) {
        sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += A[i][j];
        }
 
        if (sum > max) {
            // Jeżeli suma wiersza większa od max zmieniam wartość wszystkich liczb w wierszu na 0
            for (int x = 0; x < w; x++) {
                A[i][x] = 0;
            }
        }
    }
 
    file.close();
 
    ofstream newfile;
    newfile.open("nowa.txt");
 
    // Zapisuje nowy "wyzerowany" array do pliku "nowa.txt" w odpowiednim formacie
 
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k; j++) {
            newfile << fixed << setprecision(precision) << setw(width) << A[i][j];
        }
        newfile << endl;
    }
 
    newfile.close();
 
    return 0;
}
