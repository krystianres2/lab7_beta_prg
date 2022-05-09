#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
    int pesel;
};



int main()
{
    vector<Osoba> osoby;
        for (int i = 0; i < 10; i++) {
            Osoba temp;
            temp.imie = "Marcin"+to_string(rand()%20);
            temp.nazwisko = "Podsiadlo"+ to_string(rand()%20);
            temp.pesel = rand()%500000 + 10000000;
            temp.wiek = rand()%10+20;
            osoby.push_back(temp);
}
        for (int i = 0; i < osoby.size(); i++) {
            cout << "Wypisz: " << osoby[i].imie << osoby[i].nazwisko << osoby[i].pesel << osoby[i].wiek << endl;

        }

}

