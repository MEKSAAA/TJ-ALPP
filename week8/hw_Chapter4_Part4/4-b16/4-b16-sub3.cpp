/*2253893 ��06 �����*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include<cmath>
using namespace std;
int case3(double a, double b, double c)//��������ȵ�ʵ��
{
	double x1;
	if (a != 0 && fabs(b * b - 4 * a * c) < 1e-6) {
		x1 = -b / (2 * a);
		if (fabs(x1) < 1e-6)
			x1 = 0;
		cout << "���������ʵ����" << endl;
		cout << "x1=x2=" << x1 << endl;
	}
	return 0;
}
