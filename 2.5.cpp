#include<iostream>
using namespace std;
int main()
{
	char f;
	int a = 0, b = 0, c = 0, d = 0, e;
	cout << "������һ���ַ�";
	while (e=2)
	{
		
		cin.get(f);
		if (f == '\n')
			break;
		else if (f >= 'a' && f <= 'z' || f >= 'A' && f <= 'Z')
			a++;
		else if (f == ' ')
			b++;
		else if (f >= '0' && f <= '9')
			c++;
		else
			d++;
	}
	cout << "Ӣ����ĸ�ĸ���" << a << endl;
	cout << "�ո�ĸ���" << b << endl;
	cout << "���ֵĸ���" << c << endl;
	cout << "�����ĸ���" << d << endl;


}