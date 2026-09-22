#include <iostream>

int main() {
    //array 2d: 5 baris dan 8 kolom (nilai ujian)
    int nilai[5][8] = {
        {80, 85, 90, 88, 92, 85, 90, 88}, //baris 0: nilai mahasiswa 1
        {75, 88, 95, 85, 90, 88, 92, 85}, //baris 1: nilai mahasiswa 2
        {80, 70, 60, 75, 80, 70, 65, 70}, //baris 2: nilai mahasiswa 3
        {90, 92, 88, 95, 90, 92, 88, 90}, //baris 3: nilai mahasiswa 4
        {100, 95, 98, 100, 95, 98, 100, 95} //baris 4: nilai mahasiswa 5
    };

    //mengakses satu data spesifik: Baris ke 0, kolom ke 1 (nilai 85)
    std::cout << "Nilai Mhs 1 pada ujian ke-2: " << nilai[0][1] << "\n";

    std::cout << "\n--- TABEL NILAI MAHASISWA ---\n";
    // loop luar untuk mengontrol baris
    for (int baris = 0; baris < 5; baris++) {
        std::cout << "Mahasiswa ke-" << (baris + 1) << ": ";

        //loop dalam untuk mengontrol kolom
        for (int kolom = 0; kolom < 8; kolom++) {
            std::cout << nilai[baris][kolom] << " "; //menampilkan nilai pada baris dan kolom tertentu
        }
        std::cout << "\n"; 
    }

    return 0;
}
