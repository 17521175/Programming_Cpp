// Đề bài: Tính S(n) = x ^ 2 + x ^ 4 + ... + x ^ 2n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Sum(int x, int n)
{
	int S = 0;
	int LuyThua = 1;
	for (int i = 2; i <= 2*n; i += 2) {
		LuyThua = LuyThua * x * x;
		S = S + LuyThua;
	}
	return S;
}
int main()
{
	int x, n;
    	cout << "Tinh S(n) = x ^ 2 + x ^ 4 + ... + x ^ 2n" << endl;
	cout << "Xin moi ban nhap x: ";
	cin >> x;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(x, n) << endl;
	system("pause");
	return 0;
}
