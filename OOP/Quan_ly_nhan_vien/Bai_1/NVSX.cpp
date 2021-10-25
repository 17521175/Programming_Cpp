#include "NVSX.h"

NVSX::NVSX()
{
	LuongCB = 0;
	SoSP = 0;
	LoaiNV = 2;
}
void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> LuongCB;
	cout << "Nhap so san pham: ";
	cin >> SoSP;
}
float NVSX::TinhLuong()
{
	float Temp;
	Temp = LuongCB + SoSP * 5000;
	return Temp;
}
void NVSX::Xuat()
{
	Luong = TinhLuong();
	NhanVien::Xuat();
}
NVSX::~NVSX()
{}