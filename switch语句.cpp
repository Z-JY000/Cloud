#include <stdio.h>
int main()
{
	char ch;
	printf("输入你的成绩等级：");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A': printf("你的成绩在90分以上！");break; 
		case 'B': printf("你的成绩在80-90分！"); break;
		case 'C': printf("你的成绩在70-80分！"); break;
		case 'D': printf("你的成绩在60-70分！"); break;
		case 'E': printf("你的成绩不及格！"); break;
		default:printf("请输入有效的成绩评级！"); break;
	 } 
	 return 0;
}
