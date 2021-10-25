#pragma once
#include "NhanVien.h"
class NVSX :public NhanVien
{
private:
	float SoSP;
	int LoaiNV;
public:
	NVSX();
	void Nhap();
	void Xuat();
	float TinhLuong();
	~NVSX();
};

