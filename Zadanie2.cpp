/*
Zadanie 2 - z pętlą do-while
Napisać program, który wczytuje liczby całkowite aż do powtórnego wczytania liczby takiej
jak pierwsza lub druga wczytana liczba. Wydrukować następujące informacje (biorąc pod
uwagę wszystkie wczytane liczby):
• najmniejszą liczbę tego ciągu
• największą ujemną liczbę tego ciągu
• ile razy dwie jednakowe liczby wczytano obok siebie (jedna po drugiej).
UWAGA: Program napisać bez użycia tablic. Nie należy nigdzie zapisywać całego wczytanego
ciągu.
*/

#include <iostream>
 
using namespace std;
 
int main() {
    int min{}, maxNegative{}, numIterations{}, previousNumber{}, currentNumber{}, firstNumber{}, secondNumber{}, numRepetitions{}, maxRepetitions{1};
    bool isBroken = false;
    do {
        cout << "Enter a number: ";
        cin >> currentNumber;
        if (numIterations == 1) {
            numIterations++;
            secondNumber = currentNumber;
        }
        if (numIterations == 0) {
            numIterations++;
            min = currentNumber;
            firstNumber = currentNumber;
        }
 
        numIterations = numIterations <= 2 ? numIterations : ++numIterations;
 
        min = currentNumber < min ? currentNumber : min;
 
        numRepetitions = previousNumber == currentNumber ? ++numRepetitions : 1;
 
 
        maxRepetitions = numRepetitions > maxRepetitions ? numRepetitions : maxRepetitions;
 
        if (maxNegative == 0) {
            maxNegative = currentNumber < maxNegative ? currentNumber : maxNegative;
        }
 
        if (maxNegative < 0 && currentNumber < 0) {
            maxNegative = currentNumber > maxNegative ? currentNumber : maxNegative;
        }
 
        previousNumber = currentNumber;
 
        if (numIterations == 2) {
            isBroken = currentNumber == firstNumber;
        }
        if (numIterations >2 && (currentNumber == firstNumber || currentNumber == secondNumber)) {
            isBroken = true;
        }
 
    } while (!isBroken);
 
    cout << "Najmniejsza liczba ciagu: " << min <<  "\nNajwieksza liczba powtorzen obok siebie: " << maxRepetitions;
    if (maxNegative == 0) {
        cout << "\nNie podano zadnej ujemnej liczby.";
    } else {
        cout << "\nNajwieksza ujemna liczba ciagu: " << maxNegative;
    }
 
    return 0;
}
