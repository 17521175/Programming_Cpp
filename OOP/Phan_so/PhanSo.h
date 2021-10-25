#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int Tu;
	int Mau;
public:
	PhanSo();
	PhanSo(int t, int m);
	PhanSo(PhanSo &x);
	int getTu();
	int getMau();
	void setTu(int newTu);
	void setMau(int newMau);
	void Nhap();
	int UCLN(int m, int n);
	void Xuat();
	PhanSo Cong(PhanSo c);
	PhanSo Tru(PhanSo c);
	PhanSo Nhan(PhanSo c);
	PhanSo Chia(PhanSo c);
	~PhanSo();
};