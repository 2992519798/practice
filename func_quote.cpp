#include<iostream>

using namespace std;


// 1.���ñ����ʼ��
// 2.���ó�ʼ���󲻿��Ը���ָ��
int func_quote() {

	int a = 10;
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	b = 20;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}