#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string Hoten;
	string NgaySinh;
	float Luong;
public:
	int LoaiNV;
	NhanVien();
	void Nhap();
	void Xuat();
	~NhanVien();
};