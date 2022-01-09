<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#include<assert.h>
//通过传数组地址来进行数组的复制，通过assert来判断输入的数组是否正确，确保不搞破坏
void my_strcpy(char *dst ,char * src)
{
	assert(*dst != 'NULL');//断言
	assert(*src != 'NULL');//断言
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
////通过传数组地址来进行数组的复制，通过assert来判断输入的数组是否正确，确保不搞破坏
//void my_strcpy(char *dst ,char * src)
//{
//	assert(*dst != 'NULL');//断言
//	assert(*src != 'NULL');//断言
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
////自定义求字符串长度
//int my_strlen(const char * src)
//{
//	int count = 0;
//	assert(src != NULL);//断言，判断是否为空指针
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
//	printf("字符长度：%d\n", my_strlen(arr1));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////判断当前机器是大端存储还是小端存储
//int judge(const int * src)
//{
//	//强制类型转换，将int转换为char;
//	//int类型*src的二进制：0000 0000 0000 0000 0000 0000 0000 0001  四个字节32个比特位
//	//如果是大端存储，其字节顺序是高位存储在低地址，低位存储在高地址则为：0x00 000001
//	//如果是小端存储，其字节顺序是高位存储在高地址，低位存储在低地址则为：0x01 000000
//	//char类型*src的二进制只有一个字节，只能取存储地址的前八个比特，所以要么是00，要么是01
//	assert(src!=NULL)
//	char *p = (char*)src;
//	return *(char*)src;
//}
//int main()
//{
//	int a = 1;
//	int ret = judge(&a);
//	printf("小段为1，大段为0\n%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////优化后的字符串复制函数
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
	//b=128=127+1，因为是有符号数，char表示数字的范围是-128到127，且是用一个圆圈进行存储的形式，所以当大于127时，下一位就从-128继续往下存储。
	char a = -128;
	char b = 128;
	char c = 129;
	printf("%d\n%d\n%d\n", a, b,c);
>>>>>>> 1743b2d (my_function_strlen)
}
