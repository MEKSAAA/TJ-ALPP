/*2253893 ��06 �����*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include<cmath>
using namespace std;
int case1(double a, double b, double c)//aΪ0
{
	if (a == 0)
		cout << "����һԪ���η���" << endl;
	return 0;
}
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
int case4(double a, double b, double c)//���������
{
	double y, i1;
	if (a != 0 && 4 * a * c - b * b >= 1e-6) {
		y = -b / (2 * a);
		if (fabs(y) < 1e-6)
			y = 0;
		i1 = fabs(sqrt(4 * a * c - b * b) / (2 * a));
		if (fabs(i1) < 1e-6)
			i1 = 0;
		cout << "�����������" << endl;
		if (fabs(i1 - 1) < 1e-6) {
			if (y == 0) {
				cout << "x1=" << "i" << endl;
				cout << "x2=-" << "i" << endl;
			}
			else {
				cout << "x1=" << y << "+" << "i" << endl;
				cout << "x2=" << y << "-" << "i" << endl;
			}
		}
		else {
			if (y == 0) {
				cout << "x1=" << i1 << "i" << endl;
				cout << "x2=-" << i1 << "i" << endl;
			}
			else {
				cout << "x1=" << y << "+" << i1 << "i" << endl;
				cout << "x2=" << y << "-" << i1 << "i" << endl;
			}
		}
	}
	return 0;
}
