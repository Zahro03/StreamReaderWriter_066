#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File:"; 
	cin >> NamaFile; 

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << "<= Menulis file. \'q\' untuk keluar" << endl;

	//unlimitied loop untuk menulis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu kelas
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
	}
}