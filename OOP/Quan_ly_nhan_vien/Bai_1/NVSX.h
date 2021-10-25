#pragma once
#include "NhanVien.h"

class NVSX :public NhanVien
{
private:
	float LuongCB;
	float SoSP;
	int loaiNV;
public:
	NVSX();
	void Nhap();
	void Xuat();
	float TinhLuong();
	~NVSX();
};