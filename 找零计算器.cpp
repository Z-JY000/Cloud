#include <stdio.h>
int main()
{
	int price,bill;
	printf("�������");
	scanf("%d",&price);
	printf("������Ʊ�棺");
	scanf("%d",&bill);
	if (bill>=price)
	{
		int change;
		change=bill-price;
		printf("����%dԪ",change); 
	 } 
	 else
	 {
	 	int money;
	 	money=price-bill;
	 	printf("�Բ�������Ǯ����,����%dԪ",money); 
	 }
	 return 0;
}
