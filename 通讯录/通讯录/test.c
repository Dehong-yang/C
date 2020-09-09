#define _CRT_SECURE_NO_DEPRECATE
#include"contact.h"
#define MAX 1000
void menu()
{
	printf("********************************************\n");
	printf("*********1. add        2.  del      ********\n");
	printf("*********3. search     4.  modfit   ********\n");
	printf("*********5. show       6.  sort     ********\n");
	printf("*********0. exit                    ********\n");
	printf("********************************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact  con; //con就是通讯录，里面包含:1000个元素的数组和size
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con, &size);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while();
	return 0;
}