//非原创代码，来自CSDN博客，ID:子耀 
#include <stdio.h>
#include <stdlib.h>
int main()
{                                         
	int i,j,a,b,c;
	int count=0;
	for (i=100;i<=999;i++){
		a=i/100;                         //百位数求取 
		b=(i%100)/10;                    //十位数求取 
		c=i%10;                          //个位数求取 
		j=a*a*a+b*b*b+c*c*c;
		if (i==j){
			count++;
			printf("%d\n",i);
		}
	}
	printf("\n水仙花数的个数为count=%d\n",count);
	system("pause");
	return 0;
 } 
  
