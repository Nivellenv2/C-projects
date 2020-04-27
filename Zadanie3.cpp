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
