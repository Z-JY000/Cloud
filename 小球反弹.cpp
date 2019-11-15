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
	printf("第10次落地共经过%.1f米\n",s);
	printf("第10次反弹%.1f米\n",h);
	system ("pause");
	return 0;
}
