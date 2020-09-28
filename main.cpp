//pointer
#include <iostream>
using namespace std;

int main() {
  string nama1 = "Muhammad Azrial",nama2 = "Rafli Syahban";
  string *p1, *p2;
  
  cout << "Nama 1 adalah = " << nama1 << "\n";
  cout << "Nama 2 adalah = " << nama2 << "\n";

  cout << " Hasil Operasi Pointer ";
  cout << "------------------\n";

  p1 = &nama1;
  p2 = &nama2;
  *p1 = "Kevin Bimantara";
  *p2 = *p1;
  p1 = p2;
  *p1 = "Ramlah Sari";

  cout << "Nama 1 adalah = " << nama1 << "\n";
  cout << "Nama 2 adalah = " << nama2 << "\n";
  cout << "Nama 2 adalah = " << &nama2 << "\n";
  cout << "Nilai Pointer = " << p2 << "\n";
  cout << "NIlai Pointer = " << *p2 << "\n";
  
return 0;
}