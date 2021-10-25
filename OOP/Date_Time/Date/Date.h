#pragma once
#include <iostream>
using namespace std;

class Date
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	Date();
	Date(int d, int m, int y);
	Date(Date &x);
	int getNgay();
	int getThang();
	int getNam();
	void setNgay(int newNgay);
	void setThang(int newThang);
	void setNam(int newNam);
	int SoNgayTrongThang(int Thang, int Nam);
	void Nhap();
	void Xuat();
	~Date();
};