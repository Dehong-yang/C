#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//ö������
//enum  Sex
//{
//	//aö�ٵĿ���ȡֵ-����
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

//���ϣ������� �����壩
//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա����
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
////�밴���������. . .


//��С�˵��ж�
//int check_sys()
//{
//	int a = 1;
//	//����1 ��ʾС��
//	//����0 ��ʾ���
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
//	//����1 ��ʾС��
//	//����0 ��ʾ���
//	return u.c;
//}
//int main()
//{
//	//int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//		printf("С��\n");
//	else
//		printf("���\n"); 
//	/*if (1 == *(char *)&a)
//		printf("С��\n");
//	else
//		printf("���\n");*/
//	//int a = 0x11 22 33 44;
//	//�͵�ַ��������>�ߵ�ַ
//	//����[][][][][11][22][33][44][][][][][][][][]����   ����ֽ���洢ģʽ
//	//����[][][][][44][33][22][11][][][][][][][][]����   С���ֽ���洢ģʽ
//	//����һ�����ݷ����ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//	return 0;
//}
//С��
//�밴���������. . .

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
//�밴���������. . .