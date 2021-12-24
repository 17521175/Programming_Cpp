// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#define MAX 100
using namespace std;

void Nhap_mang(int a[], int &n);
void Xuat_mang(int a[], int n);
void Mang_doi_xung(int a[], int n);
void Max(int a[], int n);
void min(int a[], int n);
void Tang_dan(int a[], int n);
void Giam_dan(int a[], int n);
void So_nguyen_to_lon_nhat(int a[], int n);

int main()
{
	int a[MAX], n;
	Nhap_mang(a, n);
	cout << "-------------------------------------------" << endl;
	cout << "Mang vua nhap: ";
	Xuat_mang(a, n);
	Mang_doi_xung(a, n);
	Max(a, n);
	min(a, n);
	Tang_dan(a, n);
	cout << "Mang tang dan: ";
	Xuat_mang(a, n);
	Giam_dan(a, n);
	cout << "Mang giam dan: ";
	Xuat_mang(a, n);
	So_nguyen_to_lon_nhat(a, n);
	system("pause");
	return 0;
}
void Nhap_mang(int a[], int &n)
{
	do
	{
		cout << "Xin moi ban nhap phan tu n: ";
		cin >> n;
		if (n < 0 || n > 100)
		{
			cout << "Nhap sai, Xin moi nhap lai.\n";
		}
	} while (n < 0 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

}
int KT_mang_doi_xung(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[n - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
void Mang_doi_xung(int a[], int n)
{
	if (KT_mang_doi_xung(a, n) == 0)
	{
		cout << "Mang khong doi xung.\n";
	}
	else
	{
		cout << "Mang doi xung.\n";
	}
}
void Max(int a[], int n)
{
	int Max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > Max)
		{
			Max = a[i];
		}
	}
	cout << "Gia tri lon nhat cua mang la: " << Max << endl;
}
void min(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "Gia tri nho nhat trong mang la: " << min << endl;
}
void Tang_dan(int a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void Giam_dan(int a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int Kiem_tra_so_nguyen_to(int x)
{
	if (x < 2)
	{
		return 0;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void So_nguyen_to_lon_nhat(int a[], int n)
{
	int Max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (Kiem_tra_so_nguyen_to(a[i]) == 1 && a[i] > Max)
		{
			Max = a[i];
		}
	}
	cout << "So nguyen to lon nhat trong mang la: " << Max << endl;
}