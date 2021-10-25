#include "QLDS.h"

QLDS::QLDS()
{
}
void QLDS::Nhap()
{
	cout << "Nhap so luong sach: ";
	cin >> n;
	a = new Sach *[n];
	int flag;
	for (int i = 0; i < n; i++)
	{
		cout << "=================================" << endl;
		cout << "| Chon loai sach ban muon nhap. |" << endl;
		cout << "| 1. Nhap sach giao khoa.       |" << endl;
		cout << "| 2. Nhap tieu thuyet.          |" << endl;
		cout << "=================================" << endl;
		cin >> flag;
		if (flag == 1)
		{
			a[i] = new SGK;
			((SGK *)a[i])->Nhap();
		}
		else if (flag == 2)
		{
			a[i] = new Tieuthuyet;
			((Tieuthuyet *)a[i])->Nhap();
		}
		else
		{
			cout << "Lua chon cua ban khong co trong danh sach, xin moi ban nhap lai!" << endl;
		}
	}
}
void QLDS::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]->Loaisach == 1)
		{
			((SGK *)a[i])->Xuat();
		}
		else if (a[i]->Loaisach == 2)
		{
			((Tieuthuyet *)a[i])->Xuat();
		}
		else{
			
		}
	}
}
QLDS::~QLDS()
{
}
