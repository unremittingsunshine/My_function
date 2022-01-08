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
}
