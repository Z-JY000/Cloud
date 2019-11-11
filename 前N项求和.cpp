#include <Stdio.h>
int main()
{
	int i;
	int n;
	double sum=0.0;
	scanf("%d",&n);
	int sign=1;
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;
	//	sign=-sign;
	}
	printf("f(%d)=%lf\n",n,sum);
	return 0;
}
