#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//指针笔试题
//笔试1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d ，%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
// 2 , 5

////笔试2
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p的值为0x100 000。如下表达式的值分别是多少？
//int main()
//{
//	printf("%p\n", p + 0X1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}
///*00000014
//  00000001
//  00000004
//  请按任意键继续. . .*/

////笔试3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
////4,2000000请按任意键继续. . .

////笔试4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}
////1
////请按任意键继续. . .

////笔试5
//int main()
//{
//	int a[5][5];
//	int(*p)[5];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
////00000000, 0
////请按任意键继续. . .
