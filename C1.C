#include <stdio.h> 
int main()
{
	int price=0;
	printf("输入金额:(元)");
	scanf("%d",&price);
	int change=100-price;
	printf("找您%d元\n");
	return 0;
}
