#include <iostream>
#include <string>

int main() {
  std::string nama;
  int umur;

  //meminta masukan dari user
  std::cout<<"Masukan nama panggilanmu: ";
  std::cin>>nama;
  std::cout<<"Masukan umur kamu sekarang: ";
  std::cin>>umur;

  //menampilkan hasil input
  std::cout<<"Nama panggilanku adalah: " <<nama<<",Umurku sekarang: "<<umur<<"Tahun!\n";
  
  return 0;
}
