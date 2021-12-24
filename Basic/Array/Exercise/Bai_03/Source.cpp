// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#define MAX 100
using namespace std;

int menu();
void Nhap_Mang(int a[], int &n);
void Xuat_Mang(int a[], int n);
void Tim_GT_x(int a[], int n, int &x);
void In_phan_tu_am(int a[], int n);
void In_phan_tu_le(int a[], int n);
void In_phan_tu_chan(int a[], int n);
void VT_x_cuoi_cung(int a[], int n, int x);
void VT_SNT_dau_tien(int a[], int n);
void Min(int a[], int n);
void Max(int a[], int n);
void Min_Duong(int a[], int n);
void Max_Duong(int a[], int n);
void VT_Min(int a[], int n);
void VT_Max(int a[], int n);
void Sap_xep_giam_dan(int a[], int n);
void Sap_xep_so_chan_giam_dan(int a[], int n);
void KQ_KT_mang_toan_le(int a[], int n);
void KQ_KT_mang_toan_chan(int a[], int n);
void KQ_KT_mang_toan_SNT(int a[], int n);
void KT_mang_tang_dan(int a[], int n);
void KT_mang_giam_dan(int a[], int n);
void KQ_KT_mang_doi_xung(int a[], int n);
void Dem_phan_tu(int a[], int n);
void Tong_SNT(int a[], int n);
void Tong_chan(int a[], int n);
void Tong_le(int a[], int n);
void Tong_VT_chan(int a[], int n);

