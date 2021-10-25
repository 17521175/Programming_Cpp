#include "PhanSo.h"

int main()
{
	PhanSo a, b, c;
	cout << "Nhap phan so 1.\n";
	b.Nhap();
	cout << "Nhap phan so 2.\n";
	c.Nhap();
	cout << "-----------------------------------------------\n";
	cout << "Ket qua cua ban. \n";
	cout << "-----------------------------------------------\n";
	cout << "Tong 2 phan so la: ";
	a = b.Cong(c);
	a.Xuat();
	cout << "Hieu 2 phan so la: ";
	a = b.Tru(c);
	a.Xuat();
	cout << "Tich 2 phan so la: ";
	a = b.Nhan(c);
	a.Xuat();
	cout << "Thuong 2 phan so la: ";
	a = b.Chia(c);
	a.Xuat();
	system("pause");
	return 0;
}