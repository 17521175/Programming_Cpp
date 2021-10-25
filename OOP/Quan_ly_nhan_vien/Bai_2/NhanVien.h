#pragma once
#include <iostream>
#include <string>
using namespace std;
class NhanVien
{
protected:
	string Hoten;
	string Ngaysinh;
	float LuongCB;
	float Luong;
public:
	NhanVien();
	int LoaiNV;
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong() = 0;
	~NhanVien();
};

