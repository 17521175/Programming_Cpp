#include "NhanVien.h"



NhanVien::NhanVien()
{
	MaNV = "Null";
	Hoten = "Null";
	LoaiNV = 0;
}
void NhanVien::Nhap()
{
	cout << "Xin moi ban nhap ma nhan vien: ";
	cin.ignore();
	getline(cin, MaNV);
	cout << "Xin moi ban ban nhap ho ten nhan vien: ";
	getline(cin, Hoten);
	cout << "Xin moi ban nhap ngay thang nam sinh " << endl;
	NgaySinh.Nhap();
}
void NhanVien::Xuat()
{
	cout << "Ma nhan vien: " << MaNV << endl;
	cout << "Ho ten nhan vien: " << Hoten << endl;;
	cout << "Ngay thang nam sinh: ";
	NgaySinh.Xuat();
}
NhanVien::~NhanVien()
{
}
