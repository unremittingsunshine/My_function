<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ͨ���������ַ����������ĸ��ƣ�ͨ��assert���ж�����������Ƿ���ȷ��ȷ�������ƻ�
void my_strcpy(char *dst ,char * src)
{
	assert(*dst != 'NULL');//����
	assert(*src != 'NULL');//����
	while (*dst++ = *src++)
	{
		;
	}
};
int main()
{
	char arr1[] = { "################" };
	char arr2[] = { "little girl" };
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
=======
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////ͨ���������ַ����������ĸ��ƣ�ͨ��assert���ж�����������Ƿ���ȷ��ȷ�������ƻ�
//void my_strcpy(char *dst ,char * src)
//{
//	assert(*dst != 'NULL');//����
//	assert(*src != 'NULL');//����
//	while (*dst++ = *src++)
//	{
//		;
//	}
//};
//int main()
//{
//	char arr1[] = { "################" };
//	char arr2[] = { "little girl" };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////�Զ������ַ�������
//int my_strlen(const char * src)
//{
//	int count = 0;
//	assert(src != NULL);//���ԣ��ж��Ƿ�Ϊ��ָ��
//	while (*src++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//int ret;
//	char arr1 []= { "my little girl!" };
//	//ret = my_strlen(arr1);
//	printf("�ַ����ȣ�%d\n", my_strlen(arr1));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////�жϵ�ǰ�����Ǵ�˴洢����С�˴洢
//int judge(const int * src)
//{
//	//ǿ������ת������intת��Ϊchar;
//	//int����*src�Ķ����ƣ�0000 0000 0000 0000 0000 0000 0000 0001  �ĸ��ֽ�32������λ
//	//����Ǵ�˴洢�����ֽ�˳���Ǹ�λ�洢�ڵ͵�ַ����λ�洢�ڸߵ�ַ��Ϊ��0x00 000001
//	//�����С�˴洢�����ֽ�˳���Ǹ�λ�洢�ڸߵ�ַ����λ�洢�ڵ͵�ַ��Ϊ��0x01 000000
//	//char����*src�Ķ�����ֻ��һ���ֽڣ�ֻ��ȡ�洢��ַ��ǰ�˸����أ�����Ҫô��00��Ҫô��01
//	assert(src!=NULL)
//	char *p = (char*)src;
//	return *(char*)src;
//}
//int main()
//{
//	int a = 1;
//	int ret = judge(&a);
//	printf("С��Ϊ1�����Ϊ0\n%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////�Ż�����ַ������ƺ���
//char* my_strcpy( char * dest, const char * src)
//{
//	char *p = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++);
//	return p;
//}
//int main()
//{
//	char arr1[] = { "################" };
//	char arr2[] = { "my little girl!" };
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
#include<stdio.h>
int main()
{
	//b=128=127+1����Ϊ���з�������char��ʾ���ֵķ�Χ��-128��127��������һ��ԲȦ���д洢����ʽ�����Ե�����127ʱ����һλ�ʹ�-128�������´洢��
	char a = -128;
	char b = 128;
	char c = 129;
	printf("%d\n%d\n%d\n", a, b,c);
>>>>>>> 1743b2d (my_function_strlen)
}
