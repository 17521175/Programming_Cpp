// Đề bài: Tính T(x, n) = x^n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int LuyThua(int x, int n)
{
	int T = 1;
	for (int i = 1; i <= n; i++) {
		T = T*x;
	}
	return T;
}
int main()
{
	int x, n;
    	cout << "Tinh T(x, n) = x^n" << endl;
	cout << "Xin moi ban nhap x: ";
	cin >> x;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "T(x, n) la: " << LuyThua(x,n) << endl;
	system("pause");
	return 0;
}
