#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
 
using namespace std;
 
int main() {
    struct student {
        string name;
        double grade{};
    };
 
    //program przyjmuje dane w postaci "student1 ocena,student2 ocena,student3 ocena"
    const int n{3};
    student A[n][n];
 
    ifstream file;
    string filename;
    cout << "Wprowadz nazwe pliku (wraz z rozszerzeniem): ";
    cin >> filename;
    file.open(filename);
 
    if (!file.is_open()) {
        cout << "Nie mozna otworzyc pliku.";
        return 1;
    }
 
    string line;
 
    for (auto &i : A) {
        for (auto &j : i) {
            getline(file, line, ',');
            stringstream stream(line);
            string name;
            double grade;
            stream >> name;
            stream >> grade;
            student studentToPut;
            studentToPut.name = name;
            studentToPut.grade = grade;
            j = studentToPut;
        }
    }
 
 
    for (auto &i : A) {
        for (auto &j : i) {
            cout << setw(15) << setprecision(1) << fixed << j.name << " : " << j.grade;
        }
        cout << endl;
    }
 
    int qualifiedPeople{0};
    double cumulatedGrade{0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                student student;
                student = A[i][j];
                if ((student.name.at(student.name.size() - 1) == 'k' ||
                     student.name.at(student.name.size() - 1) == 'a') &&
                    student.grade >= 3.0) {
                    qualifiedPeople++;
                    cumulatedGrade += student.grade;
                }
            }
        }
    }
    double averageGrade;
    averageGrade = cumulatedGrade / qualifiedPeople;
    cout << "Srednia ocen sposrod ocen pozytywnych osob o imionach konczacych sie \n litera 'a' lub 'k'"
            " wpisanych pod glowna przekatna tablicy: "
         << averageGrade << endl;
 
    int columnsWithHigherAverage{};
    for (int j = 0; j < n; j++) {
        int numberOfGrades{};
        double cumulatedColumnGrade{};
        for (int i = 0; i < n; i++) {
            student student = A[i][j];
            cumulatedColumnGrade += student.grade;
            numberOfGrades++;
        }
        if ((cumulatedColumnGrade / numberOfGrades) > averageGrade) {
            columnsWithHigherAverage++;
        }
 
    }
 
    cout << "Liczba kolumn, w ktorych srednia ocena ze wszystkich ocen przekracza poprzednio wyliczona srednia: " << columnsWithHigherAverage;
 
    return 0;
}
