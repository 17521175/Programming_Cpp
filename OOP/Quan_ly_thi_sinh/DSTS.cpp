#include "DSTS.h"
#include "ThiSinh.h"

DSTS::DSTS()
{
	n = 0;
	a = new ThiSinh[n];
}
int DSTS::getn()
{
	return n;
}
void DSTS::setn(int newn)
{
	n = newn;
}
void DSTS::Input()
{
	cout << "Xin moi ban nhap so luong SV: ";
	cin >> n;
	a = new ThiSinh[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Xin moi ban nhap thong tin cua SV " << i + 1 << endl;
		a[i].Nhap();
		cout << endl;
	}
}
void DSTS::Output()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin cua SV " << i + 1 << ": " << endl;
		a[i].Xuat();
		cout << endl;
	}
}
void DSTS::TestThiSinh()
{
	for (int i = 0; i < n; i++)
	{
		float temp;
		temp = a[i].TongDiem();
		if (temp > 15)
		{
			a[i].Xuat();
			cout << endl;
		}
	}
}
DSTS::~DSTS()
{
	delete[]a;
}