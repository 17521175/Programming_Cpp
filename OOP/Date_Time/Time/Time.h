#pragma once
#include <iostream> 
using namespace std;

class Time
{
private:
	int Gio;
	int Phut;
	int Giay;
public:
	Time();
	Time(int h, int m, int s);
	Time(Time &x);
	int getGio();
	int getPhut();
	int getGiay();
	void setGio(int newGio);
	void setPhut(int newPhut);
	void setGiay(int newGiay);
	void Nhap();
	void Xuat();
	~Time();
};