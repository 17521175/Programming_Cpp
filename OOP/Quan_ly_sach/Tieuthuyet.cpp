#include "Tieuthuyet.h"



Tieuthuyet::Tieuthuyet()
{
	Loaisach = 2;
}
void Tieuthuyet::Nhap()
{
	Sach::Nhap();
}
void Tieuthuyet::Xuat()
{
	cout << "--------------------------------------------------" << endl;
	Sach::Xuat();
}
Tieuthuyet::~Tieuthuyet()
{
}
