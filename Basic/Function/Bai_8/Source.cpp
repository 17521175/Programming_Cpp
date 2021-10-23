// Đề bài: Tính S(n) = 1 / 2 + 3 / 4 + 5 / 6 + ... + (2n + 1) / (2n + 2)
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
double Sum(int n)
{
	double S = 0;
	for (int i = 1; i <= (2 * n + 1); i+=2) {
		S = S + i / (i + 1.0);
	}
	return S;
}
int main()
{
	int n;
    cout << "Tinh S(n) = 1 / 2 + 3 / 4 + 5 / 6 + ... + (2n + 1) / (2n + 2)" << endl;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(n) << endl;
	system("pause");
	return 0;
}