#include <iostream>
using namespace std;
int main()
{
	char c;
	int d;
	cout << "������һ���ַ�";
	cin >> c;
		if(c<='z '&& c >= 'a')
		{
			d = c - 32;
			cout << "���д��ĸΪ";
			cout << static_cast<char>(d);
		}
		else cout << "��ASCLL��Ϊ" << static_cast<int>(c);
return 0;
}
