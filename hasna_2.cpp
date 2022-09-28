#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<"rumus"<<endl;
  cout <<"masukan nilai uts=";
  int nilaiuts;
  cin>> nilaiuts;
  cout << "masukan nilai uas=";
  int nilaiuas;
  cin>> nilaiuas;
  cout << "masukan angka3=";
  int angka3;
  cin>> angka3;
  int hasil;
      hasil = (nilaiuts+nilaiuas)/angka3;
  cout << "hasil rumus="<< hasil;
}