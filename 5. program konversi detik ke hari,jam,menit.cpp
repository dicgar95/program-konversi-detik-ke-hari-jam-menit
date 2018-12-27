#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int detik,hari,jam,menit;
  std::cout << "program konversi detik ke hari,jam,menit" << '\n';
  std::cout << "masukan detik :";
  std::cin >> detik;

  hari=detik/86400;
  jam=detik/3600;
  menit=detik/60;

  std::cout <<hari<< "hari" << '\n'<<jam<<"jam"<<'\n'<<menit<<"menit"<<'\n';









  return 0;
}
