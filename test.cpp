#include<iostream>
using namespace std;
////������������a,b���Զ��庯��max()�����ǵ����ֵ
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
//	cout << "���ֵΪ��" << max(a, b) << endl;
//}
////��ʾ�û�����ľ���ֵ
//void main()
//{
//	int x, y;
//	cin >> x;
//	if (x < 0)
//		y = -x;
//	else y = x;
//	cout << y << endl;
//}
////��дһ�����򣬽��û����������������ʾ����
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
////do����while��̣����û����������������ʾ����
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
////for��̣����û����������������ʾ����
//void main()
//{
//	int x = 0, y = 0;
//	cin >> x;
//	for (; x > 0; y = y * 10 + (x % 10), x /= 10);
//	cout << y << endl;
//	system("pause");
//
//}
////�Ӽ��̶����û����������������ͣ����û�������0ʱ�������������
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
////��дһ����������������1^2+2^2+3^2+����+n^2<=1000������n
//void main()
//{
//	int n = 0, sum = 0;
//	while (1)
//	{
//		sum += n * n;
//		if (sum > 1000) goto end;
//		n++;
//	}
//end:cout << "����nΪ��" << n << endl;
//	system("pause");
//}
