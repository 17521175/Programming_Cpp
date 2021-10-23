// Đề bài: Tính S(n) = 1 + 1 * 2 + 1 * 2 * 3 + ... + 1 * 2 * 3 * n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Sum(int n)
{
	int S = 0;
	int T = 1;
	for (int i = 1; i <= n; i++) {
		T = T * i;
		S = S + T;
	}
	return S;
}
int main()
{
	int n;
    	cout << "Tinh S(n) = 1 + 1 * 2 + 1 * 2 * 3 + ... + 1 * 2 * 3 * n" << endl;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(n) << endl;
	system("pause");
	return 0;
}
