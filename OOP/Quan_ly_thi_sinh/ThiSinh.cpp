#include "ThiSinh.h"

ThiSinh::ThiSinh()
{
	MSSV = "NULL";
	Hoten = "NULL";
	Ngay = 1;
	Thang = 1;
	Nam = 1;
	Toan = 0;
	Anh = 0;
	Van = 0;
}
ThiSinh::ThiSinh(string tMSSV, string tHoten, int tNgay, int tThang, int tNam, float tToan, float tVan, float tAnh)
{
	tMSSV = MSSV;
	tHoten = Hoten;
	tNgay = Ngay;
	tThang = Thang;
	tNam = Nam;
	tToan = Toan;
	tAnh = Anh;
}
ThiSinh::ThiSinh(ThiSinh &X)
{
	MSSV = X.MSSV;
	Hoten = X.Hoten;
	Ngay = X.Ngay;
	Thang = X.Thang;
	Nam = X.Nam;
	Toan = X.Toan;
	Van = X.Van;
	Anh = X.Anh;
}
string ThiSinh::getMSSV()
{
	return MSSV;
}
string ThiSinh::getHoten()
{
	return Hoten;
}
int ThiSinh::getNgay() 
{
	return Ngay;
}
int ThiSinh::getThang()
{
	return Thang;
}
int ThiSinh::getNam()
{
	return Nam;
}
float ThiSinh::getToan()
{
	return Toan;
}
float ThiSinh::getVan()
{
	return Van;
}
float ThiSinh::getAnh()
{
	return Anh;
}
void ThiSinh::setMSSV(string newMSSV)
{
	MSSV = newMSSV;
}
void ThiSinh::setHoten(string newHoten)
{
	Hoten = newHoten;
}
void ThiSinh::setNgay(int newNgay)
{
	Ngay = newNgay;
}
void ThiSinh::setThang(int newThang)
{
	Thang = newThang;
}
void ThiSinh::setNam(int newNam)
{
	Nam = newNam;
}
void ThiSinh::setToan(float newToan)
{
	Toan = newToan;
}
void ThiSinh::setVan(float newVan)
{
	Van = newVan;
}
void ThiSinh::setAnh(float newAnh)
{
	Anh = newAnh;
}
void ThiSinh::Nhap()
{
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cout << "Nhap Ho va Ten: ";
	cin.ignore();
	getline(cin, Hoten);
	cout << "Nhap Ngay: ";
	cin >> Ngay;
	cout << "Nhap Thang: ";
	cin >> Thang;
	cout << "Nhap Nam: ";
	cin >> Nam;
	cout << "Nhap diem Toan: ";
	cin >> Toan;
	cout << "Nhap diem Van: ";
	cin >> Van;
	cout << "Nhap diem Anh: ";
	cin >> Anh;
}
void ThiSinh::Xuat()
{
	cout << "MSSV: " << MSSV << endl;
	cout << "Ho va Ten: " << Hoten << endl;
	cout << "Ngay thang nam sinh: " << Ngay << "/" << Thang << "/" << Nam << endl;
	cout << "Diem Toan, Van, Anh: " << Toan << ", " << Van << ", " << Anh << endl;
}
float ThiSinh::TongDiem()
{
	float T;
	T = Toan + Van + Anh;
	return T;
}
ThiSinh::~ThiSinh()
{}