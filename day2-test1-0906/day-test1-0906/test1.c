#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<assert.h>
////strlen
////����������
////ָ��-ָ��
////�ݹ�
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//    //while (*str != '\0')  
//	while (*str)
//	{
//		count++; 
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len =my_strlen("abcdef");
//	
//	//����ʾ��
//	/*char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	int len = strlen(arr);*/
//	printf("%d\n", len);
//	return 0;
//}
////6
////�밴���������. . .

//size_t == unsigned int 
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

////strcpy
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src !=  NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	//while (*src != '\0')
//	while (*dest++ = *src++)
//	{
//		/**dest = *src;
//		dest++;
//		src++;*/
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy();
//	my_strcpy(arr1 , arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////strcat���ܸ��Լ�׷��
//my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//�ҵ�Ŀ�ĵ��ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp
//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0; //���
//		}
//		str1++;
//		str2++;
//     }
//	if (*str1 > *str2)
//		return  1; //����
//	else
//		return -1; //С��
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwb";
//	int ret = my_strcmp(p1, p2);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//strncpy

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 6);//����6
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	const char arr1[30] = "abcdef";
//	char arr2[ ]  = "abcqwer";
//	int ret = strcmp(arr1, arr2);
//	printf("%d\n", ret);
//	return 0;
//}

////��ָ��
//int main()
//{
//	const char arr1[30] = "abcdef";
//	char arr2[] = "abcqwer";
//	int ret = strncmp(arr1, arr2,6);
//	printf("%d\n", ret);
//	return 0;
//}

//�����ַ���  -c����
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "def";
//	char* ret =strstr(p1, p2);
//	if (ret == NULL)
//		printf("�ַ���������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char *s1 = p1;
//	char *s2 = p2;
//	char *cur = (char*)p1;
//	if (*p2 == NULL)
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while( *s1 && *s2 &&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == "\0")
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char *p1 = "abbcdef";
//	char *p2 = "bbc";
//	char *ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�ַ���������\n");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


//strtok����
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char *p = "@.";
//	char* buf[1024] = { 0 };
//	strcpy(buf, arr);
//	/*char* ret=strtok(arr,p);
//	printf("%s\n", ret);
//	
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strerror
//0 1 2 3 4 �ȴ�����
//#include<errno.h>
//int main()
//{
//	/*char*str = strerror(errno);
//	printf("%s\n", str);*/
//
//	FILE* pf = fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", sterror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

//#include<ctype.h>
//int main()
//{
//	/*char ch = '@';
//	int ret=islower(ch);
//	printf("%d\n", ret);*/
//	
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	
//	char arr[] = "I Am  A  Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//		arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


