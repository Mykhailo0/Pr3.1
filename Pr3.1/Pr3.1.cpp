#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2 * abs(13 - x);
	// ����� 1: ������������ � ��������� ����
	if (x <= -1)
		B = exp(abs(x - 5));
	if (-1 < x && x < 1)
		B = pow(sin(pow(x, 3)), 2) - 1;
	if (x >= 1)
		B = cos(abs(x)) / (1 + pow(sin(x), 2));
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -1)
		B = exp(abs(x - 5));
	else
		if (-1 < x && x < 1)
			B = pow(sin(pow(x, 3)), 2) - 1;
		else
			B = cos(abs(x)) / (1 + pow(sin(x), 2));
	y = A - B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}