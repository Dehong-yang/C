#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//ָ�������
//����1
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d ��%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
// 2 , 5

////����2
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p��ֵΪ0x100 000�����±��ʽ��ֵ�ֱ��Ƕ��٣�
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
//  �밴���������. . .*/

////����3
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
////4,2000000�밴���������. . .

////����4
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}
////1
////�밴���������. . .

////����5
//int main()
//{
//	int a[5][5];
//	int(*p)[5];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
////00000000, 0
////�밴���������. . .
