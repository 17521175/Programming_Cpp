// Đề bài: Tính S(n) = x + x ^ 2 / (1 + 2) + x ^ 3 / (1 + 2 + 3) + ... + x ^ n / (1 + 2 + 3 + ... + n)
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int x, int n)
{
	double S = 0;
	double Tong = 0;
	double LuyThua = 1.0;
	for (int i = 1; i <= n; i++) {
		LuyThua = LuyThua*x;
		Tong = Tong + i;
		S = S + LuyThua / Tong;
	}
	return S;
}
int main()
{
	cout << "Tinh S(n) = x + x ^ 2 / (1 + 2) + x ^ 3 / (1 + 2 + 3) + ... + x ^ n / (1 + 2 + 3 + ... + n)" << endl;
    	int x;
	cout << "Xin moi ban nhap x: ";
	cin >> x;
	int n;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(x, n) << endl;
	system("pause");
	return 0;
}
