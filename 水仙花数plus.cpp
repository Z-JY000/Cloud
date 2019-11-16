#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c;
	double d,e,f;
	int x;
	int count=0;
	for(x=100;x<=999;x++){
		a=x/100;
		b=(x%100)/10;
		c=x%10;
		double d=pow(a,3);
		double e=pow(b,3);
		double f=pow(c,3);
		if (d+e+f==x){			
			count++;
			printf("%d\n",x);
		}
		
	}
	printf("共有%d个水仙花数",count);
	system("pause");
	return 0;
 } 
