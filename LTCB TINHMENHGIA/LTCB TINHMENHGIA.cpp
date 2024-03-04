


#include <iostream>
using namespace std;
int main() {
	int sotien;
	cout << "nhap so tien can rut";
	cin >> sotien;
	int soto500 = sotien / 500;
	sotien %= 500;
	int soto200 = sotien / 200;
	sotien %= 200;
	int soto100 = sotien / 100;
	sotien %= 100;
	int soto50 = sotien / 50;
	sotien %= 50;
	int soto20 = sotien / 20;
	sotien %= 20;
	int soto10 = sotien / 10;
	sotien %= 10;
	int soto5 = sotien / 5;
	sotien %= 5;
	int soto1 = sotien / 1;
	sotien %= 1;
	int soto = sotien;
	int tongtien = soto500 + soto200 + soto100 + soto50 + soto20 + soto10 + soto5  + soto1;
		cout << "so to tien 500 la " << soto500 << endl;
	cout << "so to tien 200 la " << soto200 << endl;
	cout << "so to tien 100 la " << soto100 << endl;
	cout << "so to tien 50 la " << soto50 << endl;
	cout << "so to tien 20 la " << soto20 << endl;
	cout << "so to tien 10 la " << soto10 << endl;
	cout << "so to tien 5 la " << soto5 << endl;
	
	cout << "so to tien 1 la " << soto1 << endl;
	return 0;
}