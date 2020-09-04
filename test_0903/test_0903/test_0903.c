#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
//int main()
//{
//	//int *p = NULL;  //p是整型指针-指向整型的指针-可以存放整型的地址
//	//char *pc = NULL;
//    
//	int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10]= &arr;//数组的地址存起来
//	//p就是数组指针
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}
//参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i=0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("% d ", arr[i][j]);
//		printf("\n");
//	}
//}
////参数是指针形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("% d ", *(*(p + i) + j));
//			  printf("% d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	//print1(arr,3,5);
//	//print2(arr, 3, 5);
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%-2d  ", *(p + i));
//		printf("%-2d  ", *(arr + i));
//		printf("%-2d  ", arr[i]);  //arr[i]==*(p+i)==*(arr+i)==p[i]
//		printf("%-2d  ", p[i]);
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int w=sizeof(int)<<3;
//	unsigned z=1<<(w-0);
//	printf("%x\n",6&(z-1));
//	unsigned x=2<<(w-0-1);
//	printf("%x\n",6&(x-1));
//}
//int main()
//{
//	unsigned z = 1 << (sizeof(int) << 3);
//	printf("%x\n", 6 & (z - 1));
//	unsigned x = 2 << ((sizeof(int) << 3) - 1);
//	printf("%x\n", 6 & (x - 1));
//}
//int  main()
//{
//	int age = 0;
//	scanf("%d ", &age);
//	if (age < 18)
//		printf("未成年\n");
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年了\n");
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if(age >= 50 && age < 80)
//		printf("老年\n");
//	else 
//		printf("老不死\n");
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
//	return 0;
//}
//判断一个数是否是奇数
//int main()
//{
//	int input=0 ;
//	printf("请输入一个数：");
//	scanf("%d", &input);
//	if (input%2 == 1)
//		printf("这个数是奇数\n");
//	else
//	    printf("这个数不是奇数\n");
//	return 0;
//}
//输出1-100之间的奇数
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	printf("\n");
//}
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：");
//	scanf("%d", &day);
//	switch(day)
//	{
//	    case 1:
//			printf("星期一\n");
//		    break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：");
//	scanf("%d", &day);
//	switch (day)
//	{
//	    case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch (n)
//			{
//				case 1:
//					n++;
//				case 2:
//					m++;
//					n++;
//					break;
//			}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i=i+1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

//计算n的阶乘
//int jiecheng(int n)
//{
//	int i = 1;
//	int sum=1;
//	while (i <= n)
//	{
//		sum = sum*i;
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	//printf("请输入一个数：");
//	scanf("%d", &n);
//	printf("%d \n",jiecheng(n));
//	return 0;
//}


////计算1!+2!+…+10!
//#define N 10
//int fact(int n)
//{
//
//	int i = 1;
//	int s = 1;
//	for (i = 1; i <= n; i++)
//	{
//			s *=i;
//	}
//	return s;
//}
//int main()
//{
//	int s = 0;
//	int i;
//	for (i = 1; i <= N; i++)
//		s += fact(i);
//	printf("1!+2!+……+10! = %d\n", s);
//	return 0;
//}


//void binsearch(int x, int v[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (x == v[i])
//		{
//			printf("查到了，查找的数的下标为：%d\n",i + 1);
//			break;
//		}
//	
//	}
//	return 0;
//}
//int main()
//{
//	int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(v) / sizeof(v[0]);
//	binsearch(55, v, sz);
//	return 0;
//
//}


//演示多个字符从两端移动，向中间汇聚
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	//while循环实现
//	/*while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left]  = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}*/
//	//for循环实现
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	}
//	return 0;
//}

//int main()
//{
//	char psw[10] = " ";
//	int i ;
//	for (i = 0; i < 3; ++i)
//	{
//		printf("please input:");
//		scanf("%s", psw);
//		if (strcmp(psw, "password") == 0)
//			break;
//	}
//	if (i == 3)
//		printf("exit\n");
//	else
//		printf("log in\n");
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 8;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标是%d\n", mid+1);
//	else
//		printf("找不到\n");
//	return 0;
//}


//找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//交换两个整型变量的内容
//void Swap1(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void Swap2(int *px, int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int  num1 = 10;
//	int  num2 = 20;
//	Swap1(num1, num2);
//	printf("Swap1::num1 = %d num2 = %d\n", num1,num2);
//	Swap2(&num1, &num2);
//	printf("Swap2::num1 = %d num2 = %d\n", num1,num2);
//	return 0;
//}


////判断一个数是不是素数
//void  panduan_sushu(int i)
//{
//	int a = 0;
//	for (int j = 2; j < i; j++)
//	{
//		if (i%j == 0){
//			a++;
//		}
//	}
//	if (a == 0)
//		printf("%d是素数\n", i);
//	else
//		printf("%d不是素数\n", i);
//}
//int main()
//{
//	int i=0;
//	printf("请输入一个数：");
//	scanf("%d", i);
//	panduan_sushu(i);
//	return 0;
//}


//int main(){
//	int a = 0;  // 素数的个数
//	int num = 0;  // 输入的整数
//	printf("输入一个整数：");
//	scanf("%d", &num);
//	for (int i = 2; i<num; i++){
//		if (num%i == 0){
//			a++;  // 素数个数加1
//		}
//	}
//	if (a == 0){
//		printf("%d是素数。\n", num);
//	}
//	else{
//		printf("%d不是素数。\n", num);
//	}
//	return 0;
//}