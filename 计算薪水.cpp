#include <stdio.h>
int main()
{
	const double RATE=8.25;
	const int STANDARD=40;
	double pay=0.0;
	int hours;
	printf("输入工作时间：");
	scanf("%d",&hours);
	printf("\n");
	if (hours<=STANDARD)
	{
		pay=RATE*STANDARD;
		printf("你的薪水是：%f\n",pay);
	}
	else
	{
	    pay=RATE*STANDARD+(hours-STANDARD)*RATE*1.5;
		printf("你的薪水是:%f\n",pay);
		 
	 } 
	 printf("结账完毕，下一位。");
	 return 0; 
}
