#include "Date.h"

Date::Date()
{
	Ngay = 1;
	Thang = 1;
	Nam = 1;
}
Date::Date(int d, int m, int y)
{
	d = Ngay;
	m = Thang;
	y = Nam;
}
Date::Date(Date &x)
{
	Ngay = x.Ngay;
	Thang = x.Thang;
	Nam = x.Nam;
}
int Date::getNgay()
{
	return Ngay;
}
int Date::getThang()
{
	return Thang;
}
int Date::getNam()
{
	return Nam;
}
void Date::setNgay(int newNgay)
{
	Ngay = newNgay;
}
void Date::setThang(int newThang)
{
	Thang = newThang;
}
void Date::setNam(int newNam)
{
	Nam = newNam;
}
int Date::SoNgayTrongThang(int Thang, int Nam)
{
	int NumOfDays;
	if (Thang < 12)
	{
		switch (Thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			NumOfDays = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			NumOfDays = 30;
			break;
		case 2:
			if ((Nam % 4 == 0 && Nam % 100 != 0) || Nam % 400 == 0)
			{
				NumOfDays = 29;
			}
			else
			{
				NumOfDays = 28;
			}
			break;
		}

		return NumOfDays;
	}
	else
	{
		return 0;
	}
}
void Date::Nhap()
{
	cout << "Xin moi ban nhap ngay thang nam cua ban.\n";
	do
	{
		cout << "Moi ban nhap ngay: ";
		cin >> Ngay;
		cout << "Moi ban nhap thang: ";
		cin >> Thang;
		cout << "Moi ban nhap nam: ";
		cin >> Nam;
		if ((Ngay < 1 || Ngay > SoNgayTrongThang(Thang, Nam)) || (Thang < 1 || Thang > 12) || Nam < 0)
		{
			cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
		}
	} while ((Ngay < 1 || Ngay > SoNgayTrongThang(Thang, Nam)) || (Thang < 1 || Thang > 12) || Nam < 0);
}
void Date::Xuat()
{
	cout << "Ngay thang nam cua ban la: ";
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}
Date::~Date()
{}