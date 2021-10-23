// Đề bài: Tính tổng tất cả “ước số” của số nguyên dương n.
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Check()
{
	int n;
	cout << "Xin moi ban nhap n: ";
	do {
		cin >> n;
		if (n < 0) {
			cout << "Xin moi ban nhap lai." << endl;
		}
	} while (n < 0);
	return n;
}
int Sum(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			S = S + i;
		}
	}
	return S;
}
int main()
{
	cout <<"Tinh tong cac 'uoc so' cua so nguyen duong n" << endl;
    int n = Check();
	cout << "Tong cac 'uoc so' cua so nguyen duong n la: " << Sum(n) << endl;
	system("pause");
	return 0;
}