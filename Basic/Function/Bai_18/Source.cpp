// Đề bài: Tính S(n) = 1 + x ^ 2 / 2!+ x ^ 4 / 4!+ ... + x ^ 2n / (2n)!
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int x, int n)
{
	double S = 1.0;
	double LuyThua = 1.0;
	double GiaiThua = 1.0;
	for (int i = 2; i <= 2*n; i+=2) {
		LuyThua = LuyThua* x * x;
		GiaiThua = GiaiThua*(i - 1) * i;
		S = S + LuyThua / GiaiThua;
	}
	return S;
}
int main()
{
	cout << "Tinh S(n) = 1 + x ^ 2 / 2!+ x ^ 4 / 4!+ ... + x ^ 2n / (2n)!" << endl;
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
