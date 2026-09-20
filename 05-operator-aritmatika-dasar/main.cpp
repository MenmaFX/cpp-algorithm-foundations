#include <iostream>

int main() {
    int angka1 = 10;
    int angka2 = 3;

    int tambah = angka1 + angka2;
    int kali = angka1 * angka2;
    int sisaBagi = angka1 % angka2; //sisa pembagian 10 dibagi 3

    std::cout << "Hasil tambah (10 + 3): " << tambah << "\n";
    std::cout << "Hasil kali (10 * 3): " << kali << "\n";
    std::cout << "Sisa Bagi / Modulo (10 % 3): " << sisaBagi << "\n";
    
    return 0;
}
