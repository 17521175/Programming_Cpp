#pragma once
#include "NhanVien.h"
class NVQL :public NhanVien
{
private:
	float Hesochucvu;
	float Thuong;
	int LoaiNV;
public:
	NVQL();
	void Nhap();
	void Xuat();
	float TinhLuong();
	~NVQL();
};

