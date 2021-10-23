// Đề bài: Tính S(n) = x + x ^ 2 + x ^ 3 + ... + x ^ n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Sum(int x, int n)
{
	int S = 0;
	int LuyThua = 1;
	for (int i = 1; i <= n; i++) {
		LuyThua = LuyThua * x;
		S = S + LuyThua;
	}
	return S;
}
int main()
{
	int x, n;
    	cout << "Tinh S(n) = x + x ^ 2 + x ^ 3 + ... + x ^ n" << endl;
	cout << "Xin moi ban nhap x: ";
	cin >> x;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(x, n) << endl;
	system("pause");
	return 0;
}
