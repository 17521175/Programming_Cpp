#include <iostream>
#define MAX 100
using namespace std;

int menu();
void Nhap(int a[][MAX], int &m, int &n);
void Xuat(int a[][MAX], int m, int n);
void KT_mang(int a[][MAX], int m, int n);
void Tim_min(int a[][MAX], int m, int n);
void Tim_Max(int a[][MAX], int m, int n);
void Tim_X(int a[][MAX], int m, int n, int &x);

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
			KT_mang(a, m, n);
			break;
		case 4:
			Tim_min(a, m, n);
			Tim_Max(a, m, n);
			break;
		case 5:
			Tim_X(a, m, n, x);
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
int KT_SNT(int x)
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
void KT_mang(int a[][MAX], int m, int n)
{
	int Dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (KT_SNT(a[i][j]) == 1)
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
	cout << "Phan tu nho nhat trong ma tran la: \n";
	int min = a[0][0];
	int VT_i = 0, VT_j = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				VT_i = i;
				VT_j = j;
			}
		}
	}
	cout << min << endl;
	cout << "VT min la: a[" << VT_i << "][" << VT_j << "]" << endl;;
}
void Tim_Max(int a[][MAX], int m, int n)
{
	cout << "Phan tu lon nhat trong ma tran la: \n";
	int max = a[0][0];
	int VT_i = 0, VT_j = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				VT_i = i;
				VT_j = j;
			}
		}
	}
	cout << max << endl;
	cout << "VT max la: a[" << VT_i << "][" << VT_j << "]" << endl;
}
int KT_X(int a[][MAX], int m, int n, int x)
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
void Tim_X(int a[][MAX], int m, int n, int &x)
{
	cout << "Xin moi ban nhap gia tri X: ";
	cin >> x;
	int VT_i, VT_j;
	if (KT_X(a, m, n, x) == 0)
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
					VT_i = i;
					VT_j = j;
					cout << "Vi tri co gia tri X la a[" << i << "][" << j << "]" << endl;
				}
			}
		}
	}
}