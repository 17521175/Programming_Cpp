#include "GiangVien.h"



GiangVien::GiangVien()
{
	Sotietday = 0;
	SodetaiKL = 0;
	LoaiNV = 1;
}
int GiangVien::getSotietday()
{
	return Sotietday;
}
int GiangVien::getSodetaiKL()
{
	return SodetaiKL;
}
bool GiangVien::Xet_tuyen()
{
	if (Sotietday >= 300 && SodetaiKL >= 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void GiangVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so tiet day: ";
	cin >> Sotietday;
	cout << "Nhap so de tai khoa luan: ";
	cin >> SodetaiKL;
}
void GiangVien::Xuat()
{
	NhanVien::Xuat();
	cout << "So tiet day: " << Sotietday << endl;
	cout << "So de tai khoa luan: " << SodetaiKL << endl;
}
GiangVien::~GiangVien()
{
}
