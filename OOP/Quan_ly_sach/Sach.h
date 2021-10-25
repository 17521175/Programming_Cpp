#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sach
{
protected:
	string Ten;
	string Tacgia;
	string Namxb;
	int gia;
public:
	int Loaisach;
	Sach();
	void Nhap();
	void Xuat();
	~Sach();
};

