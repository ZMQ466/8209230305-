#include<iostream>��
using namespace std;
int main()
{
	int a, b, c,C;
	cout<< "�����ε����߳�Ϊ��";
	cin >> a >> b >> c;
	if(c<a+b&&a<b+c&&b<a+c)
	{
		C = a + b + c;
		cout << "�����ε��ܳ�Ϊ" << C << endl;
		if (a == c || b == c || a == b ) { cout << "������Ϊ����������"; }
	}
	else { cout << "�����β�����"; }
}