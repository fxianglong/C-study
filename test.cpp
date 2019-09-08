#include<iostream>
using namespace std;
////输入两个整数a,b用自定义函数max()求他们的最大值
//int max(int a, int b)
//{
//	int c;
//	if (a > b)
//		c = a;
//	else c = b;
//	return c;
//}
//void main()
//{
//	int a, b;
//	cin >> a >> b;
//	cout << "最大值为：" << max(a, b) << endl;
//}
////显示用户输入的绝对值
//void main()
//{
//	int x, y;
//	cin >> x;
//	if (x < 0)
//		y = -x;
//	else y = x;
//	cout << y << endl;
//}
////编写一个程序，将用户输入的整数反向显示出来
//void main()
//{
//	int x=0,y=0;
//	cin >> x;
//	while (x > 0)
//	{
//		y = y * 10 + (x % 10);
//		x /= 10;
//	}
//	cout << y <<endl;
//	system("pause");
//}
////do……while编程，将用户输入的整数反向显示出来
//void main()
//{
//	int x = 0, y = 0;
//	cin >> x;
//	do{
//		y = y * 10 + (x % 10);
//				x /= 10;
//	} while (x > 0);
//	cout << y << endl;
//	system("pause");
//
//}
////for编程，将用户输入的整数反向显示出来
//void main()
//{
//	int x = 0, y = 0;
//	cin >> x;
//	for (; x > 0; y = y * 10 + (x % 10), x /= 10);
//	cout << y << endl;
//	system("pause");
//
//}
////从键盘读入用户输入的数，对其求和，当用户输入数0时，便是输入结束
//void main()
//{
//	int sum = 0, x = 0;
//	while (1)
//	{
//		cin >> x;
//		if (x == 0)
//			break;
//		sum += x;
//	}
//	cout << sum << endl;
//	system("pause");
//}
////编写一个程序，求满足条件1^2+2^2+3^2+……+n^2<=1000的最大的n
//void main()
//{
//	int n = 0, sum = 0;
//	while (1)
//	{
//		sum += n * n;
//		if (sum > 1000) goto end;
//		n++;
//	}
//end:cout << "最大的n为：" << n << endl;
//	system("pause");
//}
