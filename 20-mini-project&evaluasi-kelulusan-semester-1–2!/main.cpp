//tugas akhir semester 1-2(modifikasi codingan)

#include <iostream>
#include <string>

struct Identitas {
    std::string nama;
    std::string asalsekolah;
    std::string tempattinggal;
    std::string tanggallahir;
    double nilairatarata;
};

void tampilkanData(Identitas id) {
    std::cout << "\n=== HASIL IDENTITAS YANG TELAH DIISI UNTUK PENDAFTARAN SEKOLAH ===\n";
    std::cout << "Nama : " << id.nama << "\n";
    std::cout << "Asal Sekolah : " << id.asalsekolah << "\n";
    std::cout << "Tempat Tinggal : " << id.tempattinggal << "\n";
    std::cout << "Tanggal Lahir : " << id.tanggallahir << "\n";
    std::cout << "Nilai Rata-rata : " << id.nilairatarata << "\n";
}

int main() {
    Identitas id;

    std::cout << "Masukkan Nama Lengkapmu : ";
    std::getline(std::cin, id.nama);
    std::cout << "Masukkan Asal Sekolahmu : ";
    std::getline(std::cin, id.asalsekolah);
    std::cout << "Masukkan Tempat Tinggalmu : ";
    std::getline(std::cin, id.tempattinggal);
    std::cout << "Masukkan Tanggal Lahirmu : ";
    std::getline(std::cin, id.tanggallahir);
    std::cout << "Masukkan Nilai Rata-ratamu : ";
    std::cin >> id.nilairatarata; 

    tampilkanData(id);

    return 0;
}
