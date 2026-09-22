#include <iostream>
#include <string>

//membuat fungsi bernama sapaPengguna
void sapaPengguna(std::string nama) {
    std::cout << "Halo " << nama << ", selamat belajar fungsi di C++!\n";
}

int main() {
    //memanggil fungsi sapaPengguna beberapa kali dengan nama yang berbeda
    sapaPengguna("Menma");
    sapaPengguna("Senko");
    sapaPengguna("Maru");
    sapaPengguna("Abi");

    return 0;
}
