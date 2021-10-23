// Đề bài: Tính S(n) = 1 / 2 + 2 / 3 + 3 / 4 + ... + n / (n + 1)
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++) {
		S = S + i / (i + 1.0);
	}
	return S;
}
int main()
{
	int n;
    cout << "Tinh S(n) = 1 / 2 + 2 / 3 + 3 / 4 + ... + n / (n + 1)" << endl;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(n) << endl;
	system("pause");
	return 0;
}