#include <stdio.h>
int main()
{
	unsigned int x;     //正整数和0的X 
	scanf("%d",&x);
	int i;
	int isPrime=1;
	for (i=2;i<x;i++)    //嵌套循环 
	{
	 if(x%i==0)
	 {
	 	isPrime=0;
	 	break;     //跳出循环 
	 }
}
	if (isPrime==1)
	{
		printf("是素数\n");
		
	}
	else {
		printf("不是素数");
	} 
	return 0;
}
