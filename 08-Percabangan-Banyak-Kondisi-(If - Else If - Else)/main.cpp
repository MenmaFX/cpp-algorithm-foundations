#include <iostream>

int main() {
    int nilai;

    std::cout << "Masukkan nilai ujian lu (0-100): ";
    std::cin >> nilai;

    if (nilai >= 85) {
        std::cout << "Grade: A (Sangat Memuasakan!)\n";
    } else if (nilai >= 75) {
        std::cout << "Grade: B (Memuasakan!)\n";
    } else if (nilai >= 60) {
        std::cout << "Grade: C (Cukup)\n";
    } else {
        std::cout << "Grade: D (Kali ini lu perlu belajar lagi sih!50)\n";
    }

    return 0;
}
