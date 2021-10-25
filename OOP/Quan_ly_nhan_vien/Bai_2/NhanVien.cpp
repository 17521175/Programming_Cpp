#include "NhanVien.h"



NhanVien::NhanVien()
{
	Hoten = "Null";
	Ngaysinh = "Null";
	Luong = 0;
}
void NhanVien::Nhap()
{
	cout << "Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, Hoten);
	cout << "Nhap ngay thang nam sinh: ";
	getline(cin, Ngaysinh);
	cout << "Nhap luong co ban: ";
	cin >> LuongCB;
}
void NhanVien::Xuat()
{
	cout << "Thong tin nhan vien. " << endl;
	cout << "Ho va Ten: " << Hoten << endl;
	cout << "Ngay thang nam sinh: " << Ngaysinh << endl;
	cout << "Luong: " << Luong << endl;
}
NhanVien::~NhanVien()
{
}
