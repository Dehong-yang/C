#define _CRT_SECURE_NO_DEPRECAT
//#include<stdio.h>
//��������
//struct s
//{
//	int n;
//	//int arr[];
//	int arr[0]; //δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	//struct s s;
//	//printf("%d\n",sizeof(s));
//	struct s*ps = (struct s*)malloc(sizeof(struct s)+5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		ps->arr[i] = i;
//	struct s* ptr=realloc(ps, 44);
//	if (ptr == NULL)
//		ps = ptr;
//	for (i = 5; i < 10; i++)
//		ps -> arr[i] = i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", ps->arr[i]);
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	int*  arr;
//};
//int main()
//{ 
//	struct S *ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 5; i < 10; i++)
//		ps->arr[i] = i;
//	for(i = 0; i < 10; i++)
//		printf("%d", ps->arr[i]);
//	//������С
//	int *ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//		ps->arr = ptr;
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		int j;
//		int count = 0;
//		for (j = 2; j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}


////�˷��ھ���
//#include<stdio.h>
//int main()
//{
//	int i,j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%-4d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}

//�ж�1000��---2000��֮�������
//�����ж����ܱ�400���������ܱ�4���������ܱ�100�������������ݶ�Ϊƽ��
#include<stdio.h>
int main()
{
	int i,count=0;
	for(i = 1000; i <= 2000; i++)
	{
		if (i % 400 == 0 || ((i % 4 == 0) && (i / 100 != 0)))
		{
			printf("%d  ", i);
			count++;
		}
		if (count == 20)
		{
			printf("\n");
			count = 0;
		}
	}
	printf("\n");
	return 0;
}