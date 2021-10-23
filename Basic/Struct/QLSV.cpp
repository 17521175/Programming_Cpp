//Lập danh sách sinh viên có thông tin như sau: Họ tên, MSSV, Tuổi, Điểm trung bình.
//1. Tìm SV theo MSSV
//2. Tìm SV theo Tên
//3. Sắp xếp DSSV theo Điểm trung bình thứ tự tăng dần
//4. Thoát chương trinh
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct SinhVien
{
	char Hoten[100];
	int MSSV;
	int Tuoi;
	float DiemTB;
};

int menu();
void Nhap(SinhVien DSSV[], int &n);
void Xuat(SinhVien DSSV[], int n);
void MSSV(SinhVien DSSV[], int n, int &x);
void Tim_Ten(SinhVien DSSV[], int n, char f[]);
void Sap_Xep(SinhVien DSSV[], int n);

int main()
{
	int n, x;
	char f[10];
	SinhVien DSSV[100];	
	Nhap(DSSV, n);
	Xuat(DSSV, n);
	int choice;
	bool flag = true;
	while (flag != false) {
		choice = menu();
		switch (choice)
		{
		case 1:
			MSSV(DSSV, n, x);
			break;
		case 2:
			Tim_Ten(DSSV, n, f);
			break;
		case 3:
			Sap_Xep(DSSV, n);
			Xuat(DSSV, n);
			break;
		case 4:
			cout << "Xin chao.\n";
			flag = false;
			break;
		default:
			cout << "Lua chon khong dung, vui long nhap lai.\n";
		}

	}
	return 0;
}

int menu()
{
	int choice;
	cout << "\n =================================================================";
	cout << "\n | Vui long chon chuc nang tuong ung:                            |";
	cout << "\n | 1. Tim SV theo MSSV duoc nhap tu ban phim.                    |";
	cout << "\n | 2. Tim SV theo Ten duoc nhap tu ban phim.                     |";
	cout << "\n | 3. Sap xep sinh vien theo Diem trung binh co thu tu tang dan. |";
	cout << "\n | 4. Thoat chuong trinh.                                        |";
	cout << "\n =================================================================";
	cout << "\n Lua chon cua ban: ";
	cin >> choice;
	return choice;
}

void Nhap(SinhVien DSSV[], int &n)
{
	do
	{
		cout << "Xin moi ban nhap so luong sinh vien: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap sai, Xin moi nhap lai.\n";
		}
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ho ten SV " << i + 1 << ": ";
		cin.ignore();
		cin.getline(DSSV[i].Hoten, 100);
		cout << "Nhap MSSV: ";
		cin >> DSSV[i].MSSV;
		cout << "Nhap tuoi SV: ";
		cin >> DSSV[i].Tuoi;
		cout << "Nhap Diem TB: ";
		cin >> DSSV[i].DiemTB;
	}
}
void Xuat(SinhVien DSSV[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "===================================================================" << endl;
		cout << "Ten Sinh Vien "<< i + 1 <<": " << DSSV[i].Hoten << endl;
		cout << "MSSV: " << DSSV[i].MSSV << endl;
		cout << "Tuoi: " << DSSV[i].Tuoi << endl;
		cout << "Diem TB: " << DSSV[i].DiemTB << endl;
		cout << "===================================================================" << endl;
	}
}
void MSSV(SinhVien DSSV[], int n, int &x)
{
	cout << "Nhap MSSV: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (DSSV[i].MSSV == x)
		{			
            cout << "Thong tin cua Sinh Vien. " << endl;
            cout << "-------------------------------------------------------------------" << endl;
			cout << "MSSV: " << DSSV[i].MSSV << endl;
			cout << "Ho va Ten: " << DSSV[i].Hoten << endl;
			cout << "Tuoi: " << DSSV[i].Tuoi << endl;
			cout << "Diem TB: " << DSSV[i].DiemTB << endl;
		}
	}
}
void Tim_Ten(SinhVien DSSV[], int n, char f[])
{
	cout << "Nhap ten sinh vien can tim: ";
	cin.ignore();
	cin.getline(f, 100);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(DSSV[i].Hoten, f) == 0)
		{
			cout << "Thong tin cua Sinh Vien. " << endl;
            cout << "-------------------------------------------------------------------" << endl;
			cout << "MSSV: " << DSSV[i].MSSV << endl;
			cout << "Ho va Ten: " << DSSV[i].Hoten << endl;
			cout << "Tuoi: " << DSSV[i].Tuoi << endl;
			cout << "Diem TB: " << DSSV[i].DiemTB << endl;
		}    
	}
}
void Sap_Xep(SinhVien DSSV[], int n)
{
	cout << "Danh sach Sinh vien theo Diem TB." << endl;
    char tempHoten[100];
	int tempMSSV;
	int tempTuoi;
	float tempDiemTB;
	for (int i = 0; i < n - 1; i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (DSSV[i].DiemTB > DSSV[j].DiemTB)
			{
				
                strcpy(tempHoten, DSSV[i].Hoten);
                strcpy(DSSV[i].Hoten, DSSV[j].Hoten);
                strcpy(DSSV[j].Hoten, tempHoten);

                tempMSSV = DSSV[i].MSSV;
				DSSV[i].MSSV = DSSV[j].MSSV;
				DSSV[j].MSSV = tempMSSV;

                tempTuoi = DSSV[i].Tuoi;
				DSSV[i].Tuoi = DSSV[j].Tuoi;
				DSSV[j].Tuoi = tempTuoi;
    

                tempDiemTB = DSSV[i].DiemTB;
				DSSV[i].DiemTB = DSSV[j].DiemTB;
				DSSV[j].DiemTB = tempDiemTB;

			}
		}
	}
}