#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan Nilai Siswa : "; cin>>nilai;

    //untuk nilai 0-60
    if((nilai>=0)&&(nilai<=60)) {
    cout << "nilai siswa E" <<endl;
    }
    //untuk nilai 61-70
    else if ((nilai>=61)&&(nilai<=70)) {
    cout << "nilai siswa D" <<endl;
    }

    //untuk nilai 71-80
    else if((nilai>=72)&&(nilai<=30)) {
            cout << "nilai siswa C" <<endl;
    }

    //untuk nilai 81-90
    else if((nilai>=81)&&((nilai<=90)) {
            cout << "nilai siswa B" <<endl;
    }

    //untuk nilai 91-100
    else if((nilai>=91)&&((nilai<=100) {
            cout << "nilai siswa A" <<endl;
    return 0;
}
