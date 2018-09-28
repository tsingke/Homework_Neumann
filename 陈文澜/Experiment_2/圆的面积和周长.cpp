#include<iostream>

using namespace std;
const float P = 3.14159;
int main() {
	int r;//r为圆的半径
	float perimeter, area;
	cout << "圆的半径为：";
		cin >> r;
	perimeter = 2 * P*r;
	area = P * r*r;
	cout << "圆的周长为：" << perimeter << "圆的面积为：" << area << endl;
	system("pause");
	return 0;
	
}
