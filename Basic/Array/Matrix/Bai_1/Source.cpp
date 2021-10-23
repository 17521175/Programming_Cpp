// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#define MAX 100
using namespace std;

int menu();
void Nhap(int a[][MAX], int &m, int &n);
void Xuat(int a[][MAX], int m, int n);
void Kiem_tra_mang(int a[][MAX], int m, int n);
void Tim_min(int a[][MAX], int m, int n);
void Tim_max(int a[][MAX], int m, int n);
void Tim_x(int a[][MAX], int m, int n, int &x);

int main()
{
	int a[MAX][MAX];
	int m, n, x;
	int choice;
	bool flag = true;
	while (flag != false)	
	{
		choice = menu();
		switch (choice)
		{
		case 1:
			Nhap(a, m, n);
			break;
		case 2:
			Xuat(a, m, n);
			break;
		case 3:
			Kiem_tra_mang(a, m, n);
			break;
		case 4:
			Tim_min(a, m, n);
			Tim_max(a, m, n);
			break;
		case 5:
			Tim_x(a, m, n, x);
			break;
		case 6:
			cout << "Xin chao.\n";
			flag = false;
			break;
		default:
			cout << "Lua chon khong dung, vui long nhap lai.\n";
		}
	}
	system("pause");
}
int menu()
{
	int choice;
	cout << "\n ======================================================";
	cout << "\n | Vui long chon cac chuc nang tuong ung              |";
	cout << "\n | 1. Nhap ma tran.                                   |";
	cout << "\n | 2. Xuat ma tran.                                   |";
	cout << "\n | 3. Kiem tra ma tran toan so nguyen to hay khong.   |";
	cout << "\n | 4. Tim phan tu va vi tri max min.                  |";
	cout << "\n | 5. Tim vi tri co gia tri X trong mang.             |";
	cout << "\n | 6. Thoat chuong trinh.                             |";
	cout << "\n ======================================================";
	cout << "\n Lua chon cua ban: ";
	cin >> choice;
	return choice;
}
void Nhap(int a[][MAX], int &m, int &n)
{
	do
	{
		cout << "Xin moi ban nhap m: ";
		cin >> m;
		if (m < 0 || m > 100)
		{
			cout << "Xin moi ban nhap lai. \n";
		}
	} while (m < 0 || m > 100);
	do
	{
		cout << "Xin moi ban nhap n: ";
		cin >> n;
		if (n < 0 || n > 100)
		{
			cout << "Xin moi ban nhap lai. \n";
		}
	} while (n < 0 || n>100);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap gia tri a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[][MAX], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "  " << a[i][j] << "  ";
		}
		cout << endl;
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
			return 0;
	}
	return 1;
}
void Kiem_tra_mang(int a[][MAX], int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Kiem_tra_so_nguyen_to(a[i][j]) == 1)
			{
				Dem = Dem + 1;
			}
		}
	}
	if (Dem == m*n)
	{
		cout << "Mang toan so nguyen to.\n";
	}
	else
	{
		cout << "Mang khong hoan toan la so nguyen to.\n";
	}
}
void Tim_min(int a[][MAX], int m, int n)
{
	cout << "Phan tu nho nhat trong ma tran la: ";
	int min = a[0][0];
	int iIndex = 0, jIndex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				iIndex = i;
				jIndex = j;
			}
		}
	}
	cout << min << endl;
	cout << "Vi tri min la: a[" << iIndex << "][" << jIndex << "]" << endl;;
}
void Tim_max(int a[][MAX], int m, int n)
{
	cout << "Phan tu lon nhat trong ma tran la: ";
	int max = a[0][0];
	int iIndex = 0, jIndex = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				iIndex = i;
				jIndex = j;
			}
		}
	}
	cout << max << endl;
	cout << "Vi tri max la: a[" << iIndex << "][" << jIndex << "]" << endl;
}
int Check_x(int a[][MAX], int m, int n, int x)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == x)
			{
				Dem = Dem + 1;
			}
		}
	}
	return Dem;
}
void Tim_x(int a[][MAX], int m, int n, int &x)
{
	cout << "Xin moi ban nhap gia tri X: ";
	cin >> x;
	int iIndex, jIndex;
	if (Check_x(a, m, n, x) == 0)
	{
		cout << "Khong co gia tri X trong mang.\n";

	}
	else 
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == x)
				{
					iIndex = i;
					jIndex = j;
					cout << "Vi tri co gia tri X la a[" << i << "][" << j << "]" << endl;
				}
			}
		}
	}
}