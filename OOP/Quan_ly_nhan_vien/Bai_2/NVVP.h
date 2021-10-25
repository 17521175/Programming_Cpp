#pragma once
#include "NhanVien.h"
class NVVP :public NhanVien
{
private:
	float SoNLV;
	float Trocap;
	int LoaiNV;
public:
	NVVP();
	void Nhap();
	void Xuat();
	float TinhLuong();
	~NVVP();
};

