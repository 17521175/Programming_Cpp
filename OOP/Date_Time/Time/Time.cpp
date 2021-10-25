#include "Time.h"

Time::Time()
{
	Gio = 0;
	Phut = 0;
	Giay = 0;
}
Time::Time(int h, int m, int s)
{
	h = Gio;
	m = Phut;
	s = Giay;
}
Time::Time(Time &x)
{
	Gio = x.Gio;
	Phut = x.Phut;
	Giay = x.Giay;
}
int Time::getGio()
{
	return Gio;
}
int Time::getPhut()
{
	return Phut;
}
int Time::getGiay()
{
	return Giay;
}
void Time::setGio(int newGio)
{
	Gio = newGio;
}
void Time::setPhut(int newPhut)
{
	Phut = newPhut;
}
void Time::setGiay(int newGiay)
{
	Giay = newGiay;
}
void Time::Nhap()
{
	cout << "Xin moi ban nhap thoi gian cua ban.\n";
	do
	{
		cout << "Xin moi ban nhap gio: ";
		cin >> Gio;
		if (Gio < 0 || Gio > 12)
		{
			cout << "Gio khong hop le, xin moi ban nhap lai.\n";
		}
	} while (Gio < 0 || Gio > 12);
	do
	{
		cout << "Xin moi ban nhap phut: ";
		cin >> Phut;
		if (Phut < 0 || Phut>60)
		{
			cout << "So phut khong hop le, xin moi ban nhap lai.\n";
		}
	} while (Phut < 0 || Phut > 60);
	do
	{
		cout << "Xin moi ban nhap giay: ";
		cin >> Giay;
		if (Giay < 0 || Giay > 60)
		{
			cout << "So giay khong hop le, xin moi ban nhap lai.\n";
		}
	} while (Giay < 0 || Giay > 60);
}
void Time::Xuat()
{
	cout << "Thoi gian cua ban la: ";
	cout << Gio << ":" << Phut << ":" << Giay << endl;
}
Time::~Time()
{}