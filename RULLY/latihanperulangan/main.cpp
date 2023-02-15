#include <iostream>

using namespace std;

int main()
{
    int j = 0;
    char tambah = 'y';
    cout << "=========while ======"<<endl;
    while (tambah == 'y') {
        cout << "perulangan ke" << j <<endl;
        cout << "apakah ingin nambah? (y/n)";
        cin >> tambah;
        j++;
    }
    return 0;
}
