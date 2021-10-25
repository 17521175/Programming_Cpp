#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	Thuc = 0;
	Ao = 0;
}
SoPhuc::SoPhuc(float t, float a)
{
	t = Thuc;
	a = Ao;
}
SoPhuc::SoPhuc(SoPhuc &x)
{
	Thuc = x.Thuc;
	Ao = x.Ao;
}
float SoPhuc::getThuc()
{
	return Thuc;
}
float SoPhuc::getAo()
{
	return Ao;
}
void SoPhuc::setThuc(float newThuc)
{
	Thuc = newThuc;
}
void SoPhuc::setAo(float newAo)
{
	Ao = newAo;
}
void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> Thuc;
	cout << "Nhap phan ao: ";
	cin >> Ao;
}
void SoPhuc::Xuat()
{
	cout << Thuc;
	if (Ao < 0)
	{
		cout << Ao << "i";
	}
	else
	{
		cout << "+" << Ao << "i";
	}
	cout << endl;
}
float SoPhuc::Modul()
{
	float x;
	x = sqrt(Thuc*Thuc + Ao*Ao);
	return x;
}
SoPhuc SoPhuc::Cong(SoPhuc c)
{
	SoPhuc a;
	a.Thuc = Thuc + c.Thuc;
	a.Ao = Ao + c.Ao;
	return a;
}
SoPhuc SoPhuc::Tru(SoPhuc c)
{
	SoPhuc a;
	a.Thuc = Thuc - c.Thuc;
	a.Ao = Ao - c.Ao;
	return a;
}
SoPhuc SoPhuc::Nhan(SoPhuc c)
{
	SoPhuc a;
	a.Thuc = Thuc*c.Thuc - Ao*c.Ao;
	a.Ao = Thuc*c.Ao + Ao*c.Thuc;
	return a;
}
SoPhuc SoPhuc::Chia(SoPhuc c)
{
	SoPhuc a;
	a.Thuc = (Thuc*c.Thuc + Ao*c.Ao) / (c.Thuc*c.Thuc + c.Ao*c.Ao);
	a.Ao = (Ao*c.Thuc - Thuc*c.Ao) / (c.Thuc*c.Thuc + c.Ao*c.Ao);
	return a;
}
SoPhuc::~SoPhuc()
{}