#include <stdio.h>
#include <float.h>

int x;
int y;
int addtwonum()
{
	//函数内声明变量x和y为外部变量
	extern int x;
	extern int y;
	x = 1;
	y = 2;
	return x + y;
}
int main()
{
	/*这是我的第一个c语言程序*/
	//printf("hello world! \n");

	//return 0;
	//printf("int 存储大小 ： %lu \n",sizeof(int));
	//return 0;
	/*printf("float 存储最大字节数：%lu \n", sizeof(float));
	printf("float 最小值：%E\n", FLT_MIN);
	printf("float 最大值：%E\n",FLT_MAX);
	printf("精度值：%d\n",FLT_DIG);
	return 0;*/
	int result;
	//调用函数 addtwonum
	result = addtwonum();
	printf("result 为：%d",result);
	return 0;
}