#include <iostream>

int main() {
    //membuat array berisi angka nilai mahasiswa
    int nilai[7] = {85, 90, 78, 92, 88, 100, 20};

    //mengakses elemen array berdasarkan indeksnya (dimulai dari 0)
    std::cout << "Nilai mahasiswa pertama (indeks 0): " << nilai[0] << "\n";
    std::cout << "Nilai mahasiswa kedua (indeks 1): " << nilai[1] << "\n";
    std::cout << "Nilai mahasiswa ketiga (indeks 2): " << nilai[2] << "\n";
    std::cout << "Nilai mahasiswa keempat (indeks 3): " << nilai[3] << "\n";
    std::cout << "Nilai mahasiswa kelima (indeks 4): " << nilai[4] << "\n";
    std::cout << "Nilai mahasiswa keenam (indeks 5): " << nilai[5] << "\n";
    std::cout << "Nilai mahasiswa ketujuh (indeks 6): " << nilai[6] << "\n";

    //menampilkan seluruh isi array menggunakan perulangan for
    std::cout << "\n--- Daftar Nilai Mahasiswa ---\n";
    for (int i = 0; i < 7; i++) {
        std::cout << "Mahasiswa ke-" << (i + 1) << ": " << nilai[i] << "\n";
    }

    return 0;
}
