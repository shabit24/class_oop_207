// class_oop_207.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
class Mahasiswa {
public: 
	int nim;
	string nama;
	void tampile() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;

	}

};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMk;

public:
	void inputMk() {
		cout << "\nMasukan jumlah sks = ";
		cin >> sks;
		cout << "\nMasukan Kode Mk = ";
		cin >> kode;
		cout << "\nMasukan namaMk = ";
		cin >> namaMK;
	}
	void tampilMK() {
		cout << "\nJumlah sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama MK = " << namaMk << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah Mk;
	cout << "\nMasukan NIM = ";
	cin >> mhs.nim;
	cout << " \nMasukan Nama = ";
	cin >> mhs.nama;
	mhs.tampile();
	Mk.inputMk();
	Mk.tampilMK();
	

}

