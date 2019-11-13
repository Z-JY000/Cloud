/*如果b=0，计算结束，a是最大公约数；
否则，计算a除以b的余数，让a=b,而b等于哪个余数
回到第一步
 
a  b  t
12 18 12
18 12 6
12 6  0
6  0
*/
#include <stdio.h>

int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	
	while (b!=0){
		t=a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t);
	}
	printf("gcd=%d\n",a);
	return 0;
}
 
