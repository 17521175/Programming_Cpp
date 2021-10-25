#pragma once
#include "SGK.h"
#include "Tieuthuyet.h"

class QLDS
{
private:
	int n;
	Sach **a;
public:
	QLDS();
	int menu();
	void Nhap();
	void Xuat();
	~QLDS();
};

