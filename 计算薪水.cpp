#include <stdio.h>
int main()
{
	const double RATE=8.25;
	const int STANDARD=40;
	double pay=0.0;
	int hours;
	printf("���빤��ʱ�䣺");
	scanf("%d",&hours);
	printf("\n");
	if (hours<=STANDARD)
	{
		pay=RATE*STANDARD;
		printf("���нˮ�ǣ�%f\n",pay);
	}
	else
	{
	    pay=RATE*STANDARD+(hours-STANDARD)*RATE*1.5;
		printf("���нˮ��:%f\n",pay);
		 
	 } 
	 printf("������ϣ���һλ��");
	 return 0; 
}
