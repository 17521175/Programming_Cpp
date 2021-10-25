#include "SoPhuc.h"

int main()
{
	SoPhuc a, b, c;
	float x, y;
	cout << "Nhap so phuc 1.\n";
	b.Nhap();
	cout << "Nhap so phuc 2.\n";
	c.Nhap();
	cout << "----------------------------------------------\n";
	cout << "Ket qua cua ban.\n";
	cout << "----------------------------------------------\n";
	cout << "Modul cua so phuc A la: ";
	x = b.Modul();
	cout << x << endl;
	cout << "Modul cua so phuc B la: ";
	y = c.Modul();
	cout << y << endl;
	cout << "Tong 2 so phuc la: ";
	a = b.Cong(c);
	a.Xuat();
	cout << "Hieu 2 so phuc la: ";
	a = b.Tru(c);
	a.Xuat();
	cout << "Tich 2 so phuc la: ";
	a = b.Nhan(c);
	a.Xuat();
	cout << "Thuong 2 so phuc la: ";
	a = b.Chia(c);
	a.Xuat();
	system("pause");
	return 0;
}