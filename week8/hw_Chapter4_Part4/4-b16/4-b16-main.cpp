/*2253893 ��06 �����*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include<cmath>
#include"4-b16.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "������һԪ���η��̵�����ϵ��a,b,c:" << endl;
	cin >> a >> b >> c;
	if (fabs(a) < 1e-6)
		a = 0;
	if (fabs(b) < 1e-6)
		b = 0;
	if (fabs(c) < 1e-6)
		c = 0;
	case1(a, b, c);
	case2(a, b, c);
	case3(a, b, c);
	case4(a, b, c);
	return 0;
}