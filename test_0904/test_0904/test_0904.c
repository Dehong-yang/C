#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//ָ������-����-���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��-ָ������
//
//}
int main(){
	int    a = 10, *pa = &a, *paa = &a;
	double b = 99.9, *pb = &b;
	char   c = '@', *pc = &c;
	//�����ֵ
	printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//�ӷ�����
	pa++; pb++; pc++;
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//��������
	pa -= 2; pb -= 2; pc -= 2;
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//�Ƚ�����
	if (pa == paa){
		printf("%d\n", *paa);
	}
	else{
		printf("%d\n", *pa);
	}
	return 0;
}