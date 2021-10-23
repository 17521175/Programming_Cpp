// Đề bài: Liệt kê tất cả “ước số” của số nguyên dương n.
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Check()
{
    cout << "Liet ke tat ca cac 'uoc so' cua so nguyen duong n." << endl;
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
int main()
{
	int n = Check();
	cout << "Cac uoc so nguyen duong n la: ";
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
		{
			cout << i << "  ";
		}
	}
    cout << endl;
	system("pause");
	return 0;
}