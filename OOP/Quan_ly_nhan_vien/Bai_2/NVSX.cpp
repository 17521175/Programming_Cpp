#include "NVSX.h"



NVSX::NVSX()
{
	SoSP = 0;
	LoaiNV = 2;
}
void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so san pham: ";
	cin >> SoSP;
}
float NVSX::TinhLuong()
{
	float Temp;
	Temp = LuongCB + SoSP * 2000;
	return Temp;
}
void NVSX::Xuat()
{
	Luong = TinhLuong();
	NhanVien::Xuat();
}
NVSX::~NVSX()
{
}
