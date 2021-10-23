// Đề bài: Tính S(n) = 1 + x + x ^ 3 / 3!+ x ^ 5 / 5!+ ... + x ^ (2n + 1) / (2n + 1)!
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int x, int n)
{
	double S = 1.0;
	double LuyThua = 1.0;
	double GiaiThua = 1.0;
	for (int i = 1; i <= (2*n + 1); i++) {
		LuyThua = LuyThua*x;
		GiaiThua = GiaiThua*i;
		if (i % 2 != 0) {
			S = S + LuyThua / GiaiThua;
		}
	}
	return S;
}
int main()
{
	cout << "Tinh S(n) = 1 + x + x ^ 3 / 3!+ x ^ 5 / 5!+ ... + x ^ (2n + 1) / (2n + 1)!" << endl;
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
