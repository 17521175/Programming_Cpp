#pragma once
#include "NhanVien.h"

class NVVP :public NhanVien
{
private:
	float SNLV;
public:
	NVVP();
	void Nhap();
	void Xuat();
	float TinhLuong();
	~NVVP();
};