#include<iostream>
#include"func_quote.h"

using namespace std;

int main() {

	int * p = new int(10);	//new�ؼ��ִ�������
	int* arr = new int[10];	//new�ؼ��ִ�������
	for (int i = 0; i < 10; i++) {
		*(arr + i) = i;
	}
	cout << *p << endl;

	cout << arr[7] << endl;

	delete p;		//�ͷŵ��������ռ�
	delete[] arr;	//�ͷ�����ռ䣬ע�����[]��ʾҪ�ͷŵ���һ������

	func_quote();			// ���ò���
	system("pause");
	return 0;
}