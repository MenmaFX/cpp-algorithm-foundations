#include <iostream>
#include <stack> //memanggil library stack bawaan c++
#include <string>

int main() {
    std::stack<std::string> tumpukanBuku; //membuat stack bernama tumpukanBuku

    //menambahkan data ke dalam tumpukan (push)
    tumpukanBuku.push("Buku 1: C++ Dasar");
    tumpukanBuku.push("Buku 2: Algoritma");
    tumpukanBuku.push("Buku 3: Struktur Data");

    //melihat buku yang berada di posisi paling atas (top)
    std::cout << "Buku paling atas saat ini: " << tumpukanBuku.top() << "\n";

    //mengambil/menghapus buku paling atas (pop)
    std::cout << "Mengambil buku paling atas...\n";
    tumpukanBuku.pop();

    //melihat buku yang berada di posisi paling atas setelah di-pop
    std::cout << "buku paling atas sekarang: " << tumpukanBuku.top() << "\n";

    return 0;
}
