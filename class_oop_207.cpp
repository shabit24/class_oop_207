// class_oop_207.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	}
};