int main() 
{
	int a[MAX], n, x;
	int choice;
	bool flag = true;
	while (flag != false) {
		choice = menu();
		switch (choice)
		{
		case 1:
			Nhap_Mang(a, n);
			break;
		case 2:
			Tim_GT_x(a, n, x);
			break;
		case 3:
			In_phan_tu_am(a, n);
			break;
		case 4:
			In_phan_tu_le(a, n);
			break;
		case 5:
			In_phan_tu_chan(a, n);
			break;
		case 6:
			VT_x_cuoi_cung(a, n, x);
			break;
		case 7:
			VT_SNT_dau_tien(a, n);
			break;
		case 8:
			Min(a, n);
			break;
		case 9:
			Max(a, n);
			break;
		case 10:
			Min_Duong(a, n);
			Max_Duong(a, n);
			break;
		case 11:
			VT_x_cuoi_cung(a, n, x);
			break;
		case 12:
			VT_Min(a, n);
			break;
		case 13:
			VT_Max(a, n);
			break;
		case 15:
			Sap_xep_giam_dan(a, n);
			Xuat_Mang(a, n);
			break;
		case 16:
			Sap_xep_so_chan_giam_dan(a, n);
			Xuat_Mang(a, n);
			break;
		case 32:
			KQ_KT_mang_toan_chan(a, n);
			KQ_KT_mang_toan_le(a, n);
			break;
		case 33:
			KQ_KT_mang_toan_SNT(a, n);
			break;
		case 34:
			KT_mang_tang_dan(a, n);
			KT_mang_giam_dan(a, n);
			break;
		case 35:
			KQ_KT_mang_doi_xung(a, n);
			break;
		case 38:
			Dem_phan_tu(a, n);
			break;
		case 39:
			Tong_SNT(a, n);
			break;
		case 40:
			Tong_chan(a, n);
			Tong_le(a, n);
			break;
		case 41:
			Tong_VT_chan(a, n);
			break;
		case 53:
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
	cout << "\n __________________________________________Cac thao tac nhap xuat_______________________________________________________";
	cout << "\n  1. Nhap mang so nguyen a co n phan tu ";
	cout << "\n  2. Tim gia tri x trong mang so nguyen ";
	cout << "\n  3. In ra phan tu am trong mang ";
	cout << "\n  4. In ra cac phan tu co gia tri le cua mang ";
	cout << "\n  5. In ra cac phan tu co gia tri chan va nho hon 20 ";
	cout << "\n ___________________________________________Cac thao tac tim kiem_______________________________________________________";
	cout << "\n  6. Vi tri cuoi cung cua phan tu x trong mang ";
	cout << "\n  7. Vi tri so nguyen to dau tien trong mang ";
	cout << "\n  8. Tim so nho nhat trong mang ";
	cout << "\n  9. Tim so lon nhat trong mang ";
	cout << "\n  10. Tim so duong nho nhat/lon nhat trong mang ";
	cout << "\n  11. Tim vi tri cua phan tu co gia tri x xuat hien cuoi cung trong mang ";
	cout << "\n  12. Tim vi tri cua phan tu nho nhat trong mang ";
	cout << "\n  13. Tim vi tri cua phan tu lon nhat trong mang ";
	cout << "\n  14. Tim phan tu xuat hien nhieu nhat trong mang ";
	cout << "\n ___________________________________________Cac thao tac sap xep________________________________________________________";
	cout << "\n  15. Sap xep mang theo thu tu giam dan ";
	cout << "\n  16. Sap xep cac phan tu chan giam dan ";
	cout << "\n  17. Sap xep cac phan tu am duong trong mang ";
	cout << "\n  18. Sap xep mang sao cho cac so duong dung dau giam dan, ke den la so am tang dan cuoi cung la so 0 ";
	cout << "\n ___________________________________________Cac thao tac them/xoa/sua___________________________________________________";
	cout << "\n  19. Xoa phan tu le tai vi tri trong mang ";
	cout << "\n  20. Xoa phan tu co gia tri lon nhat trong mang ";
	cout << "\n  21. Xoa tat ca phan tu nho hon X ";
	cout << "\n  22. Xoa phan tu co gia tri gan X nhat ";
	cout << "\n  23. Chen X vao vi tri dau cua mang 1 chieu ";
	cout << "\n  24. Chen X vao phia sau phan tu co gia tri lon nhat trong mang ";
	cout << "\n  25. Chen phan tu X vao tat ca cac phan tu chan trong mang ";
	cout << "\n  26. Them so 0 dang sau cac so nguyen to trong mang ";
	cout << "\n  27. Xoa tat ca cac so nguyen to trong mang ";
	cout << "\n  28. Sua tat ca cac so nguyen to trong mang thanh 0 ";
	cout << "\n  29. Xoa tat ca cac phan tu co gia tri am ";
	cout << "\n  30. Xoa phan tu trung voi X trong mang ";
	cout << "\n  31. Chen X vao day sao cho day van co thu tu tang dan ";	
	cout << "\n ___________________________________________Cac thao tac kiem tra_______________________________________________________";
	cout << "\n  32. Mang co phai la mang toan chan/toan le ";
	cout << "\n  33. Mang co phai la mang toan so nguyen to ";
	cout << "\n  34. Mang co phai la mang tang dan/giam dan ";
	cout << "\n  35. Kiem tra mang doi xung ";
	cout << "\n  36. Kiem tra day A co phai con cua day B khong? ";
	cout << "\n  37. Kiem tra mang co thu tu tang hay khong? ";
	cout << "\n ___________________________________________Cac thao tac tinh toan______________________________________________________";
	cout << "\n  38. Dem cac phan tu trong mang co gia tri chia het cho 2 nhung ko chia het cho 4 ";
	cout << "\n  39. Tinh tong cac so nguyen to trong mang ";
	cout << "\n  40. Tinh tong cac so chan/le trong mang ";
	cout << "\n  41. Tinh tong cac phan tu o vi tri chan trong mang 1 chieu ";
	cout << "\n  42. Tinh tong cac phan tu cuc dai trong mang so nguyen ";
	cout << "\n  43. Tinh tong cac phan tu cuc tieu trong mang ";
	cout << "\n  44. Tinh tong cac phan tu xung quanh trong mang ";
	cout << "\n ___________________________________________Cac thao tac xu ly__________________________________________________________";
	cout << "\n  45. Tach so nguyen to co trong mang a dua vao mang b ";
	cout << "\n  46. Tach mang a thanh 2 mang b (chua so nguyen duong) va c (chua cac so con lai) ";
	cout << "\n  47. Tach mot mang thanh 2 mang chan va le ";
	cout << "\n  48. Noi 2 mang so nguyen ";
	cout << "\n  49. Kiem tra phan tu mang 1 chieu khi nhap tu ban phim ";
	cout << "\n  50. Chi ra so hang lon thu k trong mang ";
	cout << "\n  51. Dao nguoc day so ";
	cout << "\n  52. Ham dem so luong mang con tang co trong mang so nguyen ";
	cout << "\n________________________________________________________________________________________________________________________";
	cout << "\n  53. Thoat chuong trinh ";
	cout << "\n________________________________________________________________________________________________________________________";
	cout << "\n  Lua chon cua ban la: ";
	cin >> choice;
	return choice;
}
void Nhap_Mang(int a[], int &n)
{
	do
	{
		cout << "Xin moi ban nhap phan tu n: ";
		cin >> n;
		if (n < 5 || n>100)
		{
			cout << "Nhap sai, Vui long nhap lai. \n";
		}
	} while (n < 5 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}
int KT_phan_tu_x(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return a[0] = x;
		}
	}
	return -1;
}
void Tim_GT_x(int a[], int n, int &x)
{
	cout << "Xin moi ban nhap gia tri x: ";
	cin >> x;
	cout << KT_phan_tu_x(a, n, x);
}
int KT_phan_tu_am(int x)
{
	if (x < 0)
		return 1;
	return 0;
}
void In_phan_tu_am(int a[], int n)
{
	cout << "Cac phan tu am trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (KT_phan_tu_am(a[i]) == 1)
		{
			cout << a[i] << "  ";
		}
	}
}
void In_phan_tu_le(int a[], int n)
{
	cout << "Cac phan tu le trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "  ";
		}
	}
}
void In_phan_tu_chan(int a[], int n)
{
	cout << "Cac phan tu chan trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] < 20)
		{
			cout << a[i] << "  ";
		}
	}
}
int Tim_VT_x_cuoi_cung(int a[], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void VT_x_cuoi_cung(int a[], int n, int x)
{
	cout << "Xin moi ban nhap gia tri x: ";
	cin >> x;
	cout << "Vi tri cuoi cung cua x la a[" << Tim_VT_x_cuoi_cung(a, n, x) << "]";
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
		{
			return 0;
		}
	}
	return 1;
}
void VT_SNT_dau_tien(int a[], int n)
{
	cout << "Vi tri so nguyen to dau tien la: ";
	for (int i = 0; i < n; i++)
	{
		if (KT_SNT(a[i]) == 1)
		{
			cout << "a[" << i << "]";
			break;
		}
	}
}
void Min(int a[], int n)
{
	int Min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < Min)
		{
			Min = a[i];
		}
	}
	cout << "So nho nhat trong mang la: " << Min << endl;
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
	cout << "So lon nhat trong mang la: " << Max << endl;
}
void Min_Duong(int a[], int n)
{
	int Min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < Min)
		{
			Min = a[i];
		}
	}
	cout << "So duong nho nhat la: " << Min << endl;
}
void Max_Duong(int a[], int n)
{
	int Max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] > Max)
		{
			Max = a[i];
		}
	}
	cout <<"So duong lon nhat la: "<< Max << endl;
}
void VT_Min(int a[], int n)
{
	int Min = a[0];
	int VTm = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < Min)
		{
			VTm = i;
		}
	}
	cout << "Vi tri phan tu nho nhat la: a[" << VTm << "]";
}
void VT_Max(int a[], int n)
{
	int Max = a[0];
	int VTM = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > Max)
		{
			VTM = i;
		}
	}
	cout << "Vi tri phan tu lon nhat la: a[" << VTM << "]";
}
void Sap_xep_giam_dan(int a[], int n)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
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
void Sap_xep_so_chan_giam_dan(int a[], int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j] && a[i] % 2 == 0 && a[j] % 2 == 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}
		}
	}
}
void Xoa_phan_tu(int a[], int &n, int x)
{
	for (int i =x=1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}
int KT_mang_toan_chan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != 0)
			return 0;
	}
	return 1;
}
void KQ_KT_mang_toan_chan(int a[], int n)
{
	if (KT_mang_toan_chan(a,n) == 1)
	{
		cout << "Mang toan la so chan.\n";
	}
	else
	{
		cout << "Mang khong hoan toan la so chan.\n";
	}
}
int KT_mang_toan_le(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return 0;
	}
	return 1;
}
void KQ_KT_mang_toan_le(int a[], int n)
{
	if (KT_mang_toan_le(a, n) == 1)
	{
		cout << "Mang toan la so le.\n";
	}
	else
	{
		cout << "Mang khong hoan toan la so le.\n";
	}
}
int KT_mang_toan_SNT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KT_SNT(a[i]) == 0)
			return 0;
	}
	return 1;
}
void KQ_KT_mang_toan_SNT(int a[], int n)
{
	if (KT_mang_toan_SNT(a, n) == 1)
	{
		cout << "Mang toan la so nguyen to.\n";
	}
	else
	{
		cout << "Mang khong hoan toan la so nguyen to.\n";
	}
}
int KT_tang_dan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[i + 1])
			return 1;
	}
	return 0;
}
void KT_mang_tang_dan(int a[], int n)
{
	if (KT_tang_dan(a, n) == 1)
	{
		cout << "Mang tang dan.\n";
	}
	else
	{
		cout << "Mang khong tang dan.\n";
	}
}
int KT_giam_dan(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i+1])
			return 1;
	}
	return 0;
}
void KT_mang_giam_dan(int a[], int n)
{
	if (KT_giam_dan(a, n) == 1)
	{
		cout << "Mang giam dan.\n";
	}
	else
	{
		cout << "Mang khong giam dan.\n";
	}
}
int KT_mang_doi_xung(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1 - i]) return 0;
	}
	return 1;
}
void KQ_KT_mang_doi_xung(int a[], int n)
{
	if (KT_mang_doi_xung(a, n) == 1)
	{
		cout << "La mang doi xung.";
	}
	else
	{
		cout << "Khong phai mang doi xung. \n";
	}
}
void Dem_phan_tu(int a[], int n)
{
	int Dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] % 4 != 0)
		{
			Dem = Dem++;
		}
	}
	cout << "Co " << Dem << " phan tu " << endl;
}
void Tong_SNT(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if (KT_SNT(a[i]) == 1)
		{
			S = S + a[i];
		}
	}
	cout << "Tong cac so nguyen to trong mang la: " << S << endl;
}
void Tong_chan(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			S = S + a[i];
		}
	}
	cout << "Tong cac so chan trong mang la: " << S << endl;
}
void Tong_le(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			S = S + a[i];
		}
	}
	cout << "Tong cac so le trong mang la: " << S << endl;
}
void Tong_VT_chan(int a[], int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0 && i != 0)
		{
			S = S + a[i];
		}
	}
	cout << "Tong cac phan tu o vi tri chan la: " << S << endl;
}