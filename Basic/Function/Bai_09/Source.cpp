// Đề bài: Tính T(n) = 1 * 2 * 3 * ... * n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Mult(int n)
{
	int T = 1;
	for (int i = 1; i <= n; i++) {
		T = T*i;
	}
	return T;
}
int main()
{
	int n;
    	cout << "Tinh T(n) = 1 * 2 * 3 * ... * n" << endl;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tich T(n) la: " << Mult(n) << endl;
	system("pause");
	return 0;
}
