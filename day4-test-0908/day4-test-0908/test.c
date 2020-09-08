#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//枚举类型
//enum  Sex
//{
//	//a枚举的可能取值-常量
//	MALE = 2,
//	FEMALE = 4,
//	SECRET = 8
//};
//enum Color
//{
//	red,  //0
//	green,//1
//	blue //2
//};
//#define red 0
//#define green 1
//#define blue  2
//int main()
//{
//	//enum Sex s = MALE;
//	
//	enum Color c = blue;
//	//printf("%d %d %d\n ", red, green, blue);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//联合（联合体 共用体）
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）。
//union un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &u);
//
//	return 0;
//}
////4
////0136F85C
////0136F85C
////0136F85C
////请按任意键继续. . .


//大小端的判断
//int check_sys()
//{
//	int a = 1;
//	//返回1 表示小端
//	//返回0 表示大端
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1 表示小端
//	//返回0 表示大端
//	return u.c;
//}
//int main()
//{
//	//int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n"); 
//	/*if (1 == *(char *)&a)
//		printf("小端\n");
//	else
//		printf("大端\n");*/
//	//int a = 0x11 22 33 44;
//	//低地址…………>高地址
//	//……[][][][][11][22][33][44][][][][][][][][]……   大端字节序存储模式
//	//……[][][][][44][33][22][11][][][][][][][][]……   小端字节序存储模式
//	//讨论一个数据放在内存中的存放的字节顺序
//	//大小端字节序问题
//	return 0;
//}
//小端
//请按任意键继续. . .

//enum Sex
//{
//	male,
//	female,
//	srcret
//};
//int main()
//{
//	enum Sex s = male;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

union un
{
	int a;//4   8  4
	char arr[5];//5  1  8
};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));
	return 0;
}
//8
//请按任意键继续. . .