#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int n{4};
    int A[n];
    cout << "Wprowadz " << n << " liczb calkowitych." << endl;
    int max{}, min{9999999}, suma{}, ilosc{};
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        suma += A[i];
        ilosc++;
        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }
    double srednia = (suma / ilosc);
 
        cout << "Najwieksza liczba sposrod wczytanego ciagu: " << max << endl;
        cout << "Najmniejsza liczba sposrob wczytanego ciagu: " << min << endl;
        cout << "Roznica pomiedzy kazda kolejna liczba, a srednia liczb tego ciagu: " << endl;
         for (int i = 0; i < n; i++) {
            double roznica = (A[i] - srednia);
            cout << roznica << endl;
    } 
    cout << "Kolejny etap, drukuje tablice: " << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Teraz przesune kazdy element cyklicznie o 1 miejsce w lewo i wydrukuje tablice ponownie: " << endl;
    int schowek{};
    schowek = A[0];
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            schowek = A[0];
            A[i] = A[i+1];
        }
        else if( i == n-1) {
            A[i] = schowek;
        }
        else {
            A[i] = A[i+1];
        }
        
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Teraz zamienimy miejscami sasiednie elementy w kolejnych parach,\n jesli pierwszy element z tej pary jest wiekszy od drugiego i wydrukujemy tablice ponownie." << endl;
    int schowek2{};
    for (int i = 0; i < n; i++) {
        if (A[i] > A[i+1]) {
            schowek2 = A[i];
            A[i] = A[i+1];
            A[i+1] = schowek2;
        }
        cout << A[i] << " ";
    }
    return 0;
}
