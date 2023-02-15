#include <iostream>

using namespace std;

int main()
{

    string nama;
    int umur;
    char jk;
    cout << "siapa namamu?" << endl;
    cout << "jawab :";
    //cin >> nama;
    getline (cin, nama);
    cout << "berapa umurmu?" << endl;
    cout << "jawab :";

    cin >> umur;
    cout << "kamu laki-laki atau perempuan (L/P)";
    cout << "jawab :";
    cin >> jk;

    cout << "salam kenal!" <<  nama << "anda berusia " << umur;
    cout << "dan anda berjenis kelamin" <<jk;

    return 0;
}
