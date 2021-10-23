// Đề bài: Cho số nguyên dương n. Kiểm tra số dương n có phải là số hoàn thiện hay không
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Check()
{
	{
		int n;
		cout << "Xin moi ban nhap n: ";
		do {
			cin >> n;
			if (n < 0) {
				cout << "Xin moi ban nhap lai." << endl;
			}
		} while (n < 0);
		return n;
	}
}
int Sum(int n) 
{
	int S = 0;
	for (int i = 1; i < n; i++) {
		if(n % i == 0)
		{
			S = S + i;
		}
	}
	return S;
}
void CheckPerfect(int n)
{
	if (Sum(n) == n) {
		cout << n << " la so hoan thien \n";
	}

	else
	{
		cout << n << " khong phai la so hoan thien \n";
	}
}
int main()
{
	cout << "Kiem tra so hoan thien" << endl;
    	int n = Check();
	CheckPerfect(n);
	system("pause");
	return 0;
}
