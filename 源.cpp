#include<iostream>
using namespace std;
int func(int x, int y)
{
	if (x == 0 || y == 0)
		return 1;
	return func(x - 1, y) + func(x, y - 1);
}
int main()
{
	int x = 0, y = 0;
	cin >> x >> y;
	cout << func(x, y) << endl;
	system("pause");
	return 0;
}