#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50]; //50个struct S 类型的数据
//	//30 不够
//	//60 浪费
//	return 0;
//}

//C语言是可以创建变长数组 - C99中增加了
//malloc与free 成对使用

//#include<stdlib.h>
//#include<errno.h>
//int main()
//{
//	//向内存申请10个整形空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//			*(p + i) = i;
//		for (i = 0; i < 10; i++)
//			printf("% d", *(p + i));
//		printf("\n");
//	}
//	//当动态申请的空间不再使用的时候，就应该还给操作系统
//	//如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//    //如果参数 ptr 是NULL指针，则函数什么事都不做。
//	free(p);     //释放和回收空间 
//	p = NULL;  //断开联系
//	return 0;
//}


//calloc函数 
//#include<stdlib.h>
//#include<errno.h>
//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int *)calloc(10,sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//free - 释放动态开辟空间
//	free(p); 
//	p = NULL;
//	return 0;
//}

//realloc - 调整动态内存开辟大小
#include<stdlib.h>
#include<errno.h>
int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* p2 = realloc(p, 40);
	int i = 0;
	for (i = 5; i < 10; i++)
	{
		*(p2 + i) = i;
	}
	for (i = 0; i < 10; i++)
		printf("%d ", *(p + i));
	//假设20个字节不能满足使用
	//希望能够有40个字节
	//用realloc来调整动态开辟的内存

	//realloc注意事项
	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存空间地址
	//最后返回新开辟的内存空间地址
	//3.得用新的变量接收realloc函数的返回值
	free(p);
	p= NULL;
	return 0;
}