// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream> 
#define MAX 100
using namespace std;

struct PhanSo
{
	int TuSo;
	int MauSo;
};

void Nhap(PhanSo a[], int &n);
void Xuat(PhanSo a[], int n);
void Sum(PhanSo a[], int n);
void Max(PhanSo a[], int n);

int main()
{
	int n;
	PhanSo a[MAX];
	PhanSo S;
	Nhap(a, n);
	Xuat(a, n);
	Sum(a, n);
	Max(a, n);
	system("pause");
	return 0;
}

void Nhap(PhanSo a[], int &n)
{
	do
	{
		cout << "Xin moi ban nhap phan tu n: ";
		cin >> n;
		if (n < 0 || n > 100)
		{
			cout << "Nhap sai, Xin moi ban nhap lai.\n";
		}
	} while (n < 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cout << "Xin moi ban nhap phan so " << i + 1 << endl;
		cout << "Xin moi ban nhap tu so: ";
		cin >> a[i].TuSo;
		do 
		{
			cout << "Xin moi ban nhap mau so: ";
			cin >> a[i].MauSo;
			if (a[i].MauSo == 0)
			{
				cout << "Nhap sai, Xin moi ban nhap lai.\n";
			}
		} while (a[i].MauSo == 0);
	}
}
void Xuat(PhanSo a[], int n)
{
	cout << "------------------------------------------------" << endl;
	cout << "Nhung phan so ban da nhap la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i].TuSo << "/" << a[i].MauSo << " ";
	}
	cout << endl;
}
void Sum(PhanSo a[], int n)
{
	PhanSo S = a[0];
	for (int i = 1; i < n; i++)
	{
		S.TuSo = S.TuSo*a[i].MauSo + S.MauSo*a[i].TuSo;
		S.MauSo = S.MauSo*a[i].MauSo;
	}
	cout << "Tong cac phan so vua nhap la: ";
	cout << S.TuSo << "/" << S.MauSo << endl;
}
void Max(PhanSo a[], int n) 
{
	int c, b;
	PhanSo M = a[0];
	for (int i = 1; i<n; i++)
	{
		c = M.TuSo*a[i].MauSo;
		b = a[i].TuSo*M.MauSo;
		if (c < b)
		{
			M = a[i];
		}
	}
	cout << "Phan so lon nhat la: ";
	cout << M.TuSo << "/" << M.MauSo << endl;
}