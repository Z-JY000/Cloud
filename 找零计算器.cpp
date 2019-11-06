#include <stdio.h>
int main()
{
	int price,bill;
	printf("请输入金额：");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);
	if (bill>=price)
	{
		int change;
		change=bill-price;
		printf("找您%d元",change); 
	 } 
	 else
	 {
	 	int money;
	 	money=price-bill;
	 	printf("对不起，您的钱不够,还差%d元。\n",money); 
	 }
	printf("欢迎下次光临！");
	 return 0;
}
