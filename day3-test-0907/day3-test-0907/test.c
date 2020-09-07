#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdio.h>

//声明一个结构体类型
//声明一个学生类型、是想通过学生类型来创建学生类型（对象）
//描述学生:属性-名字+电话+性别+年龄
//struct stu
//{
//	char name[20];  //名字
//	char tele[12];  //电话
//	char sex[10];   // 性别
//	int  age;        // 年龄
//}s4,s5,s6;
//struct stu s3;//全局变量
//int main()
//{
//	//创建结构体变量
//	struct stu s1;
//	struct stu s2;
//    return 0;
//}

//struct T
//{
//	double weight;
//	short  age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello bit" };
//	struct S s = { 'c', { 55.6, 30 }, 100, 3.14, "hello bit" };
//	printf("%lf\n", s.st.weight);
//	return 0;
//}


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double  d;
//	char c;
//	int a;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3 ;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));   //12
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));    //8
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));    //16
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));    //32
//	return 0;
//}


//#pragma pack(8) //设置对齐数为8
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack() //取消设置的默认对齐数，还原为默认
//
//#pragma pack(1)
//struct s2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack(1)
//
//int main()
//{
//	struct s1 s1;
//	struct s2 s2;
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


////求出偏移量 offsetof
//#include<stddef.h>
//struct s
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct s,c));
//	printf("%d\n", offsetof(struct s, i));
//	printf("%d\n", offsetof(struct s, d));
//	return 0;
//}
////0
////4
////8
////请按任意键继续. . .


//结构体传参
//struct S{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 31.4;
//}
//void Print1(struct S  tmp)
//{
//	printf("%d  %c  %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d  %c  %lf\n",ps->a ,ps->c ,ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);  //传值
//	Print2(&s); //传址
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 31.4;
//	printf("%d\n", s.a);*/
//	return 0;
//}


////位段 - 二进制
////节省空间
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
////47bit - 6个字节*8 = 48bit
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
////8
////请按任意键继续. . .
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//    char d : 4;
//};
//	int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.a = 12;
//	s.c = 3;
//	s.d = 4;
//	
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//	3
//	请按任意键继续. . .