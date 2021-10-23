//Tính S(n) = 1 + 1 / 2 + 1 / 3 + . . . + 1 / n
#include <iostream>
using namespace std;
double Sum(int n)
{
	double S = 0;
	for (int i = 1; i <= n; i++) {
		S = S + 1.0 / i;
	}
	return S;
}
int main()
{
	int n;
    cout << "Tinh S(n) = 1 + 1 / 2 + 1 / 3 + . . . + 1 / n" << endl;
	cout << "Xin moi ban nhap n: ";
	cin >> n;
	cout << "Tong S(n) la: " << Sum(n) << endl;
	system("pause");
	return 0;
}