#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1,num2,r;
	int choice;
	do {
		printf("*_____________*\n");
		printf("*请输入选择的运算类型*\n");
		printf("*_____________*\n");
		printf("1.加法\n");
		printf("2.减法\n");
		printf("3.乘法\n");
		printf("4.除法\n");
		printf("5.退出\n");
		printf("请输入选择：（1-5)");
		scanf("%d",&choice); 
	}
	while (choice<1||choice>5);
	
	switch (choice){
	case 1:
	scanf("%d+%d",&num1,&num2);
	r=num1+num2;
	break;
	case 2:
	scanf("%d-%d",&num1,&num2);
	r=num1-num2;
	break;
	case 3:
	scanf("%d*%d",&num1,&num2);
	r=num1*num2;break;
	case 4:
	scanf("%d/%d",&num1,&num2);
	r=num1/num2;break;
	case 5:
	break;
}
	printf("the result is %d\n",r);
	system("pause");
	return 0;	
 
}
