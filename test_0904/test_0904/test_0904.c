#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	//指针数组-数组-存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针-指向数组
//
//}
int main(){
	int    a = 10, *pa = &a, *paa = &a;
	double b = 99.9, *pb = &b;
	char   c = '@', *pc = &c;
	//最初的值
	printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//加法运算
	pa++; pb++; pc++;
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//减法运算
	pa -= 2; pb -= 2; pc -= 2;
	printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
	//比较运算
	if (pa == paa){
		printf("%d\n", *paa);
	}
	else{
		printf("%d\n", *pa);
	}
	return 0;
}