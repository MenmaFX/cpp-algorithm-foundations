#include <iostream>

int main() {
    int angka = 50;

    //membuat variabel pointer 'ptr' yang menunjuk ke alamat variabel 'angka'
    int* ptr = &angka;

    std::cout << "nilai dari variabel angka: " << angka << "\n";
    std::cout << "alamat memory dari variabel angka: " << &angka << "\n";
    std::cout << "alamat yang disimpan oleh pointer ptr: " << ptr << "\n";
    std::cout << "nilai yang ditunjuk oleh pointer ptr: " << *ptr << "\n";

    return 0;
}
