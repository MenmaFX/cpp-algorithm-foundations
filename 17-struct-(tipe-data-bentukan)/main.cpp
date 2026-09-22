#include <iostream>
#include <string>

//membuat tipe data baru bernama 'Mahasiswa'
struct Mahasiswa {
    std::string nama;
    int nim;
    double ipk;
};
int main() {
    //membuat variabel 'mhs1' menggunakan tipe data 'mahasiswa'
    Mahasiswa mhs1;

    //mengisi data variabel anggota menggunakan tanda titik (.)
    mhs1.nama = "Ahmad Sayfudin";
    mhs1.nim = 123456789;
    mhs1.ipk = 3.75;

    //menampilkan isi dan struct
    std::cout << "=== Data Mahasiswa ===\n";
    std::cout << "Nama: " << mhs1.nama << "\n";
    std::cout << "NIM: " << mhs1.nim << "\n";
    std::cout << "IPK: " << mhs1.ipk << "\n";

    return 0;
}
