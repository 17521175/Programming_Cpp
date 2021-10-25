#pragma once
#include "NVQL.h"
#include "NVSX.h"
#include "NVVP.h"
class QLNV
{
private:
	int n;
	NhanVien **a;
public:
	QLNV();
	void Nhap();
	void Xuat();
	void TongLuongCty();
	~QLNV();
};

