//��ԭ�����룬����CSDN���ͣ�ID:��ҫ 
#include <stdio.h>
#include <stdlib.h>
int main()
{                                         
	int i,j,a,b,c;
	int count=0;
	for (i=100;i<=999;i++){
		a=i/100;                         //��λ����ȡ 
		b=(i%100)/10;                    //ʮλ����ȡ 
		c=i%10;                          //��λ����ȡ 
		j=a*a*a+b*b*b+c*c*c;
		if (i==j){
			count++;
			printf("%d\n",i);
		}
	}
	printf("\nˮ�ɻ����ĸ���Ϊcount=%d\n",count);
	system("pause");
	return 0;
 } 
  
