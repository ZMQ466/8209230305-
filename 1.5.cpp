#include <iostream>
using namespace std;
int main() {
	double C,F;
	cout << "�����¶�Ϊ";
	cin>>F;
	
	C = 5 * (F - 32) / 9;
	double c = round(C * 100) / 100;
	cout << "�����¶�Ϊ" <<c << endl;
	return 0;
}