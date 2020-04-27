#include <iostream>
#include <string>

using namespace std;

int main() {
    char znak1, znak2;
    int nawiasy{};

    do {
        cout << "Podaj znak: ";
        cin >> znak1;
        if ((znak1 == '(') || (znak1 == ')') || (znak1 == '[') || (znak1 == ']') || 
        (znak1 == '{') || (znak1 == '}') || (znak1 == '<') || (znak1 == '>')) {
            nawiasy++;
        }
        cout << "Podaj drugi znak: ";
        cin >> znak2;
        if ((znak2 == '(') || (znak2 == ')') || (znak2 == '[') || (znak2 == ']') || 
        (znak2 == '{') || (znak2 == '}') || (znak2 == '<') || (znak2 == '>')) {
            nawiasy++;
        }
    }   while (((znak1 != '?') && (znak2 != '!')) || ((znak2 != '!') && (znak1 != '?')));

    cout << endl;
    cout << "Ilosc wczytanych nawiasow wynosi: " << nawiasy << endl;
    return 0;
}
