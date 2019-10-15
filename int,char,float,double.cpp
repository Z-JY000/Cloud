#include<stdio.h> 

int main()
{
	int a=255;
	char b='H';
	float c=3.14;
	double d=3.1415926535;
	
	printf("我高中的班级是%d\n",a);
	printf("姓氏开头字母为%c\n",b);
	printf("圆周率为:%.2f\n",c);
	printf("圆周率精确到后10位时为：%12.10f\n",d);
	return 0;
	
	
}
