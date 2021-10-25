#pragma once
#include <iostream>
#include <string>
using namespace std;
 
class ThiSinh
{
private:
	string MSSV;
	string Hoten;
	int Ngay, Thang, Nam;
	float Toan, Van, Anh;
public:
	ThiSinh();
	ThiSinh(string tMSSV, string tHoten, int tNgay, int tThang, int tNam, float tToan, float tVan, float tAnh);
	ThiSinh(ThiSinh &X);
	string getMSSV();
	string getHoten();
	int getNgay();
	int getThang();
	int getNam();
	float getToan();
	float getVan();
	float getAnh();
	void setMSSV(string newMSSV);
	void setHoten(string newHoten);
	void setNgay(int newNgay);
	void setThang(int newThang);
	void setNam(int newNam);
	void setToan(float newToan);
	void setVan(float newVan);
	void setAnh(float newAnh);
	void Nhap();
	void Xuat();
	float TongDiem();
	~ThiSinh();
};