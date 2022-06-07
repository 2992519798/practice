#include<iostream>

using namespace std;


// 1.引用必须初始化
// 2.引用初始化后不可以更改指向
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