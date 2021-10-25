#pragma once
#include "NhanVien.h"

class NVVP :public NhanVien
{
private:
	int Solopboiduong;
	int Sogiothamgia;
public:
	NVVP();
	int getSolopboiduong();
	int getSogiothamgia();
	bool Xet_tuyen();
	void Nhap();
	void Xuat();
	~NVVP();
};

