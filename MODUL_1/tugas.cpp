#include <iostream>
using namespace std;

int main() {
    string nama, nim, plug, jenisKelamin, alamat, email, noHp;

    cout << "===== Data Pribadi =====" << endl;

    cout << "Nama : ";
    getline(cin, nama);

    cout << "NIM : ";
    getline(cin, nim);

    cout << "Plug : ";
    getline(cin, plug);

    cout << "Jenis Kelamin (L/P) : ";
    getline(cin, jenisKelamin);

    cout << "Alamat : ";
    getline(cin, alamat);

    cout << "E-mail : ";
    getline(cin, email);

    cout << "No. HP : ";
    getline(cin, noHp);

    cout << "\n===== OUTPUT DATA ANDA =====" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "Plug : " << plug << endl;
    cout << "Jenis Kelamin : " << jenisKelamin << endl;
    cout << "Alamat : " << alamat << endl;
    cout << "E-mail : " << email << endl;
    cout << "No. HP : " << noHp << endl;

    return 0;
}
