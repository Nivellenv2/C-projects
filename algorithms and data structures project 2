#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct SDane {
	double wiek, cena;
	string gatunek;
	SDane *nast;
};

ifstream plik;
string dane;
SDane *ogon, *schowek;

void dolacz(SDane *adres) {
	if (adres) {
		plik >> adres->wiek;
		plik >> adres->gatunek;
		plik >> adres->cena;
		adres->nast = NULL;
		ogon->nast = adres;
		ogon = adres;
	}
};

void dolacz2(SDane *adres) {
	if (adres) {
		cout << "Podaj dane nowej rosliny: " << endl << endl;
		cout << "Wiek: ";
		cin >> adres->wiek;
		cout << "Gatunek: ";
		cin >> adres->gatunek;
		cout << "Cena: ";
		cin >> adres->cena;
	}
	cout << endl;
};

void wstaw(SDane *gdzie, SDane *co)  
{  
	// zapamiętajmy element umieszczony za tym wskazywanym przez gdzie  
	schowek = gdzie->nast;  
	// umieśćmy odwołanie do wstawianego  
	gdzie->nast = co;   
	// i na koniec odtwórzmy dowiązanie do dotychczasowego natępnika  
	co->nast = schowek;  
};  

void drukuj(SDane *adres) {
	if (!adres)
	return;
	cout << "Wiek: " << setprecision(2) << adres->wiek << endl;
	cout << "Gatunek: " << adres->gatunek << endl;
	cout << "Cena: " << setprecision(3) << adres->cena << endl;
	cout << endl;
	drukuj(adres->nast);
};

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
};

