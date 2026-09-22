#include <iostream>

int main() {
    int angka;

    do {
        std::cout << "masukan angka (ketik 0 untuk berhenti): ";
        std::cin >> angka;
        std::cout << "kamu masukan angka: " << angka << "\n\n";
    } while (angka != 0);

    std::cout << "Terima kasih program telah selesai!\n";

    return 0;5
}
