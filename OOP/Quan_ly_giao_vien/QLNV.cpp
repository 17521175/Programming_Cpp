#include "QLNV.h"



QLNV::QLNV()
{
}
istream& operator>>(istream &is, QLNV &q)
{
	cout << "Nhap so luong nhan vien: ";
	is >> q.n;
	q.a = new NhanVien*[q.n];
	int flag;
	for (int i = 0; i < q.n; i++)
	{
		cout << "1.Nhap Giang vien.\n";
		cout << "2.Nhap Nghien cuu vien.\n";
		cout << "3.Nhap Nhan vien van phong.\n";
		cout << "Lua chon cua ban: ";
		cin >> flag;
		if (flag == 1)
		{
			q.a[i] = new GiangVien;
			q.a[i]->Nhap();
		}
		if (flag == 2)
		{
			q.a[i] = new NghienCuuVien;
			q.a[i]->Nhap();
		}
		if (flag == 3)
		{
			q.a[i] = new NVVP;
			q.a[i]->Nhap();
		}
	}
	return is;
}
ostream& operator<<(ostream &os, QLNV q)
{
	for (int i = 0; i < q.n; i++)
	{
		if (q.a[i]->LoaiNV == 1)
		{
			if (q.a[i]->Xet_tuyen() == true)
			{
				cout << "\tThong tin Giang Vien\t\n";
				q.a[i]->Xuat();
			}
		}
		if (q.a[i]->LoaiNV == 2)
		{
			if (q.a[i]->Xet_tuyen() == true)
			{
				cout << "\tThong tin Nghien cuu vien\t\n";
				q.a[i]->Xuat();
			}
		}
		if (q.a[i]->LoaiNV == 3)
		{
			if (q.a[i]->Xet_tuyen() == true)
			{
				cout << "\tThong tin NVVP\t\n";
				q.a[i]->Xuat();
			}
		}
	}
	return os;
}
QLNV::~QLNV()
{
}
