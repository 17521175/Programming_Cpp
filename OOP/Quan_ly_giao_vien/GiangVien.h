#pragma once
#include "NhanVien.h"

class GiangVien :public NhanVien
{
private:
	int Sotietday;
	int SodetaiKL;
public:
	GiangVien();
	int getSotietday();
	int getSodetaiKL();
	bool Xet_tuyen();
	void Nhap();
	void Xuat();
	~GiangVien();
};

