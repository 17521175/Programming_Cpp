// Đề bài: Tính S(n) = x + x ^ 3 + x ^ 5 + ... + x ^ (2n + 1)
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Sum(int x, int n)
{
	int S = 0;
	int LuyThua = 1;
	for (int i = 1; i <= (2*n + 1); i++) {
		LuyThua = LuyThua*x;
		if (i % 2 != 0)
		{
			S = S + LuyThua;
		}
	}
	return S;
}
int main()
{
	int x;
    	cout << "Tinh S(n) = x + x ^ 3 + x ^ 5 + ... + x ^ (2n + 1)" << endl;
	cout << "Xin moi ban nhap x: ";
	cin >> x;
	int n;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(x, n) << endl;
	system("pause");
	return 0;
}
