#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50]; //50��struct S ���͵�����
//	//30 ����
//	//60 �˷�
//	return 0;
//}

//C�����ǿ��Դ����䳤���� - C99��������
//malloc��free �ɶ�ʹ��

//#include<stdlib.h>
//#include<errno.h>
//int main()
//{
//	//���ڴ�����10�����οռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//			*(p + i) = i;
//		for (i = 0; i < 10; i++)
//			printf("% d", *(p + i));
//		printf("\n");
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
//	//������� ptr ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
//    //������� ptr ��NULLָ�룬����ʲô�¶�������
//	free(p);     //�ͷźͻ��տռ� 
//	p = NULL;  //�Ͽ���ϵ
//	return 0;
//}


//calloc���� 
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
//	//free - �ͷŶ�̬���ٿռ�
//	free(p); 
//	p = NULL;
//	return 0;
//}

//realloc - ������̬�ڴ濪�ٴ�С
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
	//����20���ֽڲ�������ʹ��
	//ϣ���ܹ���40���ֽ�
	//��realloc��������̬���ٵ��ڴ�

	//reallocע������
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ�ռ��ַ
	//��󷵻��¿��ٵ��ڴ�ռ��ַ
	//3.�����µı�������realloc�����ķ���ֵ
	free(p);
	p= NULL;
	return 0;
}