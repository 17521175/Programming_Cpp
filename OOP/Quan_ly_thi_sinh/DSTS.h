#pragma once
#include "ThiSinh.h"

class DSTS
{
private:
	int n;
	ThiSinh *a;
public:
	DSTS();
	int getn();
	void setn(int newn);
	void Input();
	void Output();
	void TestThiSinh();
	~DSTS();
};