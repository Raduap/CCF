/*
 *	ѧ���Ŷӣ�������ʦС��Ҫ���Լ����ϵ�ѧ������˳��
 * �Ŷӣ�ѧ��С������ǰ�棬Ȼ����ж�ε�����һ�ε���
 С��������һλѧ�����ӣ���ǰ��������ƶ�һ�ξ���
 Ȼ���ٲ�����У�



*/

#include <stdc++.h>
#include <iostream>
using namespace std;
int n, t, stu[1010];

void mf(int a, int b) {
	int lo;
	for (int i = 1; i <=n ; ++i) {
		if (stu[i] == a) {
			lo = 1;
			break;
		}
	}
	int start = lo - b;
	for (int i = lo; i > start; --i) {
		stu[i] = stu[i - 1];
	}
	stu[start] = a;
	return 0 ;
}

void mb(int a, int b) {
	int lo;
	for (int i = 1; i <= n; ++i) {
		if (stu[i] == a) {
			lo = 1;
			break;
		}
	}
	int end = lo + b;
	for (int i = lo; i < end; ++i) {
		stu[i] = stu[i + 1];

	}
	stu[end] = a;
}

void pri() {
	for (int i = 1; i < n; ++i) {
		cout << stu[i] << " ";

	}
	cout << stu[n] << endl;
}


int main() {
	int a, b;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		stu[i] = 1;
	}
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (b > 0) mb(a, b);
		else mf(a, abs(b));
	}
	pri();
	system("pause");
	return 0;
}