int main () {

	SDane *glowa, *aktualny, *nowy, *poprzedni;
	int n{0};
	//string nazwaPliku;
	//cout << "Wprowadz nazwe pliku: ";
	//cin >> nazwaPliku;
	plik.open("../tekst.txt", ios::in);
	
	if (!plik) {
		cerr << "Problem z otwarciem pliku!" << endl;
		return 1;
	}
	cout << "Plik otwarty!" << endl;
	glowa = NULL;
	cout << "Napisz nam o ilu roslinach chcesz nas doinformowac: ";
	cin >> n;
	cout << "Zostana teraz wczytane informacje o " << n << " roslinach z pliku podanego przez uzytkownika." << endl << endl;
	
	//dodaje do listy rosliny

	for (int i = 0; i < n; i++) {
		if (glowa == NULL) { //warunek dla pierwszego elementu listy
			glowa = new SDane;
			plik >> glowa->wiek;
			plik >> glowa->gatunek;
			plik >> glowa->cena;
			glowa->nast = NULL;
			ogon = glowa;
		}
		else {
			aktualny = new SDane;
			dolacz(aktualny);
		}
	}
	
	cout << "Po wykonanej operacji drukuje liste zaczynajac od glowy:" << endl << endl;
	drukuj(glowa);
	cout << endl;
	
	int d{0}, m{0}, o{0};
	d = n-1;
	
	// docieram do przedostatniej rosliny na liscie i zapamietuje jej wiek
	
	aktualny = glowa; //startujemy od poczatku listy
	
	for (int i = 0; i != d-1; i++) {
		aktualny = aktualny->nast;
		m = aktualny->wiek;
	}
	
	cout << "Wiek przedostatniej rosliny wynosi: " << m << endl << endl;
	
	aktualny = glowa; //startujemy od poczatku listy

	// do listy wstawiam nowa rosline przed co drugi element o wieku mniejszym od przedostatniej
	// rosliny na liscie
	
	nowy = NULL;
	poprzedni = NULL;
	
	while (aktualny != NULL) {
		if (aktualny->wiek < m ) {
			o++;
			cout << aktualny->wiek << " jest mniejsze od " << m << endl;
			if (o % 2 == 0 && poprzedni != NULL) {
				nowy = new SDane;
				dolacz2(nowy);
				wstaw(poprzedni, nowy);
			}
			poprzedni = aktualny;
			aktualny = aktualny->nast;
		}
		else {
			poprzedni = aktualny;
			aktualny = aktualny->nast;
		}
	}

	cout << "Jest " << o <<" liczb mniejszych od " << m << endl << endl;
	cout << "Po wykonanej operacji drukuje liste zaczynajac od glowy:" << endl << endl;
	drukuj(glowa);

	//obliczam sredni wiek wszystkich roslin na liscie
	
	int ilosc{0};
	double suma{0}, srednia{0};
	
	aktualny = glowa; //startujemy od poczatku listy
	
	while (aktualny != NULL) {
		suma += aktualny->wiek;
		ilosc++;
		aktualny = aktualny->nast;
	}
	
	srednia = suma / ilosc;
	
	cout << "Jest " << ilosc << " roslin." << endl;
	cout << "Ich laczny wiek wynosi " << suma << endl;
	cout << "Srednia wieku wszystkich roslin wynosi " << srednia << endl << endl;
	
	int c{0};
	
	aktualny = glowa; //startujemy od poczatku listy
	poprzedni = NULL;
	nowy = NULL;
	//wstawiam nowa rosline przed co czwarty element o wieku wiekszym od sredniego wieku wszystkich roslin na liscie
	
	while (aktualny != NULL) {
		if (aktualny->wiek > srednia) {
			c++;
			if (c % 4 == 0 && poprzedni != NULL) {
				nowy = new SDane;
				dolacz2(nowy);
				wstaw(poprzedni, nowy);
			}
			poprzedni = aktualny;
			aktualny = aktualny->nast;
		}
		else {
			poprzedni = aktualny;
			aktualny = aktualny->nast;
		}
	}
	
	aktualny = glowa;
	
	int x{0};
	
	while (aktualny != NULL) {
		x++;
		aktualny = aktualny->nast;
	}
	
	cout << "Wszystkich roslin razem jest: " << x << endl;
	cout << "Po wykonanej operacji drukuje liste zaczynajac od glowy:" << endl << endl;
	drukuj(glowa);

	//kasuje wszystkie rosliny spelniajace warunek
	
	aktualny = glowa;
	poprzedni = NULL;
	schowek = NULL;
	
	double w{0}, l{0};
	int g{0}, k{0};
	
	while (aktualny != NULL) {
		if (aktualny->cena > n) {
			k++;
			cout << aktualny->cena << " jest pierwsza liczba wieksza od " << n << endl;
			if (k == 1) {
				if (aktualny == glowa) {
					ogon = glowa;
				}
				else {
					ogon = aktualny;
				}
				poprzedni = aktualny;
				aktualny = aktualny->nast;
				while (aktualny) {
					w += aktualny->wiek;
					l += aktualny->cena;
					g++;
					poprzedni->nast = aktualny->nast;
					schowek = aktualny;
					aktualny = aktualny->nast;
					delete aktualny;
				}
			}
		}
		else {
			poprzedni = aktualny;
			aktualny = aktualny-> nast;
		}
	}
	
	cout << endl;
	cout << "Usunieto lacznie " << g << " roslin" << endl;
	cout << "laczny wiek usunietych roslin wynosi " << w;
	cout << "laczna cena usunietych roslin wynosi" << l;
	cout << "Po wykonanej operacji drukuje liste zaczynajac od glowy:" << endl << endl;
	drukuj(glowa);

	
	// docieram do miejsca na liscie zaraz po pierwszej roslinie o cenie wiekszej od podanej przez uzytkownika wartosci
	// oraz dodaje tam rosline zawierajaca gatunek wczytany przez uzytkownika, a wiek i cena zostaly policzone wedlug zadania
	
	aktualny = glowa;
	
	int y {0};
	y = x - g;
	
	for (int i = 0; i < y ; i++) {
		if (aktualny == ogon) {
			aktualny = new SDane;
			aktualny->wiek = (w / g);
			cout << "Podaj gatunek nowej rosliny: ";
			cin >> aktualny->gatunek;
			aktualny->cena = (l / g);
			aktualny->nast = NULL;
			ogon->nast = aktualny;
			ogon = aktualny;
			}
		else {
			aktualny = aktualny->nast;
			}
	}
	
	cout << "Po wykonanej operacji drukuje liste zaczynajac od glowy:" << endl << endl;
	drukuj(glowa);
	cout << endl;
	
	// usuwam liste z pamieci
	usun(glowa, aktualny);
	//zamykam plik
	plik.close(); 
	return 0;
}
