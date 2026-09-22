#include <iostream>

int main() {
    int nilai;

    std::cout << "masukkan nilai ujian kamu: ";
    std::cin >> nilai;

    if (nilai >=75) {
    std::cout << "Selamat, kamu LULUS!\n";
    } else {                              
        std::cout << "Maaf, kamu BELUM LULUS. Tetap semangat!\n";
    }
    return 0;
}
