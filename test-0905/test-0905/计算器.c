#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//void test()
//{
//	printf("hello\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}

//������
//void menu()
//{
//	printf("*********************************\n");
//	printf("***  1. add             2. sub **\n");
//	printf("***  3. mul             4. div **\n");
//	printf("***           0. exi           **\n");
//	printf("*********************************\n");
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		/*printf("������������������>");
//		scanf("%d%d", &x, &y);*/
//		switch (input)
//		{
//		case 1:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}  
//	} while (input);
//	return 0;
//}

void menu()
{
	printf("*********************************\n");
	printf("***  1. add             2. sub **\n");
	printf("***  3. mul             4. div **\n");
	printf("***           0. exi           **\n");
	printf("*********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0, y = 0;
	int(*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������>");
			scanf("%d%d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if(input == 0)
			printf("�˳�\n");
		else
			printf("ѡ�����\n");
	} while (input);
	return 0;
}