#include "NVQL.h"



NVQL::NVQL()
{
	Hesochucvu = 0;
	Thuong = 0;
	LoaiNV = 3;
}
void NVQL::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> Hesochucvu;
	cout << "Nhap muc thuong: ";
	cin >> Thuong;
}
float NVQL::TinhLuong()
{
	float Temp;
	Temp = LuongCB*Hesochucvu + Thuong;
	return Temp;
}void NVQL::Xuat()
{
	Luong = TinhLuong();
	NhanVien::Xuat();
}
NVQL::~NVQL()
{
}
