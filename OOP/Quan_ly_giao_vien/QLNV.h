#pragma once
#include "GiangVien.h"
#include "NghienCuuVien.h"
#include "NVVP.h"

class QLNV
{
private:
	int n;
	NhanVien **a;
public:
	QLNV();
	friend istream& operator>>(istream &is, QLNV &q);
	friend ostream& operator<<(ostream &os, QLNV q);
	~QLNV();
};

