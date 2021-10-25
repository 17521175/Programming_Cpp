#include "SGK.h"



SGK::SGK()
{
	Mon = "Null";
	Loaisach = 1;
}
void SGK::Nhap()
{
	Sach::Nhap();
	cout << "Nhap ten mon hoc: ";
	cin.ignore();
	getline(cin, Mon);
}
void SGK::Xuat()
{
	cout << "--------------------------------------------------" << endl;
	Sach::Xuat();
	cout << "Mon hoc: " << Mon << endl;
}
SGK::~SGK()
{
}
