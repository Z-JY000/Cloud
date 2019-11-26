#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;
	
	for (i=0;i<6;i++) {
		printf("\n");                     //进行换行操作 
		for (j=0;j<5-i;j++) {
			printf(" ");                  //输出空格 
		}
		for (j=0;j<2*i+1;j++){
			printf("*");                  //输出特定个数的星号 
		}
		}
		
	system("pause");
	return 0;
}
