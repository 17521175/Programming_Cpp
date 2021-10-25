#pragma once
#include "NhanVien.h"

class NghienCuuVien :public NhanVien
{
private:
	int SodetaiNC;
	int SobaibaoKH;
public:
	NghienCuuVien();
	int getSodetaiNC();
	int getSobaibaoKH();
	bool Xet_tuyen();
	void Nhap();
	void Xuat();
	~NghienCuuVien();
};

