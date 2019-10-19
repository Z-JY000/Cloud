#include <stdio.h>
int main()
{
	double foot,inch;
	printf("输入身高尺寸：");
	scanf("%lf %lf",&foot,&inch);
	printf("身高为：%f米\n",
	     ((foot+inch/12)*0.3048));
	return 0;
 
}
