// Đề bài: Tìm ước số lẻ lớn nhất của số nguyên dương n. 
// Ví dụ n = 100 ước lẻ lớn nhất của 100 là 25.
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;
int Check()
{
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
}
int FindMax(int n)
{
	int Max = 1;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			if ((i % 2 != 0) && (i>Max)){
				Max = i;
			}
		}
	}
	return Max;
}
int main()
{
	cout << "Tim 'uoc so' le lon nhat cua so nguyen duong n" << endl;
    int n = Check();
	cout << "Uoc so le lon nhat cua so nguyen duong n la: " << FindMax(n) << endl;
	system("pause");
	return 0;
}