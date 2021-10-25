#include "CN.h"
#include "Date.h"	

CN::CN()
{
	Hoten = "NULL";
	Songaylamviec = 0;
	Luongcoban = 0;
}
void CN::Nhap()
{
	cout << "Nhap Ho va Ten: ";
	cin.ignore();
	getline(cin, Hoten);
	Ngaysinh.Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> Songaylamviec;
	cout << "Nhap muc luong co ban: ";
	cin >> Luongcoban;
}
float CN::Salary()
{
	float S;
	S = Songaylamviec*Luongcoban;
	return S;
}
void CN::Xuat()
{
	cout << "Ho va Ten: " << Hoten << endl;
	cout << "Ngay sinh: ";
	Ngaysinh.Xuat();
	cout << "So ngay lam viec: " << Songaylamviec << endl;
	cout << "Luong co ban: " << Luongcoban << endl;
}
CN::~CN()
{}