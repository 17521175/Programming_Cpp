// Đề bài: Tính tích tất cả “ước số” của số nguyên dương n.
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
int Tich(int n)
{
	int T = 1;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			T = T*i;
		}
	}
	return T;
}
int main()
{
	cout << "Tinh tich cac 'uoc so' cua so nguyen duong n" << endl;
    int n = Check();
	cout << "Tich cac 'uoc so' cua so nguyen duong n la: " << Tich(n) << endl;
	system("pause");
	return 0;
}