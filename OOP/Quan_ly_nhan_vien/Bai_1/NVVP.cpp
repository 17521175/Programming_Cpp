#include "NVVP.h"

NVVP::NVVP()
{
	SNLV = 0;
	LoaiNV = 1;
}
void NVVP::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SNLV;
}
float NVVP::TinhLuong()
{
	float Temp;
	Temp = SNLV * 100000;
	return Temp;
}
void NVVP::Xuat()
{
	Luong = TinhLuong();
	NhanVien::Xuat();
}
NVVP::~NVVP()
{}