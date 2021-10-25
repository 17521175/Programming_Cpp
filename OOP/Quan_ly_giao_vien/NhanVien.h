#pragma once
#include <iostream>
#include <string>
using namespace std;

class NgaySinh
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	NgaySinh() { Ngay = 0, Thang = 0, Nam = 0; };
	int SoNgayTrongThang(int Thang, int Nam)
	{
		int NumOfDays;
		if (Thang < 12)
		{
			switch (Thang)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				NumOfDays = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				NumOfDays = 30;
				break;
			case 2:
				if ((Nam % 4 == 0 && Nam % 100 != 0) || Nam % 400 == 0)
				{
					NumOfDays = 29;
				}
				else
				{
					NumOfDays = 28;
				}
				break;
			}

			return NumOfDays;
		}
		else
		{
			return 0;
		}
	}
	void Nhap()
	{
		do
		{
			cout << "Moi ban nhap ngay: ";
			cin >> Ngay;
			cout << "Moi ban nhap thang: ";
			cin >> Thang;
			cout << "Moi ban nhap nam: ";
			cin >> Nam;
			if ((Ngay < 1 || Ngay > SoNgayTrongThang(Thang, Nam)) || (Thang < 1 || Thang > 12) || Nam < 0)
			{
				cout << "Ngay thang nam khong hop le, vui long nhap lai.\n";
			}
		} while ((Ngay < 1 || Ngay > SoNgayTrongThang(Thang, Nam)) || (Thang < 1 || Thang > 12) || Nam < 0);
	}
	void Xuat()
	{
		cout << Ngay << "/" << Thang << "/" << Nam << endl;
	}
	~NgaySinh() {};
};

class NhanVien
{
protected:
	string MaNV;
	string Hoten;
	NgaySinh NgaySinh;
public:
	NhanVien();
	int LoaiNV;
	virtual bool Xet_tuyen() = 0;
	virtual void Nhap();
	virtual void Xuat();
	~NhanVien();
};

