#include <stdio.h>
int main()
{
	unsigned int x;     //��������0��X 
	scanf("%d",&x);
	int i;
	int isPrime=1;
	for (i=2;i<x;i++)    //Ƕ��ѭ�� 
	{
	 if(x%i==0)
	 {
	 	isPrime=0;
	 	break;     //����ѭ�� 
	 }
}
	if (isPrime==1)
	{
		printf("������\n");
		
	}
	else {
		printf("��������");
	} 
	return 0;
}
