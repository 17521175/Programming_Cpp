#include "NVVP.h"



NVVP::NVVP()
{
	Solopboiduong = 0;
	Sogiothamgia = 0;
	LoaiNV = 3;
}
int NVVP::getSolopboiduong()
{
	return Solopboiduong;
}
int NVVP::getSogiothamgia()
{
	return Sogiothamgia;
}
bool NVVP::Xet_tuyen()
{
	if (Solopboiduong >= 1 && Sogiothamgia >= 20)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so lop boi duong: ";
	cin >> Solopboiduong;
	cout << "Nhap so gio tham gia: ";
	cin >> Sogiothamgia;
}
void NVVP::Xuat()
{
	NhanVien::Xuat();
	cout << "So lop boi duong: " << Solopboiduong << endl;
	cout << "So gio tham gia: " << Sogiothamgia << endl;
}
NVVP::~NVVP()
{
}
