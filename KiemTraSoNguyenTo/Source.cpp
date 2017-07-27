#include <iostream>
using namespace std;

// Nhập vào một số nguyên kiểm tra số đó có phải là số nguyên tố không
bool laSoNguyenTo(int n);

int main()
{
	int n;

	cout << "Nhap vao 1 so de kiem tra so nguyen to: ";
	cin >> n;
	if (laSoNguyenTo(n))
		cout << "So: " << n << " la so nguyen to" << endl;
	else
		cout << "So: " << n << " khong phai la so nguyen to" << endl;

	return 0;
}

bool laSoNguyenTo(int n)
{
	// Số nguyên tố phải lớn >= 2
	if (n < 2)
		return false;
	// 2 là số nguyên tố chẵn duy nhất
	if (n == 2)
		return true;
	// Số chẵn không phải là số 2 -> không phải là số nguyên tố
	if (n % 2 == 0)
		return false;
	// Duyệt các số lẻ 
	for (int i = 3; i <= (n / 2); i += 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}