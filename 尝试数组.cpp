#include <Stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	int number[20] = { 1,2,3,4,5,6,7,8,9 };
	x=number[3] ;     //访问的是数组中的第N+1个数字 
	printf("%d\n", x);
	system ("pause");
	return 0;
}
