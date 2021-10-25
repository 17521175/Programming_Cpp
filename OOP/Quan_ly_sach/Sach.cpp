#include "Sach.h"

Sach::Sach()
{
	Ten = "Null";
	Tacgia = "Null";
	Namxb = "Null";
	gia = 0;
}
void Sach::Nhap()
{
	cout << "Nhap ten sach: ";
	cin.ignore();
	getline(cin, Ten);
	cout << "Nhap ten tac gia: ";
	getline(cin, Tacgia);
	cout << "Nhap nam xuat ban: ";
	getline(cin, Namxb);
	cout << "Nhap gia tien: ";
	cin >> gia;
}
void Sach::Xuat()
{
	cout << "Thong tin sach. " << endl;
	cout << "Ten sach: " << Ten << endl;
	cout << "Ten tac gia: " << Tacgia << endl;
	cout << "Nam xuat ban: " << Namxb << endl;
	cout << "Gia tien: " << gia << endl;
}
Sach::~Sach()
{
}
