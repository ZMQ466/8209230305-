#include<iostream>
using namespace std;
int main() {
	int a, b, c, d = 1;
	cin >> a >> b;
	if (a > b)
	{
		c = a ;
	}
	else c = b ;
	
	do
	{
		c = c - 1;
		
	} while ((a % c != 0) || (b % c != 0));

	cout << "a��b���������Ϊ" << c<<endl;

while (d%a!=0||d%b!=0)
{
	d = d + 1;
}cout << "a��b����С������Ϊ" << d;
}