#include "PhanSo.h"

PhanSo::PhanSo()
{
	Tu = 0;
	Mau = 1;
}
PhanSo::PhanSo(int t, int m)
{
	t = Tu;
	m = Mau;
}
PhanSo::PhanSo(PhanSo &x)
{
	Tu = x.Tu;
	Mau = x.Mau;
}
int PhanSo::getTu()
{
	return Tu;
}
int PhanSo::getMau()
{
	return Mau;
}
void PhanSo::setTu(int newTu)
{
	Tu = newTu;
}
void PhanSo::setMau(int newMau)
{
	Mau = newMau;
}
void PhanSo::Nhap()
{
	do
	{
		cout << "Nhap tu so: "; 
		cin >> Tu;
		cout << "Nhap mau so: "; 
		cin >> Mau;
		if (Mau == 0)
			cout << "Nhap sai. Xin moi ban nhap lai.\n";
	} while (Mau == 0);
}
int PhanSo::UCLN(int m, int n)
{
	if (m == 0)
		return n;
	else if (n == 0)
		return m;
	m = abs(m);
	n = abs(n);
	while (m != n)
	{
		if (m > n)
			m -= n;
		else if (m < n)
			n -= m;
	}
	return m;
}
void PhanSo::Xuat()
{
	int k = UCLN(Tu, Mau);
	Tu /= k;
	Mau /= k;
	if (Mau == 0)
	{
		cout << "Phan so khong ton tai!\n";
		return;
	}
	else if (Mau == 1)
	{
		cout << Tu << endl;
		return;
	}
	else if (Mau == -1)
	{
		cout << -Tu << endl;
		return;
	}
	else if (Mau != -1 && Mau < 0)
	{
		Tu = -Tu;
		Mau = -Mau;
	}
	else
		if (Tu == 0)
		{
			cout << "0" << endl;
			return;
		}
	cout << Tu << "/" << Mau << endl;
}
PhanSo PhanSo::Cong(PhanSo c)
{
	PhanSo a;
	a.Tu = Tu * c.Mau + Mau * c.Tu;
	a.Mau = Mau * c.Mau;
	return a;
}

PhanSo PhanSo::Tru(PhanSo c)
{
	PhanSo a;
	a.Tu = Tu * c.Mau - Mau * c.Tu;
	a.Mau = Mau * c.Mau;
	return a;
}

PhanSo PhanSo::Nhan(PhanSo c)
{
	PhanSo a;
	a.Tu = Tu * c.Tu;
	a.Mau = Mau * c.Mau;
	return a;
}

PhanSo PhanSo::Chia(PhanSo c)
{
	PhanSo a;
	a.Tu = Tu * c.Mau;
	a.Mau = Mau * c.Tu;
	return a;
}
PhanSo::~PhanSo()
{}