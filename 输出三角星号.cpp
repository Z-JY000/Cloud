#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	
	for (i=0;i<6;i++) {
		printf("\n");                     //���л��в��� 
		for (j=0;j<5-i;j++) {
			printf(" ");                  //����ո� 
		}
		for (j=0;j<2*i+1;j++){
			printf("*");                  //����ض��������Ǻ� 
		}
		}
		
	system("pause");
	return 0;
}
