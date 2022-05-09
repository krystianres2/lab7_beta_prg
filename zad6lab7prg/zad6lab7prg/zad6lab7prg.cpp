#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class Klasa {
private:
    int a[10][10]{};
    int b[10][10]{};
    int c[10][10]{};
   int k = 0;
    string linia;
    fstream plik;
public:
    void czytaj_dane() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                a[i][j] = rand() % 10;
            }
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << a[i][j] << " ";
            }cout << endl;
        }
        cout << endl;
    }
    void przetworz_dane() {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                b[j][i] = a[i][j];
            }
        }
    }
    void zapisz_dane_do_pliku() {
        plik.open("tablica.txt", ios::out | ios::app);
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                plik << b[i][j];
                plik << endl;
            }
           // plik << endl;
        }
        plik.close();
    }
    void  czytaj_dane_z_pliku() {
        int  nr_lini = 1;
        plik.open("tablica.txt", ios::in);
        if (plik.good() == false) {
            cout << "Plik nie istnieje " << endl;
            exit(0);
        }
        while (getline(plik, linia)) {
            //getline(plik, linia);
                        //for (int i = 0; i < 10; i++) {
                            //for (int j = 0; j < 10; j++) {
            cout << atoi(linia.c_str()) << " ";
            //c[i][j] = atoi(linia.c_str()); 
              // cout << nr_lini;

            nr_lini++;
            // }
            if (nr_lini % 10 == 0 && nr_lini > 10) {
            cout << endl;
        }
           // }
            //nr_lini++;
        }
        plik.close();

       /* for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }*/
        cout << endl;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }

    }
};



int main()
{
    Klasa k1;
    k1.czytaj_dane();
    k1.przetworz_dane();
    k1.zapisz_dane_do_pliku();
    k1.czytaj_dane_z_pliku();
}

