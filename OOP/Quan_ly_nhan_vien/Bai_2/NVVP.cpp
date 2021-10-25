#include "NVVP.h"



NVVP::NVVP()
{
	SoNLV = 0;
	Trocap = 0;
	LoaiNV = 1;
}
void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNLV;
	cout << "Nhap muc tro cap: ";
	cin >> Trocap;
}
float NVVP::TinhLuong()
{
	float Temp;
	Temp = LuongCB + SoNLV * 200000 + Trocap;
	return Temp;
}
void NVVP::Xuat()
{
	Luong = TinhLuong();
	NhanVien::Xuat();
}
NVVP::~NVVP()
{
}
