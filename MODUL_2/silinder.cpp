#include <iostream>
using namespace std;

int main() {
    double luasAlas, tinggi, volume;
    // const double PI = 3.14159;
    
    cout << "Program Menghitung Volume Silinder" << endl;
    cout << "===================================" << endl;
    
    cout << "Masukkan luas alas silinder: ";
    cin >> luasAlas;
    
    cout << "Masukkan tinggi silinder: ";
    cin >> tinggi;
    
    // Rumus: V = Luas alas x tinggi
    volume = luasAlas * tinggi;
    
    cout << "\nVolume silinder adalah: " << volume << " satuan kubik" << endl;
    
    return 0;
}