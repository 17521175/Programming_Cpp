#include "DSCN.h"
#include "CN.h"

DSCN::DSCN()
{
	n = 0;
	a = new CN[n];
}
void DSCN::Nhap()
{
	cout << "Xin moi ban nhap so luong CN: ";
	cin >> n;
	a = new CN[n];
	for (int i = 0; i < n; i++) 
	{
		cout << "Xin moi ban nhap thong tin cua CN " << i + 1 << endl;
		a[i].Nhap();
		cout << endl;
	}
}
void DSCN::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Thong tin cua CN " << i + 1 << endl;
		a[i].Xuat();
		cout << endl;
	}
}
float DSCN::Max()
{
	float flag = 0;
	for (int i = 0; i < n; i++)
		if (flag < a[i].Salary())
		{
			flag = a[i].Salary();
		}
	return flag;
}
void DSCN::XuatMax()
{
	cout << "Cong nhan co luong cao nhat la. \n";
	for (int i = 0; i < n; ++i)
		if (a[i].Salary() == Max())
		{
			a[i].Xuat();
		}
	cout << endl;
}
DSCN::~DSCN()
{
	delete[]a;
}