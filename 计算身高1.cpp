#include <stdio.h>
int main()
{
	float foot,inch;
	printf("输入尺寸大小：");
	scanf("%f %f",&foot,&inch);
	printf("身高是%f米。\n",
	        ((foot+inch/12.0)*0.3048));
	return 0;
	
}
