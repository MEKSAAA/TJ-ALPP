/*2253893 ��06 �����*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include<cmath>
using namespace std;
int case2(double a, double b, double c)//���������ȵ�ʵ��
{
	double x1, x2;
	if (a != 0 && b * b - 4 * a * c >= 1e-6) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		if (fabs(x1) < 1e-6)
			x1 = 0;
		if (fabs(x2) < 1e-6)
			x2 = 0;
		cout << "����������ʵ����" << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	return 0;
}
