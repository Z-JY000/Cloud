#include <stdio.h>
#include <stdlib.h>
int main()
{
	double s=100,h=s/2;
	int n;
	for(n=2;n<=100;n++)
	{
		s=s+2*h;
		h/=2;
	}
	printf("��10����ع�����%.1f��\n",s);
	printf("��10�η���%.1f��\n",h);
	system ("pause");
	return 0;
}
