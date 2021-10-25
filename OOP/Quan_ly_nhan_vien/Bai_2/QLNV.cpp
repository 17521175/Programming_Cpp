#include "QLNV.h"



QLNV::QLNV()
{
}
void QLNV::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	a = new NhanVien*[n];
	int flag;
	for (int i = 0; i < n; i++)
	{
		cout << "1.Nhap nhan vien van phong.\n";
		cout << "2.Nhap nhan vien san xuat.\n";
		cout << "3.Nhap nhan vien quan ly.\n";
		cout << "Lua chon cua ban: ";
		cin >> flag;
		if (flag == 1)
		{
			a[i] = new NVVP;
			a[i]->Nhap();
		}
		if (flag == 2)
		{
			a[i] = new NVSX;
			a[i]->Nhap();
		}
		if (flag == 3)
		{
			a[i] = new NVQL;
			a[i]->Nhap();
		}
	}
}
void QLNV::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		a[i]->Xuat();
	}
}
void QLNV::TongLuongCty()
{
	int Tong = 0;
	for (int i = 0; i < n; i++)
	{
		Tong = Tong + a[i]->TinhLuong();
	}
	cout << Tong;
}
QLNV::~QLNV()
{
}
