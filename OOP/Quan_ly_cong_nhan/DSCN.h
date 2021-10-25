#pragma once
#include "CN.h"

class DSCN
{
private:
	int n;
	CN *a;
public:
	DSCN();
	void Nhap();
	void Xuat();
	float Max();
	void XuatMax();
	~DSCN();
};