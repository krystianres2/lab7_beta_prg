#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;





int main()
{
    float a, b, c, x, d;
    cout << "Podaj a:", cin >> a;
    cout << "Podaj b:", cin >> b;
    cout << "Podaj c:", cin >> c;
    d = (b * b) - (4 * a * c);

    if (d > 0) {
        cout << "1 pierwiastek: "<< ceil(((-b + sqrt(d)) / (2 * a))*100)/100 << endl;
        cout << "2 pierwiastki: " << ceil(((-b - sqrt(d)) / (2 * a))*100)/100 << endl;
    }
    else if (d == 0)
        cout << "pierwiastek:" << -b / (2 * a) << endl;
    else
        cout << "brak pierwiastkow";



}

