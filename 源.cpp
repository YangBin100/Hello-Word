#include <stdio.h>
#include <float.h>

int x;
int y;
int addtwonum()
{
	//��������������x��yΪ�ⲿ����
	extern int x;
	extern int y;
	x = 1;
	y = 2;
	return x + y;
}
int main()
{
	/*�����ҵĵ�һ��c���Գ���*/
	//printf("hello world! \n");

	//return 0;
	//printf("int �洢��С �� %lu \n",sizeof(int));
	//return 0;
	/*printf("float �洢����ֽ�����%lu \n", sizeof(float));
	printf("float ��Сֵ��%E\n", FLT_MIN);
	printf("float ���ֵ��%E\n",FLT_MAX);
	printf("����ֵ��%d\n",FLT_DIG);
	return 0;*/
	int result;
	//���ú��� addtwonum
	result = addtwonum();
	printf("result Ϊ��%d",result);
	return 0;
}