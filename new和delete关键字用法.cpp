#include<iostream>
#include"func_quote.h"

using namespace std;

int main() {

	int * p = new int(10);	//new关键字创建变量
	int* arr = new int[10];	//new关键字创建数组
	for (int i = 0; i < 10; i++) {
		*(arr + i) = i;
	}
	cout << *p << endl;

	cout << arr[7] << endl;

	delete p;		//释放单个变量空间
	delete[] arr;	//释放数组空间，注意添加[]表示要释放的是一个数组

	func_quote();			// 引用测试
	system("pause");
	return 0;
}