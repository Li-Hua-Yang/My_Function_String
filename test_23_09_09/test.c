#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//计数器
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//指针-指针
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	char* ret = str;
//	while (*ret)
//	{
//		ret++; 
//	}
//	return ret-str;
//}

//递归
size_t my_strlen(const char* str)
{
	assert(str);
	if (*str)
	{
		return my_strlen(str + 1) + 1;
	}
	else
	{
		return 0;
	}
}

char* my_strcpy(char* dest, const char* sour)
{
	assert(dest);
	assert(sour);
	char* ret = dest;
	while (*dest++ = *sour++)
	{
		;
	}
	return ret;
}

char* my_strcat(char* dest, const char* sour)
{
	assert(dest && sour);
	char* ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *sour++)
	{
		;
	}
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

int main()
{
	char arr1[] = "hello ";
	char arr2[20] = { 0 };
	char* p = "world";
	size_t n = my_strlen(arr1);
	printf("%u\n", n);

	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);

	my_strcat(arr2, p);
	printf("%s\n", arr2);

	int ret = my_strcmp(arr1, arr2);
	if (ret < 0)
		printf("<\n");
	else if (ret > 0)
		printf(">\n");
	else
		printf("=\n");
	return 0;
}