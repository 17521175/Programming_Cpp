// Đề bài: Đếm số lượng “ước số chẵn” của số nguyên dương n.
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
int Count(int n)
{
	int Dem = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			if (i % 2 == 0) {
				Dem = Dem + 1;
			}
		}
	}
	return Dem;
}
int main()
{
	cout << "Dem so luong cac 'uoc so' chan cua so nguyen duong n" << endl;
    	int n = Check();
	cout << "So luong cac uoc so chan cua so nguyen duong n la: " << Count(n) << endl;
	system("pause");
	return 0;
}
