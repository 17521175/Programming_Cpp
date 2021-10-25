#include "DSNV.h"

void DSNV::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> n;
	a = new NhanVien*[n];
	int flag;
	for (int i = 0; i < n; i++)
	{
		cout << "Chon 1 de nhap NVVP 2 de nhap NVSX.\n";
		cin >> flag;
		if (flag == 1)
		{
			a[i] = new NVVP;
			((NVVP*)a[i])->Nhap();
		}
		else
		{
			a[i] = new NVSX;
			((NVSX*)a[i])->Nhap();
		}
	}
}
void DSNV::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]->LoaiNV == 1)
		{
			((NVVP*)a[i])->Xuat();
		}
		else
		{
			((NVSX*)a[i])->Xuat();
		}
	}
}