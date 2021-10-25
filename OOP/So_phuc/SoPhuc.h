#pragma once
#pragma once
#include <iostream>
#include <math.h> 
using namespace std;

class SoPhuc
{
private:
	float Thuc;
	float Ao;
public:
	SoPhuc();
	SoPhuc(float t, float a);
	SoPhuc(SoPhuc &x);
	float getThuc();
	float getAo();
	void setThuc(float  newThuc);
	void setAo(float newAo);
	void Nhap();
	void Xuat();
	float Modul();
	SoPhuc Cong(SoPhuc c);
	SoPhuc Tru(SoPhuc c);
	SoPhuc Nhan(SoPhuc c);
	SoPhuc Chia(SoPhuc c);
	~SoPhuc();
};