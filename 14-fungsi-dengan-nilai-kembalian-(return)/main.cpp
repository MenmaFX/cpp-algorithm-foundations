#include <iostream>

//fungsi yang mengembalikan nilai berupa angka bulat (int)
int tambah(int angka1, int angka2) {
    return angka1 + angka2; //mengembalikan hasil penjumlahan dari angka1 dan angka2
}

int main() {
    //memanggil fungsi tambah dan menyimpan hasilnya dalam variabel 'hasil'
    int hasil = tambah(188, 199);
    std::cout << "Hasil penjumlahan 188 + 199 adalah: " << hasil << "\n";

    //memanggil fungsi tambah langsung di dalam std::cout
    std::cout << "Hasil penjumlahan 177 + 188 adalah: " << tambah(177, 188) << "\n";
    
    return 0;
}
