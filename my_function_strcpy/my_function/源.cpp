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
}
