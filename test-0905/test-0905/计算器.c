#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
////void test()
////{
////	printf("hello\n");
////}
////int main()
////{
////	printf("%p\n", test);
////	printf("%p\n", &test);
////	return 0;
////}
//
////计算器
//void menu()
//{
//	printf("*********************************\n");
//	printf("***  1. add             2. sub **\n");
//	printf("***  3. mul             4. div **\n");
//	printf("***           0. exit           **\n");
//	printf("*********************************\n");
//}
//
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
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	//int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			/*printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);*/
//			Calc(Add);
//			break;
//		case 2:
//			/*printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);*/
//			Calc(Sub);
//			break;
//		case 3:
//			/*printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);*/
//			Calc(Mul);
//			break;
//		case 4:
//			/*printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);*/
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}  
//	} while (input);
//	return 0;
//}
//
////void menu()
////{
////	printf("*********************************\n");
////	printf("***  1. add             2. sub **\n");
////	printf("***  3. mul             4. div **\n");
////	printf("***  5. XOR             0. exit **\n");
////	printf("*********************************\n");
////}
////int Add(int x, int y)
////{
////	return x + y;
////}
////int Sub(int x, int y)
////{
////	return x - y;
////}
////int Mul(int x, int y)
////{
////	return x * y;
////}
////int Div(int x, int y)
////{
////	return x / y;
////}
////int XOR(int x, int y)
////{
////	return x^y;
////}
////int main()
////{
////	int input = 0;
////	int x = 0, y = 0;
////	int(*pfarr[])(int, int) = { 0, Add, Sub, Mul, Div ,XOR};
////	do
////	{
////		menu();
////		printf("请选择：>");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)
////		{
////			printf("请输入两个操作数：>");
////			scanf("%d%d", &x, &y);
////			//pfarr是一个函数指针数组 -转移表
////			int ret = pfarr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if(input == 0)
////			printf("退出\n");
////		else
////			printf("选择错误\n");
////	} while (input);
////	return 0;
////}

//int Add（int x ,int y）
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr; //取出数组的地址
//
//	int(*pf)(int, int);  //函数指针
//	int(*pfarr[4])(int, int);  //pfarr是一个数组 - 函数指针的数组
//	int(*(*ppfarr)[4])(int, int) = &pfarr;
//	//ppfarr是一个指针数组，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int (*)(int , int)
//	return 0;
//}

//回调函数
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char *))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}


int cmp_int(const void*e1, const void *e2)
{
	return *(int*)e1 - *(int*)e2 ;
}
void Swap(char *buf1, char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf1 = temp ;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void *base, int sz, int width,int (*cmp)(void*e1,void*e2))
{
	int i = 0;
	int j = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		for (j = 0; j < sz - i - 1; j++)
		{  
			//两个元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
		}
	}
}
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(s, sz, sizeof(s[0]),cmp_int);
//}
//void test5()
//{
//
//}
int main()
{
	//冒泡排序函数
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(int), cmp_int);
	for (i = 0; i < sz; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
	//qsort(s);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小，单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//             函数指针的两个参数是：待比较的两个元素的地址
}