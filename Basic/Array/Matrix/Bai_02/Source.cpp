// | Viết chương trình có menu kèm theo cho phép người dùng chọn các thao tác sau khi nhập một ma trận có kích thước m*n từ bàn phím  |
// | 1.Nhập ma trận m*n.                                                                                                              |
// | 2.Xuất ma trận.                                                                                                                  |
// | 3.In ra tất cả các số nguyên tố có trong ma trận vừa nhập.                                                                       |
// | 4.In ra tất cả các số chính phương có trong ma trận vừa nhập.                                                                    |
// | 5.Tìm phần tử lớn nhất/nhỏ nhất trong ma trận.                                                                                   |
// | 6.Tính tổng tất cả các số lẻ có trong ma trận.                                                                                   |
// | 7. In ra vị trí mà tại đó chứa số nguyên tố lớn nhất.                                                                            |
// | 8.Bấm để thoát khỏi chương trình.                                                                                                |
// ------------------------------------------------------------------------------------------------------------------------------------
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#define MAX 100
using namespace std;

int menu();
void Nhap_ma_tran(int a[][MAX], int &m, int &n);
void Xuat_ma_tran(int a[][MAX], int m, int n);
int Kiem_tra_so_nguyen_to(int x);
void So_nguyen_to(int a[][MAX], int m, int n);
int Kiem_tra_so_chinh_phuong(int x);
void So_chinh_phuong(int a[][MAX], int m, int n);
void Tim_min(int a[][MAX], int m, int n);
void Tim_max(int a[][MAX], int m, int n);
void Tong_cac_so_le(int a[][MAX], int m, int n);
void So_nguyen_to_lon_nhat(int a[][MAX], int m, int n);

int main()
{
	int a[MAX][MAX];
	int m, n;
	int choice;
	bool flag = true;
	while (flag != false) 
	{
		choice = menu();
		switch (choice)
		{
		case 1: 
			Nhap_ma_tran(a, m, n); 
			break;
		case 2: 
			Xuat_ma_tran(a, m, n); 
			break;
		case 3: 
			So_nguyen_to(a, m, n); 
			break;
		case 4: 
			So_chinh_phuong(a, m, n); 
			break;
		case 5: 
			Tim_min(a, m, n);
			Tim_max(a, m, n);
			break;
		case 6: 
			Tong_cac_so_le(a, m, n); 
			break;
		case 7: 
			So_nguyen_to_lon_nhat(a, m, n); 
			break;
		case 8:
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
	cout << "\n ========================================================";
	cout << "\n | Vui long chon cac chuc nang tuong ung.               |";
	cout << "\n | 1. Nhap ma tran.                                     |";
	cout << "\n | 2. Xuat ma tran.                                     |";
	cout << "\n | 3. In ra tat ca so nguyen to co trong ma tran.       |";
	cout << "\n | 4. In ra tat ca cac so chinh phuong co trong ma tran.|";
	cout << "\n | 5. Tim phan tu lon nhat/be nhat co trong ma tran.    |";
	cout << "\n | 6. Tinh tong cac so le co trong ma tran.             |";
	cout << "\n | 7. In ra vi tri ma tai do chua so nguyen to lon nhat.|";
	cout << "\n | 8. Thoat chuong trinh.                               |";
	cout << "\n ========================================================";
	cout << "\n Lua chon cua ban: ";
	cin >> choice;
	return choice;
}
void Nhap_ma_tran(int a[][MAX], int &m, int &n)
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
void Xuat_ma_tran(int a[][MAX], int m, int n)
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
void So_nguyen_to(int a[][MAX], int m, int n)
{
	cout << "Cac so nguyen to co trong ma tran la: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Kiem_tra_so_nguyen_to(a[i][j]) == 1)
			{
				cout << a[i][j] << "  ";
			}
		}
		cout << endl;
	}
}
int Kiem_tra_so_chinh_phuong(int x)
{
	int i = 0;
	while (i*i < x)
	{
		i++;
	}
	if (i*i == x) {
		return 1;
	}
	return 0;
}
void So_chinh_phuong(int a[][MAX], int m, int n)
{
	cout << "Cac so chinh phuong co trong ma tran la: \n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Kiem_tra_so_chinh_phuong(a[i][j]) == 1)
			{
				cout << a[i][j] << "  ";
			}
		}
		cout << endl;
	}
}
void Tim_min(int a[][MAX], int m, int n)
{
	cout << "Phan tu nho nhat trong ma tran la: ";
	int min = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}
	cout << min << endl;
}
void Tim_max(int a[][MAX], int m, int n)
{
	cout << "Phan tu lon nhat trong ma tran la: ";
	int max = a[0][0];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	cout << max << endl;
}
void Tong_cac_so_le(int a[][MAX], int m, int n)
{
	cout << "Tong cac so le co trong mang la: \n";
	int S = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				S = S + a[i][j];
			}
		}
	}
	cout << S << endl;
}
void So_nguyen_to_lon_nhat(int a[][MAX], int m, int n)
{
	cout << "So nguyen to lon nhat trong mang la: \n";
	int SNTdautien;
	int mIndex, nIndex;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Kiem_tra_so_nguyen_to(a[i][j]) == 1)
			{
				SNTdautien = a[i][j];
				mIndex = i;
				nIndex = j;
			}
		}
	}
	for (int i = mIndex; i < m; i++)
	{
		for (int j = nIndex; j < n; j++)
		{
			if (Kiem_tra_so_nguyen_to(a[i][j] == 1) && a[i][j] > SNTdautien)
			{
				mIndex = i;
				nIndex = j;
			}
		}
	}
	cout << "Co vi tri la a[" << mIndex << "][" << nIndex << "]" << endl;
}