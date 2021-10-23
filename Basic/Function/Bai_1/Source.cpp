// Đề bài: Tính S(n) = 1 + 2 + 3 + ... + n
// Tên: Nguyễn Anh Trung
// MSSV: 17521175
#include <iostream>
using namespace std;

//Hàm tính tổng
int Sum(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++) {
		S = S + i;
	}
	return S;
}

int main()
{
	int n;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(n) << endl;
	system("pause");
	return 0;
}