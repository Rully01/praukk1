#include <iostream>

using namespace std;

int main()
{
    int  a, t, r;
    float LuasSegitiga,LuasLingkaran;
    float phi = 3.14;

    cout << "============================= " << endl;
    cout << " APLIKASI PENGHITUNG SEGITIGA " << endl;
    cout << "============================= " << endl;



    cout << "masukkan alas segitiga :";
    cin >> a;
    cout << "masukkan tinggi segitiga :";
    cin >> t;
    cout << endl;
    LuasSegitiga = 0.5*a*t;
    cout << "Luas Segitiga adalah" << LuasSegitiga <<" cm2" << endl;

    cout << "============================= " << endl;
    cout << " APLIKASI PENGHITUNG LINGKARAN " << endl;
    cout << "============================= " << endl;
    cout << "MASUKKAN JARI-JARI LINGKARAN :";
    cin >> r;
    LuasLingkaran = phi*r*r;
    cout << "Luas Lingkaan adalah" << LuasLingkaran<<"cm2" <<endl;

    return 0;
}
