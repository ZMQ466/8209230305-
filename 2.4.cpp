#include <iostream>  
using namespace std;
	int main() {
	int a, b;
	double (a/b);
	char c;
	cout << "�����һ������";
	cin >> a;
	cout << "�������";
	cin >> c;
	cout << "����ڶ�������";
	cin >> b;
	switch (c)
	{case'+':
		cout << a + b << endl; break;
	case'-':
		cout << a - b << endl; break;
	case'*':
		cout << a * b << endl; break;
	case'/':
		if (b == 0) { cout << "��������Ϊ0"; break;
		}
		else { cout <<( a / b); break;
		}
		 
	case'%':
		if (b == 0) { cout << "��������Ϊ0"; break;
		}
		else { cout << a % b; break;
		}
		
	default:
		break;
	}
}