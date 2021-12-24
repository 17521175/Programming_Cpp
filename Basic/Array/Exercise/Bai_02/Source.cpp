// | Viết chương trình có menu kèo theo với các thao tác trên mảng 1 chiều có kích thước m với các menu lựa chọn như sau:   |
// | 1. Nhập mảng 1 chiều kích thước m(nguyên dương từ bàn phím và xuất ra.                                                 |
// | 2. Mảng m phần tử tự động tại các phần tử và in ra.                                                                    |
// | 3. Liệt kê tất cả số nguyên tố có trong mảng.                                                                          |
// | 4. Tìm vị trí và giá trị lớn nhất trong mảng.                                                                          |
// | 5. Sắp xếp mảng theo chiều tăng dần.                                                                                   |
// | 6. In ra các phần tử lẻ trong mảng.                                                                                    |
// | 7. Thoát cương trình.                                                                                                  |
// --------------------------------------------------------------------------------------------------------------------------
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#include <stdlib.h>
#define MAX 100
using namespace std;

int menu();
void Nhap_mang(int a[], int &m);
void Xuat_mang(int a[], int m);
void Nhap_mang_Random(int a[], int &m);
void So_nguyen_to(int a[], int m);
void Tim_max(int a[], int m);
void Sap_xep_tang_dan(int a[], int m);
void Xuat_phan_tu_le(int a[], int m);

int main() 
{
	int a[MAX];
	int m;
	int choice;
	bool flag = true;
	while (flag != false) {
		choice = menu();
		switch (choice)
		{
		case 1:
			Nhap_mang(a, m);
			Xuat_mang(a, m);
			break;
		case 2:
			Nhap_mang_random(a, m);
			Xuat_mang(a, m);
			break;
		case 3:
			So_nguyen_to(a, m);
			break;
		case 4:
			Tim_max(a, m);
			break;
		case 5:
			Sap_xep_tang_dan(a, m);
			Xuat_mang(a, m);
			break;
		case 6:
			Xuat_phan_tu_le(a, m);
			break;
		case 7:
			cout << "Xin chao.\n";
			flag = false;
			break;
		default:
			cout << "Lua chon khong dung, vui long nhap lai.\n";
		}
	}
	system("pause");
	return 0;
}
int menu()
{
	int choice;
	cout << "\n ============================================================================";
	cout << "\n * Vui long chon chuc nang tuong ung:                                       *";
	cout << "\n * 1. Nhap mang 1 chieu kich thuoc m (nguyen duong) tu ban phim va xuat ra. *";
	cout << "\n * 2. Mang m phan tu tu dong tao cac phan tu va in ra.                      *";
	cout << "\n * 3. Liet ke tat ca so nguyen to co trong mang.                            *";
	cout << "\n * 4. Tim vi tri va gia tri lon nhat trong mang.                            *";
	cout << "\n * 5. Sap xep mang theo chieu tang dan.                                     *";
	cout << "\n * 6. In ra cac phan tu le trong mang.                                      *";
	cout << "\n * 7. Thoat chuong trinh.                                                   *";
	cout << "\n ============================================================================";
	cout << "\n Lua chon cua ban: ";
	cin >> choice;
	return choice;
}
void Nhap_mang(int a[], int &m)
{
	do
	{
		cout << "Xin moi ban nhap phan tu m: ";
		cin >> m;
		if (m < 0 || m > 100)
		{
			cout << "Nhap sai, Xin moi ban nhap lai. \n";
		}
	} while (m < 0 || m > 100);
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang(int a[], int m)
{
	for (int i = 0; i < m; i++)
	{
		cout << a[i] << "\t";
	}
}
void Nhap_mang_random(int a[], int &m)
{
	do
	{
		cout << "Xin moi ban nhap phan tu m: ";
		cin >> m;
		if (m < 0 || m > 100)
		{
			cout << "Nhap sai, Xin moi ban nhap lai. \n";
		}
	} while (m < 0 || m > 100);
	for (int i = 0; i < m; i++)
	{
		a[i] = rand() % 100;
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
void So_nguyen_to(int a[], int m)
{
	for (int i = 0; i < m; i++)
	{
		if (Kiem_tra_so_nguyen_to(a[i]) == 1)
		{
			cout << a[i] << "\t";
		}
	}
}
void Tim_max(int a[], int m)
{
	int maxIndex, maxValue;
	int firstIndex = 0;
	for (int i = 0; i < m; i++)
	{
		if (a[i] > a[firstIndex])
		{
			maxIndex = i;
			maxValue = a[i];
		}
	}
	cout << "Vi tri lon nhat trong mang la a[" << maxIndex << "].\n";
	cout << "Gia tri lon nhat trong mang la " << maxValue << endl;
}
void Sap_xep_tang_dan(int a[], int m)
{
	int temp;
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
		{
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
}
void Xuat_phan_tu_le(int a[], int m)
{
	cout << "Cac phan tu le trong mang la: ";
	for (int i = 0; i < m; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "  ";
		}
	}
	cout << endl;
}