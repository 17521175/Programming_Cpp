#pragma once
#include "Date.h"
#include <string>

class CN
{
private:
	string Hoten;
	Date Ngaysinh;
	int Songaylamviec;
	float Luongcoban;
public:
	CN();
	void Nhap();
	void Xuat();
	float Salary();
	~CN();
};