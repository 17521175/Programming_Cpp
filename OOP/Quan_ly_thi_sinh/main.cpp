#include "DSTS.h"

void main()
{
	DSTS A;
	A.Input();
	cout << "==========================Danh sach cac Thi Sinh==========================" << endl;
	A.Output();
	cout << "==============Dang sach cac Thi Sinh co tong diem lon hon 15==============" << endl;
	A.TestThiSinh();
	system("pause");
}