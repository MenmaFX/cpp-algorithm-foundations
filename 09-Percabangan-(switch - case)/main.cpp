#include <iostream>

int main() {
    int pilihan;

    std::cout << "=== Menu Makanan ===\n";
    std::cout << "1. Nasi Goreng\n";
    std::cout << "2. Mie Ayam\n";
    std::cout << "3. Bakso\n";
    std::cout << "Pilih menu (1-3): ";
    std::cin >> pilihan;

    switch (pilihan) {
        case 1:
            std::cout << "Kamu memilih Nasi Goreng.\n";
            break;
        case 2:
            std::cout << "Kamu memilih Mie Ayam.\n";
            break;
        case 3:
            std::cout << "Kamu memilih Bakso.\n";
            break;
        default:
            std::cout << "Pilihan tidak valid.\n";
            break;
    }

    return 0;
}
