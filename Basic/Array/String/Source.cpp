// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int menu();

void Nhap_xuat(char S[]);
void Xuat_cac_ky_tu_in_hoa(char S[]);
void Dao_chuoi(char S[]);
void Hoa_thuong_xen_ke(char S[]);
void Doi_xung(char S[]);

int main() 
{
	char S[100];
	int choice;
	bool flag = true;
	while (flag != false) 
	{
		choice = menu();
		switch (choice)
		{
		case 1:
			cin.ignore();
			Nhap_xuat(S);
			break;
		case 2:
			Xuat_cac_ky_tu_in_hoa(S);
			break;
		case 3:
			Dao_chuoi(S);
			break;
		case 4:
			Hoa_thuong_xen_ke(S);
			break;
		case 5:
		case 6:
		case 7:
			Doi_xung(S);
			break;
		case 8:
		case 9:
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
	cout << "\n ==============================================================";
	cout << "\n | Vui long chon chuc nang tuong ung.                         |";
	cout << "\n | 1. Nhap/Xuat mang.                                         |";
	cout << "\n | 2. Xuat cac ky tu in hoa trong chuoi.                      |";
	cout << "\n | 3. Dao nguoc cac ky tu trong chuoi.                        |";
	cout << "\n | 4. Doi chuoi xen ke 1 chu hoa va 1 chu thuong.             |";
	cout << "\n | 5. Dem mot ky tu xuat hien bao nhieu lan trong chuoi.      |";
	cout << "\n | 6. Tim kiem xem ky tu nao xuat hien nhieu nhat trong chuoi.|";
	cout << "\n | 7. Kiem tra chuoi co doi xung hay khong.                   |";
	cout << "\n | 8. Nhap vao mot tu va xoa tu do trong chuoi da cho.        |";
	cout << "\n | 9. Thoat chuong trinh.                                     |";
	cout << "\n =============================================================";
	cout << "\n Lua chon cua ban: ";
	cin >> choice;
	return choice;
}

void Nhap_xuat(char S[])
{
	cout << "Xin moi ban nhap ky tu: ";
	cin.getline(S, 100);
	cout << "Ky tu ban da nhap: " << S << endl;
}
void Xuat_cac_ky_tu_in_hoa(char S[])
{
	int n = strlen(S);
	for (int i = 0; i < n; i++)
	{
		if (S[i] >= 'A' && S[i] <= 'Z')
		{
			cout << S[i] << "\t";
		}
	}
}
void Dao_chuoi(char S[])
{
	_strrev(S);
	cout <<"Chuoi sau khi dao: "<< S << endl;
}
void Hoa_thuong_xen_ke(char S[])
{
	int n=strlen(S);
	for (int i = 1; i < n; i++)
	{
		if (i % 2 == 0)
		{
			if (S[i] >= 'a' && S[i] <= 'z')
			{
				S[i] -= 32;
			}
		}
		else
		{
			if (S[i] >= 'A' && S[i] <= 'Z')
			{
				S[i] += 32;
			}
		}
	}
	cout << S << endl;
}
int KT_doi_xung(char S[100])
{
	int n=strlen(S);
	for (int i = 0; i< n; i++)
	{
		if (S[i] != S[n - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}
void Doi_xung(char S[])
{
	if (KT_doi_xung(S) == 0)
	{
		cout << "Khong doi xung.\n";
	}
	else
	{
		cout << "Chuoi doi xung.\n";
	}
}