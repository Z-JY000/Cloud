#include <stdio.h>
int main()
{
	float foot,inch;
	printf("����ߴ��С��");
	scanf("%f %f",&foot,&inch);
	printf("�����%f�ס�\n",
	        ((foot+inch/12.0)*0.3048));
	return 0;
	
}
