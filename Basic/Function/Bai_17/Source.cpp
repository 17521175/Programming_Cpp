// Đề bài: Tính S(n) = x + x ^ 2 / 2!+ x ^ 3 / 3!+ ... + x ^ n / n!
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int x, int n)
{
	double S = 0;
	double LuyThua = 1.0;
	double GiaiThua = 1.0;
	for (int i = 1; i <= n; i++) {
		LuyThua = LuyThua*x;
		GiaiThua = GiaiThua*i;
		S = S + LuyThua / GiaiThua;
	}
	return S;
}
int main()
{
	cout << "Tinh S(n) = x + x ^ 2 / 2!+ x ^ 3 / 3!+ ... + x ^ n / n!" << endl;
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