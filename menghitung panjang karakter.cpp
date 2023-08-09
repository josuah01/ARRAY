#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	//mendeklarasikan teksl dan teks2
	char teks1[10], teks2[10];
	int jlhdepan, jlhkel, jlhhuruf;
	
	//menampilkan pesan u/ meminta masukan dari pengguna
	cout << "masukkan nama depan anda?: ";
	cin >> teks1;
	cout << "masukkan nama keluarga anda?: ";
	cin >> teks2;
	//menghitung panjang teks 
	jlhdepan = strlen (teks1);
	jlhkel = strlen (teks2);
	jlhhuruf = jlhdepan + jlhkel;
	
	//menampilkan hasil ke pengguna
	cout << "nama lengkap anda: " << teks1 << " " << teks2 <<
	endl;
	cout << "jumlah huruf nama anda : " << jlhhuruf << " huruf"
	<<endl;
	system ("PAUSE");
	return 0;
}
