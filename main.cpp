
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string nama;
    string ulang;

    do {
        cout << "masukkan nama : ";
        cin >> nama;

        cout << "namamu adalah : " << nama << endl;

        cout << "apakah anda ingin mengulang? tekan y atau t : ";
        cin >> ulang;

        cout << endl;

    } while (ulang == "y" || ulang == "Y");

    system("pause");
    return 0;
}
