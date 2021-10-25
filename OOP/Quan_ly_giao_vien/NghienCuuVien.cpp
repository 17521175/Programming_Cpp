#include "NghienCuuVien.h"



NghienCuuVien::NghienCuuVien()
{
	SodetaiNC = 0;
	SobaibaoKH = 0;
	LoaiNV = 2;
}
int NghienCuuVien::getSodetaiNC()
{
	return SodetaiNC;
}
int NghienCuuVien::getSobaibaoKH()
{
	return SobaibaoKH;
}
bool NghienCuuVien::Xet_tuyen()
{
	if (SodetaiNC >= 1 && SobaibaoKH >= 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void NghienCuuVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so de tai nghien cuu: ";
	cin >> SodetaiNC;
	cout << "Nhap so bai bao khoa hoc: ";
	cin >> SobaibaoKH;
}
void NghienCuuVien::Xuat()
{
	NhanVien::Xuat();
	cout << "So de tai nghien cuu: " << SodetaiNC << endl;
	cout << "So bai bao khoa hoc: " << SobaibaoKH << endl;
}
NghienCuuVien::~NghienCuuVien()
{
}
