#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	//ʹ��
//	int*p2 = realloc(p, 80);
//	if (p2 != NULL)
//		p = p2;
//	return 0;
//
//}


//���������
//��Ŀ1
//���г���������ֱ�������
//���������ڴ�й©������
//str��ֵ����ʽ��p ,p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч
//��GetMemory��������֮��̬�����ڴ�δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
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

// �޸ĺ��
//��ʽһ
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
////�밴���������. . 
//��ʽ��.
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

//��Ŀ2
//����ջ�ռ�ĵ�ַ������
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