#include <stdio.h>
int main()
{
	char ch;
	printf("������ĳɼ��ȼ���");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A': printf("��ĳɼ���90�����ϣ�");break; 
		case 'B': printf("��ĳɼ���80-90�֣�"); break;
		case 'C': printf("��ĳɼ���70-80�֣�"); break;
		case 'D': printf("��ĳɼ���60-70�֣�"); break;
		case 'E': printf("��ĳɼ�������"); break;
		default:printf("��������Ч�ĳɼ�������"); break;
	 } 
	 return 0;
}
