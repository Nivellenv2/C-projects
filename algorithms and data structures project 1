#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

struct SDane {
	int wiek, cena;
	string gatunek;
	SDane *nast;
};

void drukuj(SDane *adres) {
	if (!adres)
	return;
	cout << "Wiek: " << adres->wiek << endl;
	cout << "Gatunek: " << adres->gatunek << endl;
	cout << "Cena: " << adres->cena << endl;
	cout << endl;
	drukuj(adres->nast);
}

void usun(SDane *adres, SDane *aktualne) {
	if (adres) {
		cout << "Usuwam utworzona liste!" << endl;
		while (aktualne) {
			adres = aktualne;
			aktualne = aktualne->nast;
			delete adres;
		};  
		adres = NULL;
	}
}

int main () {
	
	SDane  *glowa , *aktualny, *ogon;
	int n{0};
	
	glowa = NULL;
	cout << " Witaj! Napisz nam o ilu roslinach chcesz nas doinformowac: " << endl;
	cin >> n;
	cout << "Wprowadz dane " << n << " roslin." << endl << endl;
	
	//dodaje do listy pierwsza rosline
	
	glowa = new SDane;
	cout << "Roslina nr 1:" << endl << endl;
	cout << "Wiek:";
	cin >> glowa->wiek;
	cout << "Gatunek:";
	cin >> glowa->gatunek;
	cout << "Cena:";
	cin >> glowa->cena;
	cout << endl;
	glowa->nast = NULL;
	ogon = glowa;
	
	//dodaje do listy pozostale rosliny
	
	for (int i = 1; i < n; i++) {
		aktualny = new SDane;
		cout << "Roslina nr:" << i+1;
		cout << endl << endl;
		cout << "Wiek:";
		cin >> aktualny->wiek;
		cout << "Gatunek:";
		cin >> aktualny->gatunek;
		cout << "Cena:";
		cin >> aktualny->cena;
		aktualny->nast = NULL;
		ogon->nast = aktualny;
		ogon = aktualny;
		cout << endl;
	}
	
	cout << endl;
	cout << "Drukuje liste zgodnie z kolejnoscia wczytywyania:" << endl << endl;
	drukuj(glowa);
	
	//usuwam co trzecia rosline o wieku wiekszym od liczby podanej przez przewodnika (n)  
	
	aktualny = glowa;
	int k{0}, u{0};
	
	for (int i = 0; i < n; i++) {
		if (aktualny->wiek > n && aktualny != NULL) {
			k++;
			if (k % 3 == 0) {
				aktualny = aktualny->nast;
				ogon = aktualny->nast;
				aktualny->nast = ogon->nast;
				delete ogon;
				u++;
			}
		}
		else {
			aktualny = aktualny->nast;
		}
	}
	
	cout << endl;
	//wyswietlam liczbe usunietych elementow
	cout << "Usunieto " << u << " elementow." << endl;
	cout << endl;
	//drukuje liste ponownie po usunieciu elemetu/ow
	cout << "Ponownie drukuje liste po usunieciu elementow zaczynajac ponownie od glowy:" << endl << endl;
	drukuj(glowa);
	//kasuje liste za pomoca utworzonej wczesniej funkcji
	usun(glowa, aktualny);
	
	return 0;
}
