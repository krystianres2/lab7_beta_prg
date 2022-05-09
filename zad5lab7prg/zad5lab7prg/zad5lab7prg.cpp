#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
class Klasa {
private:
	string imie, nazwisko;
	string linia;
	fstream plik;
public:
	void czytaj_dane() {
		cout << "Podaj imie: " << endl;
		cin >> imie;
		cout << "Podaj nazwisko: " << endl;
		cin >> nazwisko;
	}
	void zapisz_dane_do_pliku() {
		plik.open("dane.txt", ios::out |ios::app);
		plik << imie << endl;
		plik << nazwisko << endl;
		plik.close();
	}
	void czytaj_dane_z_pliku() {
		int nr_lini = 1;
		plik.open("dane.txt", ios::in);
		if (plik.good() == false) {
			cout << "Plik nie istnieje " << endl;
			exit(0);
		}
		while (getline(plik, linia)) {
			switch (nr_lini) {
			case 1: imie = linia; break;
			case 2: nazwisko = linia; break;
			}

			nr_lini++;
	}
		plik.close();
		cout << "Imie: "<<imie << endl;
		cout <<"Nazwisko: "<< nazwisko << endl;


	}

};


int main()
{

	Klasa k1;
	k1.czytaj_dane();
	k1.zapisz_dane_do_pliku();
	k1.czytaj_dane_z_pliku();

}

