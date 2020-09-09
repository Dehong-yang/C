#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	//使用
//	int*p2 = realloc(p, 80);
//	if (p2 != NULL)
//		p = p2;
//	return 0;
//
//}


//经典笔试题
//题目1
//运行程序代码会出现崩溃现象
//程序会出现内存泄漏的问题
//str以值的形式给p ,p是GetMemory函数的形参，只能在函数内部有效
//等GetMemory函数返回之后动态开辟内存未释放，并且无法找到，所以会造成内存泄漏
//void GetMemory(char* p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

// 修改后的
//方式一
//void GetMemory(char* *p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	printf("\n");
//	return 0;
//}
////hello world
////请按任意键继续. . 
//方式二.
//char* GetMemory(char* p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	printf("\n");
//	return 0;
//}

//题目2
//返回栈空间的地址的问题
//char *GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

int* test()
{
	static int a = 10;
	return &a;
}
int main()
{
	int*p = test();
	*p = 20;
	return 0;
}